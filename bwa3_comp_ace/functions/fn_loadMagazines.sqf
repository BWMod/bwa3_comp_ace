

params ["_vehicle", "_turret", ["_magazinesToLoad", [], [[]]], ["_magazinesToUnload", [], [[]]]];

If ((_magazinesToLoad isEqualTo []) && {_magazinesToUnload isEqualTo []}) exitWith {};


[
    5,
    _this,
    {
        // load one mag
        params ["_vehicle", "_turret", "_magazines"];
		
		private _curMagazine = _magazines deleteAt 0;
		_vehicle addMagazineTurret [_curMagazine, _turret];

		If (_magazines isEqualTo []) exitWith {};
		
		[_vehicle, _turret, _magazines] call BWA3_fnc_loadMagazines;
    },
    {
        [localize "STR_BWA3_Comp_Ace_loadingStopped", false, 5] call ace_common_fnc_displayText;
    },
    "STR_BWA3_Comp_Ace_loadingMagazines",
    {
		[ACE_player, _vehicle] call ace_common_fnc_canInteractWith
	}
] call ace_common_fnc_progressBar;
