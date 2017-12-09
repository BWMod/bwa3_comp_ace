
class CfgMagazines {
    class CA_Magazine;
    class BWA3_200Rnd_556x45: CA_Magazine {
        ACE_isBelt = 1;
    };
    class BWA3_120Rnd_762x51: CA_Magazine {
        ACE_isBelt = 1;
    };

    class 60Rnd_30mm_APFSDS_shells;
    class BWA3_240Rnd_APFSDS_shells: 60Rnd_30mm_APFSDS_shells {
        BWA3_MagazineRearmTime = 30;
    };
    class 140Rnd_30mm_MP_shells;
    class BWA3_160Rnd_HE_shells: 140Rnd_30mm_MP_shells {
        BWA3_MagazineRearmTime = 30;
    };

    class BWA3_160Rnd_ABM_shells: BWA3_160Rnd_HE_shells {
        BWA3_MagazineRearmTime = 30;
    };

    class BWA3_DM31AT_Mag: CA_Magazine {
    	ACE_explosives_Placeable = 1;
        useAction = 0;
        ACE_explosives_SetupObject = "BWA3_DM31AT";
        ACE_explosives_DelayTime = 2.5;
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                displayName = "$STR_BWA3_Comp_Ace_SLAME_Magnetic";
                digDistance = -0.02;
                ammo = "BWA3_DM31AT_Range_Ammo";
            };
        };
    };
};
