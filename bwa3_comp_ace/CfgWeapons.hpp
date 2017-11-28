
#define MASSMULTI 22
#define GLM_MASS (1.27*MASSMULTI)

class PointerSlot;

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        BWA3_acc_LLM01_laser = 1;
        BWA3_acc_VarioRay_laser = 1;
    };
};

class CfgWeapons {
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class BWA3_P8: Pistol_Base_F {
        ACE_barrelTwist = 248.92;
        ACE_barrelLength = 108;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot: PointerSlot {
                compatibleItems[] = {"BWA3_acc_LLM01_irlaser","BWA3_acc_LLM01_flash","BWA3_acc_LLM01_laser"};
            };
            mass = (0.77*MASSMULTI);
        };
    };

    class BWA3_MP7: Pistol_Base_F {
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 180;
        ACE_RailHeightAboveBore = 4.0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (1.9*MASSMULTI);
        };
    };

    class BWA3_P2A1: Pistol_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (0.52*MASSMULTI);
        };
    };

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };

    class UGL_F;

    class BWA3_G36: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 480;
        ACE_RailHeightAboveBore = 6.2;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (3.63*MASSMULTI);
        };
        class AG40: UGL_F {
            magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
        };
    };
    class BWA3_G36K: BWA3_G36 {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 318;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (3.37*MASSMULTI);
        };
    };

    class BWA3_G36_AG: BWA3_G36 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = ((3.63*MASSMULTI)+GLM_MASS);
        };
    };

    class BWA3_G36K_AG: BWA3_G36K {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = ((3.37*MASSMULTI)+GLM_MASS);
        };
    };

    class BWA3_G36_LMG: BWA3_G36 {
        ACE_overheating_dispersion = 1;
    };

    class BWA3_G38: Rifle_Base_F {
        ACE_barrelTwist = 177.8; // 1:7"
        ACE_barrelLength = 419.1; // 16.5"
        ACE_RailHeightAboveBore = 3.1;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (3.56*MASSMULTI);
        };
        class AG40: UGL_F {
            magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
        };
    };
    class BWA3_G38K: BWA3_G38 {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3; // 14.5"

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (3.49*MASSMULTI);
        };
    };
    class BWA3_G38C: BWA3_G38 {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 279.4; // 11"

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (3.12*MASSMULTI);
        };
    };

    class BWA3_G38_AG: BWA3_G38 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = ((3.56*MASSMULTI)+GLM_MASS);
        };
    };

    class BWA3_G38K_AG: BWA3_G38 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = ((3.49*MASSMULTI)+GLM_MASS);
        };
    };

    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class BWA3_G28_Standard: Rifle_Long_Base_F {
        ACE_overheating_dispersion = 0.75;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 421;
        ACE_gunbag_allowGunbag = 1;
        ACE_RailHeightAboveBore = 3.6;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = ((5.8+0.7)*MASSMULTI); // Weapon + Bipod
        };
    };
    class BWA3_G28_Assault: BWA3_G28_Standard {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 421;
        ACE_gunbag_allowGunbag = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (5.1*MASSMULTI);
        };
    };
    class BWA3_G27: BWA3_G28_Standard {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 406;
        ACE_gunbag_allowGunbag = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (4.4*MASSMULTI);
        };
    };
    class BWA3_G27_AG: BWA3_G27 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = ((4.4*MASSMULTI)+GLM_MASS);
        };
        class AG40: UGL_F {
            magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
        };
    };

    class BWA3_MG3: Rifle_Long_Base_F {
        ace_overheating_mrbs = 2000;
        ace_overheating_slowdownFactor = 0.75;
        ACE_overheating_allowSwapBarrel = 1;
        ACE_overheating_dispersion = 0.85;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 565;
        ACE_RailHeightAboveBore = 3.6; //Nothing found so MG5 value

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (11.27*MASSMULTI); // Mass without bipod
        };
    };

    class BWA3_MG4: Rifle_Long_Base_F {
        ACE_overheating_allowSwapBarrel = 1;
        ACE_overheating_dispersion = 0.85;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 480;
        ACE_RailHeightAboveBore = 4.0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (8.14*MASSMULTI);
        };
    };

    class BWA3_MG5: Rifle_Long_Base_F {
        ACE_overheating_allowSwapBarrel = 1;
        ACE_overheating_dispersion = 0.85;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 550;
        ACE_RailHeightAboveBore = 3.6;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (11.6*MASSMULTI);
        };
    };

    class BWA3_G82: Rifle_Long_Base_F {
        ACE_barrelTwist = 381.0;
        ACE_barrelLength = 736.7;
        ACE_gunbag_allowGunbag = 1;
        ACE_RailHeightAboveBore = 3.8;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (11.8*MASSMULTI);
        };
    };

    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    class BWA3_Pzf3: Launcher_Base_F {
        ACE_overpressure_angle = 60;
        ACE_overpressure_range = 3.5;
        ACE_overpressure_damage = 0.8;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (14.3*MASSMULTI);
        };
    };

    class BWA3_Pzf3_Used: BWA3_Pzf3 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (10*MASSMULTI);
        };
    };

    class BWA3_RGW90: Launcher_Base_F {
        ACE_overpressure_angle = 50;
        ACE_overpressure_range = 2.5;
        ACE_overpressure_damage = 0.75;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (8.7*MASSMULTI);
        };
    };

    class BWA3_RGW90_Used: BWA3_RGW90 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = (4.4*MASSMULTI);
        };
    };

    class BWA3_Fliegerfaust: Launcher_Base_F {
        ACE_overpressure_angle = 80;
        ACE_overpressure_range = 3.5;
        ACE_overpressure_damage = 0.5;
        ACE_reloadlaunchers_enabled = 1;

        class WeaponSlotsInfo: WeaponSlotsInfo {
           mass = (15.8*MASSMULTI);
        };
    };

    class BWA3_CarlGustaf: Launcher_Base_F {
        ACE_overpressure_angle = 60;
        ACE_overpressure_range = 8;
        ACE_overpressure_damage = 1;
        ACE_reloadlaunchers_enabled = 1;

        class WeaponSlotsInfo: WeaponSlotsInfo {
           mass = (14.2*MASSMULTI); // M2 variant
        };
    };

    // HELMETS
    class BWA3_CrewmanKSK_Fleck;
    class BWA3_CrewmanKSK_Fleck_Headset: BWA3_CrewmanKSK_Fleck {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0.80;
    };

    class ItemCore;
    class BWA3_Knighthelm: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.75;
    };

    // ATTACHMENTS
    class InventoryFlashLightItem_Base_F;
    class BWA3_acc_LLM01_irlaser: ItemCore {
        MRT_SwitchItemNextClass = "BWA3_acc_LLM01_flash";
        MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_laser";
        BWA3_nextModeClass = "BWA3_acc_LLM01_laser";

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;
            };
        };
    };

    class BWA3_acc_LLM01_flash: BWA3_acc_LLM01_irlaser {
        MRT_SwitchItemNextClass = "BWA3_acc_LLM01_laser";
        MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_irlaser";
        BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser";

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;
            };
        };
    };

    class BWA3_acc_LLM01_laser: BWA3_acc_LLM01_irlaser {
        ACE_laserpointer = 1;
        MRT_SwitchItemNextClass = "BWA3_acc_LLM01_irlaser";
        MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_flash";
        MRT_switchItemHintText = "$STR_BWA3_Laser";
        BWA3_nextModeClass = "BWA3_acc_LLM01_flash";
        scope = 1;

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;
            };
        };
    };

    class BWA3_acc_LLM01_irlaser_underbarrel: BWA3_acc_LLM01_irlaser {
        MRT_SwitchItemNextClass = "BWA3_acc_LLM01_flash_underbarrel";
        MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_laser_underbarrel";
        BWA3_nextModeClass = "BWA3_acc_LLM01_flash_underbarrel";
        model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
    };

    class BWA3_acc_LLM01_flash_underbarrel: BWA3_acc_LLM01_flash {
        MRT_SwitchItemNextClass = "BWA3_acc_LLM01_laser_underbarrel";
        MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_irlaser_underbarrel";
        BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser_underbarrel";
        model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
    };

    class BWA3_acc_LLM01_laser_underbarrel: BWA3_acc_LLM01_laser {
        MRT_SwitchItemNextClass = "BWA3_acc_LLM01_irlaser_underbarrel";
        MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_flash_underbarrel";
        BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser_underbarrel";
        model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
    };

    class BWA3_acc_VarioRay_irlaser: ItemCore {
        MRT_SwitchItemNextClass = "BWA3_acc_VarioRay_flash";
        MRT_SwitchItemPrevClass = "BWA3_acc_VarioRay_laser";
        BWA3_nextModeClass = "BWA3_acc_VarioRay_laser";

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;
            };
        };
    };

    class BWA3_acc_VarioRay_flash: BWA3_acc_VarioRay_irlaser {
        MRT_SwitchItemNextClass = "BWA3_acc_VarioRay_laser";
        MRT_SwitchItemPrevClass = "BWA3_acc_VarioRay_irlaser";
        BWA3_nextModeClass = "BWA3_acc_VarioRay_irlaser";

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;
            };
        };
    };

    class BWA3_acc_VarioRay_laser: BWA3_acc_VarioRay_irlaser {
        MRT_SwitchItemNextClass = "BWA3_acc_VarioRay_irlaser";
        MRT_SwitchItemPrevClass = "BWA3_acc_VarioRay_flash";
        MRT_switchItemHintText = "$STR_BWA3_Laser";
        ACE_laserpointer = 1;
        BWA3_nextModeClass = "BWA3_acc_VarioRay_flash";
        scope = 1;

        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;
            };
        };
    };

    // OPTICS
    class InventoryOpticsItem_Base_F;

    class BWA3_optic_Kolimator_base: ItemCore {};
    class BWA3_optic_RSAS: BWA3_optic_Kolimator_base {
        ACE_ScopeHeightAboveRail = 2.6;
    };

    class BWA3_optic_Flipsights: BWA3_optic_Kolimator_base {
        ACE_ScopeHeightAboveRail = 1.5;
    };

    class BWA3_optic_G36C_Ironsight_100: BWA3_optic_Kolimator_base {
        ACE_ScopeHeightAboveRail = 1.5;
    };

    class BWA3_optic_Aimpoint: BWA3_optic_Kolimator_base {
        ACE_ScopeHeightAboveRail = 2.6;
    };

    class BWA3_optic_EOTech: BWA3_optic_Kolimator_base {
        ACE_ScopeHeightAboveRail = 4.1;
    };

    class BWA3_optic_ZO4x30: ItemCore {
        ACE_ScopeHeightAboveRail = 2.8;

        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    class BWA3_optic_Shortdot: ItemCore {
        ACE_scopeadjust_vertical[] = {-0.1, 10.1};
        ACE_scopeadjust_verticalIncrement = 0.1;
        ACE_scopeadjust_horizontal[] = {-5.1, 5.1};
        ACE_scopeadjust_horizontalIncrement = 0.1;
        ACE_ScopeHeightAboveRail = 4.0;

        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    class BWA3_optic_20x50: ItemCore {
        ACE_ScopeHeightAboveRail = 4.0;
        ACE_scopeadjust_vertical[] = {0, 26};
        ACE_scopeadjust_verticalIncrement = 0.1;
        ACE_scopeadjust_horizontal[] = {-6, 6};
        ACE_scopeadjust_horizontalIncrement = 0.1;

        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    class BWA3_optic_24x72: ItemCore {
        ACE_scopeadjust_vertical[] = {0, 16};
        ACE_scopeadjust_verticalIncrement = 0.1;
        ACE_scopeadjust_horizontal[] = {-7, 7};
        ACE_scopeadjust_horizontalIncrement = 0.1;
        ACE_ScopeHeightAboveRail = 4.8;

        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    // UNIFORMS
    class Uniform_Base;
    class BWA3_Uniform_Helipilot: Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
};
