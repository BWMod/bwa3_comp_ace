#include "\BWA3_Comp_ACE\script_component.h"

params [["_vehicle", objNull, [objNull]], ["_turret", [0], [[]]]];

If ((!alive _vehicle) || {!(createDialog "BWA3_AmmoDialog")}) exitWith {};

disableSerialization;

BWA3_Comp_ACE_ammoDialog_curVehicle = _vehicle;
BWA3_Comp_ACE_ammoDialog_curTurret = _turret;

private _dialog = findDisplay IDD_BWA3_MAGAZINEDIALOG;
private _ctrlTable = _dialog displayCtrl IDC_BWA3_MAGAZINEDIALOG_CONTROLSTABLE;

(ctAddHeader _ctrlTable) params ["_headerindex", "_headercontrols"];
_headercontrols params ["_background", "_headertext"];
_background ctrlSetBackgroundColor [
    (profileNamespace getVariable ['GUI_BCG_RGB_R', 0.13]),
    (profileNamespace getVariable ['GUI_BCG_RGB_G', 0.54]),
    (profileNamespace getVariable ['GUI_BCG_RGB_B', 0.21]),
    0.5
];
_headertext ctrlsetText getText(configFile >> "CfgVehicles" >> typeOf BWA3_Comp_ACE_ammoDialog_curVehicle >> "displayName");

BWA3_Comp_ACE_ammoDialog_curHash = [] call CBA_fnc_hashCreate;
BWA3_Comp_ACE_ammoDialog_MaxMagazineAmount = BWA3_Comp_ACE_ammoDialog_curVehicle getVariable ["BWA3_comp_ace_maxMagazineLoad", count (getArray((_this call CBA_fnc_getTurret) >> "magazines"))];
private _Weapons = BWA3_Comp_ACE_ammoDialog_curVehicle weaponsTurret BWA3_Comp_ACE_ammoDialog_curTurret;
private _curMagazinesTurret = BWA3_Comp_ACE_ammoDialog_curVehicle magazinesTurret BWA3_Comp_ACE_ammoDialog_curTurret;

{
    private _possibleMagazines = getArray(configFile >> "CfgWeapons" >> _x >> "magazines");
    _possibleMagazines = _possibleMagazines select {
        (_x isKindOf ["VehicleMagazine", configFile >> "CfgMagazines"]) ||
        {getNumber(configFile >> "CfgMagazines" >> _x >> "scope") isEqualTo 1}
    };

    {
        private _curMag = _x;
        [BWA3_Comp_ACE_ammoDialog_curHash, _curMag, [({_x == _curMag} count _curMagazinesTurret) min BWA3_Comp_ACE_ammoDialog_MaxMagazineAmount]] call CBA_fnc_hashSet;
        nil
    } count _possibleMagazines;
    nil
} count (BWA3_Comp_ACE_ammoDialog_curVehicle weaponsTurret BWA3_Comp_ACE_ammoDialog_curTurret);

#define UPDATE_VALUES private _curMagazinesAmout = BWA3_Comp_ACE_ammoDialog_MaxMagazineAmount - _value; \
{ \
    ([BWA3_Comp_ACE_ammoDialog_curHash, _x] call CBA_fnc_hashGet) params ["_curAmount", "_ctrlSlider", "_ctrlEdit"]; \
    If ((_curMagazinesAmout - _curAmount) <= 0) then { \
        _curAmount = _curMagazinesAmout; \
        _ctrlSlider sliderSetPosition _curAmount; \
        _ctrlEdit ctrlsetText str _curAmount; \
        [BWA3_Comp_ACE_ammoDialog_curHash, _x, [_curAmount, _ctrlSlider, _ctrlEdit]] call CBA_fnc_hashSet; \
    }; \
    _curMagazinesAmout = _curMagazinesAmout - _curAmount; \
    nil \
} count (([BWA3_Comp_ACE_ammoDialog_curHash] call CBA_fnc_hashKeys) - [_curMagazine]); \
[BWA3_Comp_ACE_ammoDialog_curHash, _curMagazine, [_value, _ctrlSlider, _ctrlEdit]] call CBA_fnc_hashSet


{
    private _curMagazine = _x;
    ([BWA3_Comp_ACE_ammoDialog_curHash, _curMagazine] call CBA_fnc_hashGet) params ["_curMagazineAmount"];

    (ctAddRow _ctrlTable) params ["_index","_controls"];
    _controls params ["_background","_ctrlText","_ctrlSlider","_ctrlEdit"];
    _ctrlText ctrlsetText getText(configFile >> "CfgMagazines" >> _curMagazine >> "displayNameShort");

    _ctrlSlider sliderSetRange [0, BWA3_Comp_ACE_ammoDialog_MaxMagazineAmount];
    _ctrlSlider sliderSetPosition _curMagazineAmount;
    _ctrlSlider setVariable ["BWA3_ammoDialog_magazineClass", _curMagazine];

    _ctrlSlider ctrlAddEventHandler ["SliderPosChanged", {
        params ["_ctrlSlider", "_value"];
        private _curMagazine = _ctrlSlider getVariable "BWA3_ammoDialog_magazineClass";
        ([BWA3_Comp_ACE_ammoDialog_curHash, _curMagazine] call CBA_fnc_hashGet) params ["_curAmount", "_ctrlSlider", "_ctrlEdit"];
        _value = round _value;
        _ctrlEdit ctrlSetText (str _value);
        UPDATE_VALUES;
    }];

    _ctrlEdit ctrlSetText str _curMagazineAmount;
    _ctrlEdit setVariable ["BWA3_ammoDialog_magazineClass", _curMagazine];
    _ctrlEdit ctrlAddEventHandler ["KeyUp", {
        params ["_ctrlEdit"];
        private _curMagazine = _ctrlEdit getVariable "BWA3_ammoDialog_magazineClass";
        ([BWA3_Comp_ACE_ammoDialog_curHash, _curMagazine] call CBA_fnc_hashGet) params ["_curAmount", "_ctrlSlider", "_ctrlEdit"];
        private _value = parseNumber ctrlText _ctrlEdit;
        _ctrlSlider sliderSetPosition (round _value);
        UPDATE_VALUES;
    }];
    _ctrlEdit ctrlAddEventHandler ["KillFocus", {
        params ["_ctrlEdit"];
        private _curMagazine = _ctrlEdit getVariable "BWA3_ammoDialog_magazineClass";
        ([BWA3_Comp_ACE_ammoDialog_curHash, _curMagazine] call CBA_fnc_hashGet) params ["_curAmount", "_ctrlSlider", "_ctrlEdit"];
        private _value = sliderPosition _ctrlSlider;
        _value = round _value;
        _ctrlEdit ctrlSetText (str _value);
        UPDATE_VALUES;
    }];

    [BWA3_Comp_ACE_ammoDialog_curHash, _curMagazine, [_curMagazineAmount, _ctrlSlider, _ctrlEdit]] call CBA_fnc_hashSet;
    nil
} count ([BWA3_Comp_ACE_ammoDialog_curHash] call CBA_fnc_hashKeys);

_dialog displayAddEventHandler ["Unload", {
    params ["_dialog","_exitCode"];
    if !(_exitCode isEqualTo 1) exitWith {};
    {
        private _ammo = _x;
        ([BWA3_Comp_ACE_ammoDialog_curHash, _ammo] call CBA_fnc_hashGet) params ["_amount"];
        BWA3_Comp_ACE_ammoDialog_curVehicle removeMagazinesTurret [_ammo, BWA3_Comp_ACE_ammoDialog_curTurret];
        for "_i" from 1 to _amount do {
            BWA3_Comp_ACE_ammoDialog_curVehicle addMagazineTurret [_ammo, BWA3_Comp_ACE_ammoDialog_curTurret];
        };
    } count ([BWA3_Comp_ACE_ammoDialog_curHash] call CBA_fnc_hashKeys);
}];
