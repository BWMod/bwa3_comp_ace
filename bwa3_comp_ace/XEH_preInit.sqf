#include "script_component.h"

ADDON = false;

#include "XEH_PREP.sqf"

ADDON = true;

If (isNil "BWA3_MagazineDialogDistance") then {
    BWA3_MagazineDialogDistance = 25;
};

[
    "BWA3_MagazineDialogAllowed",
    "CHECKBOX",
    "STR_BWA3_Comp_Ace_ConfigureMagazinesLoadAllowed",
    localize "STR_BWA3_FactionClassBundeswehrName",
    true,
    1
] call CBA_Settings_fnc_init;

