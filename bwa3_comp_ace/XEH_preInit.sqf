#include "script_component.h"

ADDON = false;

#include "XEH_PREP.sqf"

ADDON = true;

If (isNil "BWA3_ammoDialogDistance") then {
    BWA3_ammoDialogDistance = 25;
};

[
    "BWA3_ammoDialogAllowed",
    "CHECKBOX",
    "STR_BWA3_Comp_Ace_ConfigureAmmoLoadAllowed",
    localize "STR_BWA3_FactionClassBundeswehrName",
    true,
    1
] call CBA_Settings_fnc_init;

