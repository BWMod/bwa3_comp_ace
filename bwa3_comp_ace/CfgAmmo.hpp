
class CfgAmmo {
    class B_556x45_Ball_Tracer_Red;
    class BWA3_B_556x45_Ball: B_556x45_Ball_Tracer_Red { // B_556x45_Ball, AtragMx GunList: "5.56x45mm M855"
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
    };
    class BWA3_B_556x45_Ball_SD: BWA3_B_556x45_Ball { // CfgAmmoReference.hpp: VTN_556x45_Ball_SS
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {300, 320, 340};
        ACE_barrelLengths[] = {254.0, 508.0, 609.6};
    };
    class BWA3_B_556x45_Ball_AP: BWA3_B_556x45_Ball { // ACE_556x45_Ball_M995_AP, AtragMx GunList: "5.56x45mm M995"
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.5359237;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.310};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {820, 865, 880};
        ACE_barrelLengths[] = {254.0, 393.7, 508.0};
    };

    class B_762x51_Tracer_Red;
    class BWA3_B_762x51_Ball: B_762x51_Tracer_Red { // class B_762x51_Ball, AtragMx GunList: "7.62x51mm M80"
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.2};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
    };
    class BWA3_B_762x51_Ball_SD: BWA3_B_762x51_Ball { // ACE_762x51_Ball_Subsonic, AtragMx GunList: "7.62x51mm Subsonic"
        ACE_caliber = 7.823;
        ACE_bulletLength = 34.036;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.235};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {305, 325, 335, 340};
        ACE_barrelLengths[] = {406.4, 508.0, 609.6, 660.4};
    };
    class BWA3_B_762x51_Ball_AP: BWA3_B_762x51_Ball { // ACE_762x51_Ball_M993_AP, AtragMx GunList: "7.62x51mm M993"
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 8.22946157;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.359};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {875, 910, 930};
        ACE_barrelLengths[] = {330.2, 406.4, 508.0};
    };
    class BWA3_B_762x51_Ball_LR: BWA3_B_762x51_Ball { // ACE_762x51_Ball_M118LR, AtragMx GunList: "7.62x51mm M118LR"
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 11.34;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.243};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {750, 780, 790, 794};
        ACE_barrelLengths[] = {406.4, 508.0, 609.6, 660.4};
    };

    class B_127x99_Ball_Tracer_Red;
    class BWA3_B_127x99_Ball: B_127x99_Ball_Tracer_Red { // B_127x99_Ball, AtragMx GunList: "12.7x99mm"
        ACE_caliber = 12.954;
        ACE_bulletLength = 58.674;
        ACE_bulletMass = 41.9256;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.670};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {900};
        ACE_barrelLengths[] = {736.6};
    };
    class BWA3_B_127x99_Ball_SD: BWA3_B_127x99_Ball {
        ACE_caliber = 12.954;
        ACE_bulletLength = 58.674;
        ACE_bulletMass = 41.9256;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.670};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {330};
        ACE_barrelLengths[] = {736.6};
    };
    class BWA3_B_127x99_Ball_AP: BWA3_B_127x99_Ball { // ACE_127x99_API, AtragMx GunList: "12.7x99mm"
        ACE_caliber = 12.954;
        ACE_bulletLength = 58.674;
        ACE_bulletMass = 41.9904;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.670};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {900};
        ACE_barrelLengths[] = {736.6};
    };
    class BWA3_B_127x99_Ball_Raufoss: BWA3_B_127x99_Ball {
        // HE gren with less metal parts
        ACE_frag_enabled = 1;
        ACE_frag_force = 1;
        ace_frag_metal = 180;
        ace_frag_charge = 180;
        ace_frag_gurney_c = 2930; // Gurney velocity constant for PETN
        ace_frag_gurney_k = 1/2; // shape factor for a cylinder
        ACE_frag_classes[] = {"ACE_Frag_tiny_HD"};
    }; // B_127x99_Ball, AtragMx GunList: "12.7x99mm"

    class BulletBase;
    class BWA3_B_46x30_Ball: BulletBase {
        ACE_caliber = 4.902;
        ACE_bulletLength = 13.005;
        ACE_bulletMass = 2.0088;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.1455};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {680, 720, 730, 740};
        ACE_barrelLengths[] = {101.6, 177.8, 228.6, 304.8};
    };
    class BWA3_B_46x30_Ball_SD: BWA3_B_46x30_Ball {
        // Reference?
        ACE_ballisticCoefficients[] = {};
        ACE_velocityBoundaries[] = {};
        ACE_muzzleVelocities[] = {};
        ACE_barrelLengths[] = {};
    };

    class MineBase;
    class BWA3_DM31AT_Range_Ammo: MineBase {
        mineTrigger = "ACE_MagneticTrigger";
        ACE_explosives_explodeOnDefuseChance = 0.06;
    };

    class GrenadeHand;
    class BWA3_G_DM51A1: GrenadeHand {
        ace_frag_metal = 296;
        ace_frag_charge = 180;
        ace_frag_gurney_c = 2930; // Gurney velocity constant for PETN
        ace_frag_gurney_k = 1/2; // shape factor for a cylinder
    };

    class RocketBase;
    class BWA3_R_RGW90_HH: RocketBase {
        ACE_frag_enabled = 1;
        ACE_frag_force = 1;
        ACE_frag_metal = 400;
        ACE_frag_charge = 210;
        ACE_frag_gurney_c = 2800;
        ACE_frag_gurney_k = "3/5";
        ACE_frag_classes[] = {"ACE_frag_medium_HD"};
    };

    class BWA3_R_Pzf3_IT: RocketBase {
        ACE_frag_skip = 1;
    };

    class BWA3_R_CarlGustaf_HEAT: RocketBase {
        ACE_frag_skip = 1;
    };
    class BWA3_R_CarlGustaf_HE: BWA3_R_CarlGustaf_HEAT {
        ACE_frag_skip = 0;
        ACE_frag_enabled = 1;
        ACE_frag_force = 1;
        ACE_frag_metal = 400;
        ACE_frag_charge = 210;
        ACE_frag_gurney_c = 2800;
        ACE_frag_gurney_k = "3/5";
        ACE_frag_classes[] = {"ACE_frag_medium_HD"};
    };

    class B_30mm_MP_Tracer_Red;
    class BWA3_B_30mm_HE: B_30mm_MP_Tracer_Red {
        // 40mm HE gren with less metal parts
        ACE_frag_enabled = 1;
        ACE_frag_force = 1;
        ACE_frag_classes[] = {"ACE_Frag_tiny_HD"};
        ACE_frag_metal = 120;
        ACE_frag_charge = 32;
        ACE_frag_gurney_c = 2700;
        ACE_frag_gurney_k = 1/2;
    };
};
class ACE_ATragMX_Presets {
    class Preset_G28 {
	preset[] = {"G28 (9,5g)", 795, 100, 0.0881522, -0.001035, 7.62, 0, 2, 10, 120, 0, 0, 9.5, 7.82, 30.48, 0.345, 1, "ICAO", {{-15,776},{0,783},{10,790},{15,795},{25,809},{30,818},{35,829}}, {{200,0.25},{300,0.318},{400,0.329},{500,0.332},{600,0.343},{650,0.345},{700,0.347}}};
    };
    class Preset_G28AP {
	preset[] = {"G28 (AP)", 905, 100, 0.0807142, -0.000359, 7.62, 0, 2, 10, 120, 0, 0, 8.2, 7.85, 30.48, 0.346, 1, "ICAO", {{-15,886},{0,893},{10,900},{15,905},{25,919},{30,928},{35,939}}, {{300,0.346},{400,0.365},{500,0.351},{600,0.352},{650,0.353},{700,0.358},{800,0.354}}};
    };
    class Preset_G28LR {
	preset[] = {"G28 (LR)", 759, 100, 0.0970995, -0.000243, 7.62, 0, 2, 10, 120, 0, 0, 11.3, 7.85, 30.48, 0.483, 1, "ICAO", {{-15,728},{0,734},{10,742},{15,747},{25,760},{30,769},{35,781}}, {{300,0.478},{400,0.462},{500,0.485},{600,0.481},{650,0.473},{700,0.475},{800,0.471}}};
    };
    class Preset_G28SD {
	preset[] = {"G28 (SD)", 307, 100, 0.350408, -0.001035, 7.62, 0, 2, 10, 120, 0, 0, 13, 7.81, 30.48, 0.553, 1, "ICAO",{{-15,305},{0,306},{10,307},{15,307},{25,308},{30,309},{35,310}}, {{300,0.526},{400,0.522},{500,0.524},{550,0.52},{600,0.515},{650,0.51},{700,0.512}}};
    };
    class Preset_G29 {
	preset[] = {"G29 (16,2g)", 908, 100, 0.0763083, -0.001035, 7.11, 0, 2, 10, 120,	0, 0, 16.2, 8.59, 33.02, 0.631, 1, "ICAO", {{-15,889},{0,896},{10,903},{15,908},{25,922},{30,931},{35,942}}, {{650,0.616},{800,0.628},{950,0.627},{1000,0.627},{1100,0.638},{1250,0.634},{1300,0.631}}};
    };
    class Preset_G82 {
	preset[] = {"G82 (41,9g)", 892, 100, 0.0863738, -0.001035, 8.64, 0, 2, 10, 120, 0, 0, 41.9, 12.95, 38.1, 0.63, 1, "ICAO",{{-15,873},{0,880},{10,887},{15,892},{25,906},{30,915},{35,926}}, {{600,0.63},{750,0.661},{900,0.661},{1050,0.659},{1200,0.661},{1350,0.656},{1500,0.655}}};
    };
    class Preset_G82AP {
	preset[] = {"G82 (AP)", 892, 100, 0.0863382, -0.001035, 8.64, 0, 2, 10, 120, 0, 0, 42, 12.96, 38.1, 0.656, 1, "ICAO", {{-15,873},{0,880},{10,887},{15,892},{25,906},{30,915},{35,926}}, {{300,0.552},{500,0.678},{750,0.661},{900,0.661},{1000,0.654},{1250,0.66},{1500,0.656}}};
    };
    class Preset_G82SD {
	preset[] = {"G82 (SD)", 329, 100, 0.319747, -0.001035, 8.64, 0, 2, 10, 120, 0, 0, 41.9, 12.95, 38.1, 0.474, 1, "ICAO",{{-15,327},{0,328},{10,329},{15,329},{25,331},{30,332},{35,333}}, {{350,0.641},{450,0.644},{550,0.656},{650,0.656},{700,0.654},{750,0.659},{800,0.659}}};
    };
};
