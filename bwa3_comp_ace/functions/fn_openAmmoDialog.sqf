#include "\BWA3_Comp_ACE\script_component.h"

params [["_vehicle", objNull, [objNull]], ["_turret", [0], [[]]]];

If !(createDialog "BWA3_AmmoDialog") exitWith {};

disableSerialization;

private _dialog = findDisplay IDD_BWA3_MAGAZINEDIALOG;
_dialog setVariable ["BWA3_ammoDialog_curvehicle", _vehicle];
_dialog setVariable ["BWA3_ammoDialog_turret", _turret];
private _ctrlTable = _dialog displayCtrl IDC_BWA3_MAGAZINEDIALOG_CONTROLSTABLE;

(ctAddHeader _ctrlTable) params ["_headerindex", "_headercontrols"];
_headercontrols params ["_background", "_headertext"];
_background ctrlSetBackgroundColor [
    (profileNamespace getVariable ['GUI_BCG_RGB_R', 0.13]),
    (profileNamespace getVariable ['GUI_BCG_RGB_G', 0.54]),
    (profileNamespace getVariable ['GUI_BCG_RGB_B', 0.21]),
    0.5
];
_headertext ctrlsetText getText(configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName");


private _MaxAmmoAmount = count (getArray((_this call CBA_fnc_getTurret) >> "magazines"));
private _Weapons = _vehicle weaponsTurret _turret;
private _curMagazinesTurret = _vehicle magazinesTurret _turret;

private _possibleMagazines = [];
{
    _possibleMagazines append (getArray(configFile >> "CfgWeapons" >> _x >> "magazines"));
    nil
} count (_vehicle weaponsTurret _turret);

// filter the not usefull magazines
_possibleMagazines = _possibleMagazines select {
    (_x isKindOf ["VehicleMagazine", configFile >> "CfgMagazines"]) ||
    {getNumber(configFile >> "CfgMagazines" >> _x >> "scope") isEqualTo 1}
};

private _hashInit = [];
{
    private _curMag = _x;
    _hashInit pushBack [_curMag,({_x == _curMag} count _curMagazinesTurret) min _MaxAmmoAmount];
    nil
} count _possibleMagazines;

_dialog setVariable ["BWA3_ammoDialog_ammoHash", [_hashInit] call CBA_fnc_hashCreate];
_dialog setVariable ["BWA3_ammoDialog_MaxAmmoAmount", _MaxAmmoAmount];

{
    private _curMag = _x;
    private _curAmount = ({_x == _curMag} count _curMagazinesTurret) min _MaxAmmoAmount;
    (ctAddRow _ctrlTable) params ["_index","_controls"];
    _controls params ["_background","_ctrlText","_ctrlSlider","_ctrlEdit"];
    _ctrlText ctrlsetText getText(configFile >> "CfgMagazines" >> _curMag >> "displayNameShort");

    _ctrlSlider sliderSetRange [0,_MaxAmmoAmount];
    _ctrlSlider sliderSetPosition _curAmount;
    _ctrlSlider setVariable ["BWA3_ammoDialog_ctrlEdit", _ctrlEdit];
    _ctrlSlider setVariable ["BWA3_ammoDialog_Ammo", _curMag];
    _ctrlSlider ctrlAddEventHandler ["SliderPosChanged", {
        params ["_ctrlSlider", "_value"];
        private _ctrlEdit = _ctrlSlider getVariable "BWA3_ammoDialog_ctrlEdit";
        _value = round _value;
        _ctrlEdit ctrlSetText (str _value);
        private _hash = (ctrlParent _ctrlSlider) getVariable "BWA3_ammoDialog_ammoHash";
        [_hash, _ctrlSlider getVariable "BWA3_ammoDialog_ammo", _value] call CBA_fnc_hashSet;
    }];

    _ctrlEdit ctrlSetText str _curAmount;
    _ctrlEdit setVariable ["BWA3_ammoDialog_ctrlSlider", _ctrlSlider];
    _ctrlEdit ctrlAddEventHandler ["KeyUp", {
        params ["_ctrlEdit"];
        private _ctrlSlider = _ctrlEdit getVariable "BWA3_ammoDialog_ctrlSlider";
        private _value = parseNumber ctrlText _ctrlEdit;
        _ctrlSlider sliderSetPosition (round _value);
        private _hash = (ctrlParent _ctrlSlider) getVariable "BWA3_ammoDialog_ammoHash";
        [_hash, _ctrlSlider getVariable "BWA3_ammoDialog_ammo", _value] call CBA_fnc_hashSet;

    }];
    _ctrlEdit ctrlAddEventHandler ["KillFocus", {
        params ["_ctrlEdit"];
        private _ctrlSlider = _ctrlEdit getVariable "BWA3_ammoDialog_ctrlSlider";
        private _value = sliderPosition _ctrlSlider;
        _value = round _value;
        _ctrlEdit ctrlSetText (str _value);
        private _hash = (ctrlParent _ctrlSlider) getVariable "BWA3_ammoDialog_ammoHash";
        [_hash, _ctrlSlider getVariable "BWA3_ammoDialog_ammo", _value] call CBA_fnc_hashSet;
    }];

    nil
} count _possibleMagazines;

_dialog displayAddEventHandler ["Unload", {
    params ["_dialog","_exitCode"];
    if !(_exitCode isEqualTo 1) exitWith {};
    private _vehicle = _dialog getVariable "BWA3_ammoDialog_curvehicle";
    private _turret = _dialog getVariable "BWA3_ammoDialog_turret";
    private _hash = _dialog getVariable "BWA3_ammoDialog_ammoHash";
    {
        private _ammo = _x;
        private _amount = [_hash, _ammo] call CBA_fnc_hashGet;
        _vehicle removeMagazinesTurret [_ammo, _turret];
        for "_i" from 1 to _amount do {
            _vehicle addMagazineTurret [_ammo, _turret];
        };
    } count ([_hash] call CBA_fnc_hashKeys);
}];
