

params ["_vehicle", "_turret", ["_magazines", [], [[]]]];

If (_magazines isEqualTo []) exitWith {};

// magazine specific reloadTime
private _reloadTime = getNumber(configFile >> "CfgMagazines" >> ((_magazines select 0) select 0) >> "BWA3_magazinesReloadTime");
If (_reloadTime == 0) then {_reloadTime = 5;};

[
    _reloadTime,
    [_vehicle, _turret, _magazines],
    {
        // load one mag
        
        (_this select 0) params ["_vehicle", "_turret", "_magazines"];

        (_magazines select 0) params ["_curMagazine", "_targetAmount"];

        private _curAmount = {_x isEqualTo _curMagazine} count ((magazinesAllTurrets _vehicle) select {((_x select 1) isEqualTo _turret) && ((_x select 2) > 0)});


        private _modify = _targetAmount - _curAmount;

        test = [_curMagazine,(_targetAmount - _curAmount)];

        If (_modify < 0) then {
            // remove a mag
            _vehicle removeMagazinesTurret [_curMagazine, _turret];
            for "_i" from 1 to (_curAmount - 1) do {
                _vehicle addMagazineTurret [_curMagazine, _turret];
            };
        };
        If (_modify > 0) then {
            // add a mag
            _vehicle removeMagazinesTurret [_curMagazine, _turret];
            for "_i" from 1 to (_curAmount + 1) do {
                _vehicle addMagazineTurret [_curMagazine, _turret];
            };
        };
        If (abs _modify <= 1) then {
            _magazines deleteAt 0;
        };

        [_vehicle, _turret, _magazines] call BWA3_fnc_loadMagazines;
    },
    {
        [localize "STR_BWA3_Comp_Ace_loadingStopped", false, 5] call ace_common_fnc_displayText;
    },
    "STR_BWA3_Comp_Ace_rearming",
    {
        [ACE_player, _vehicle] call ace_common_fnc_canInteractWith
    }
] call ace_common_fnc_progressBar;
