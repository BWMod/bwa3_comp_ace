#include "script_component.h"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {BWA3_Common, BWA3_Eagle, BWA3_Weapons, BWA3_VehicleWeapons, BWA3_Explosives, BWA3_Units, BWA3_Puma, BWA3_Leopard2A6M, BWA3_Tiger};
        versionAr[] = {1,0,0};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgGlasses.hpp"
#include "CfgRecoils.hpp"
