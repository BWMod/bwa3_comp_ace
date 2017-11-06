class CfgVehicles {
    class All {
        class Turrets;
    };

    class AllVehicles: All {
        class NewTurret {
            class Turrets;
        };
    };

    class Land: AllVehicles {};
    class Air: AllVehicles {};

    class LandVehicle: Land {
        class CommanderOptics: NewTurret {};
    };

    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };

        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };

    class Car_F: Car {
        class Turrets {
            class MainTurret;
        };
    };

    class Tank_F: Tank {};

    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions;
        };

        class Turrets {
            class MainTurret;
        };
    };

    class Helicopter_Base_F: Helicopter {};

    #define FUEL_FACTOR 0.165

    class BWA3_Puma_base: Tank_F {
        class UserActions {
            delete CamoNet_mells_hide;
            delete CamoNet_mells_show;
            delete CamoNet_gun_hide;
            delete CamoNet_gun_show;
            delete CamoNet_turret_hide;
            delete CamoNet_turret_show;
            delete CamoNet_hide;
            delete CamoNet_show;
        };

        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,-1.0,1.3]";
            };

            class BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_show";
                selection = "mirror_axis1";
                position = "";
                showDisabled = 0;
                priority = 2;
                distance = 4;
                icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
                condition = "_target animationPhase ""hide_netz"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_hide: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_hide";
                condition = "_target animationPhase ""hide_netz"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_hide""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_turret_show: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_Turret_show";
                selection = "gunnerview";
                condition = "_target animationPhase ""hide_netz_turret"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_turret"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_turret_hide: BWA3_CamoNet_turret_show {
                displayName = "$STR_BWA3_CamouflageNet_Turret_hide";
                condition = "_target animationPhase ""hide_netz_turret"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_turret"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_hide""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_gun_show: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_Gun_show";
                selection = "usti hlavne2";
                condition = "_target animationPhase ""hide_netz_gun"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_gun"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_gun_hide: BWA3_CamoNet_gun_show {
                displayName = "$STR_BWA3_CamouflageNet_Gun_hide";
                condition = "_target animationPhase ""hide_netz_gun"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_gun"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_hide""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_mells_show: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_MELLS_show";
                selection = "konec rakety";
                condition = "_target animationPhase ""hide_netz_mells"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_mells"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_MELLS_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_mells_hide: BWA3_CamoNet_mells_show {
                displayName = "$STR_BWA3_CamouflageNet_MELLS_hide";
                condition = "_target animationPhase ""hide_netz_mells"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_mells"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_MELLS_hide""] call ace_common_fnc_progressBar"
            };
        };

        fuelCapacity = 600 * FUEL_FACTOR;
        ACE_refuel_fuelCapacity = 700;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled = 1;
                ACE_fcs_minDistance = 200;
                ACE_fcs_maxDistance = 9990;
                ACE_fcs_distanceInterval = 5;
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
            };
        };
    };

    class BWA3_Leopard_base: Tank_F {
        class UserActions {
            delete CamoNet_gun_hide;
            delete CamoNet_gun_show;
            delete CamoNet_turret_hide;
            delete CamoNet_turret_show;
            delete CamoNet_hide;
            delete CamoNet_show;
        };

        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,-1.5,1.3]";
            };

            class BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_show";
                selection = "mirror_left_axis";
                position = "";
                showDisabled = 0;
                priority = 2;
                distance = 4;
                icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
                condition = "_target animationPhase ""hide_netz"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_hide: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_hide";
                condition = "_target animationPhase ""hide_netz"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_hide""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_turret_show: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_Turret_show";
                selection = "gunnerview";
                condition = "_target animationPhase ""hide_netz_turret"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_turret"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_turret_hide: BWA3_CamoNet_turret_show {
                displayName = "$STR_BWA3_CamouflageNet_Turret_hide";
                condition = "_target animationPhase ""hide_netz_turret"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_turret"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_hide""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_gun_show: BWA3_CamoNet_show {
                displayName = "$STR_BWA3_CamouflageNet_Gun_show";
                selection = "usti hlavne2";
                condition = "_target animationPhase ""hide_netz_gun"" > 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_gun"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_show""] call ace_common_fnc_progressBar"
            };
            class BWA3_CamoNet_gun_hide: BWA3_CamoNet_gun_show {
                displayName = "$STR_BWA3_CamouflageNet_Gun_hide";
                condition = "_target animationPhase ""hide_netz_gun"" < 0.5 and _player == cameraOn";
                statement = "[8, _target, {_this select 0 animate [""hide_netz_gun"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_hide""] call ace_common_fnc_progressBar"
            };
        };

        fuelCapacity = 500 * FUEL_FACTOR;
        ACE_refuel_fuelCapacity = 1160;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled = 1;
                ACE_fcs_minDistance = 200;
                ACE_fcs_maxDistance = 9990;
                ACE_fcs_distanceInterval = 5;
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
            };
        };
    };

    class BWA3_Tiger_base: Helicopter_Base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,1.5,0]";
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled = 1;
                ACE_fcs_minDistance = 200;
                ACE_fcs_maxDistance = 9990;
                ACE_fcs_distanceInterval = 1;
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
            };
        };
    };

    class BWA3_Eagle_Base: Car_F {
        fuelCapacity = 700 * FUEL_FACTOR;
        ACE_refuel_fuelCapacity = 180;

        class UserActions {
            delete Rope_hide;
            delete Rope_show;
        };

        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,-0.3,0.7]";
            };
            class BWA3_Rope_show {
                displayName = "$STR_BWA3_Rope_show";
                selection = "rope_control";
                position = "";
                condition = "_target animationPhase ""hide_rope"" > 0.5 and _player == cameraOn";
                statement = "[3, _target, {_this select 0 animate [""hide_rope"", 0]; playSound3D [""A3\sounds_f\characters\stances\lift_handgun.wss"", objNull, false, AGLToASL (this modelToWorld (this selectionPosition ""rope_control"")), 0.50118721, 1, 20];}, {}, localize ""STR_BWA3_Rope_show""] call ace_common_fnc_progressBar"
                showDisabled = 0;
                priority = 2;
                icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
                distance = 2;
            };
            class BWA3_Rope_hide: BWA3_Rope_show {
                displayName = "$STR_BWA3_Rope_hide";
                condition = "_target animationPhase ""hide_rope"" < 0.5 and _player == cameraOn";
                statement = "[3, _target, {_this select 0 animate [""hide_rope"", 1]; playSound3D [""A3\sounds_f\characters\stances\lift_handgun.wss"", objNull, false, AGLToASL (this modelToWorld (this selectionPosition ""rope_control"")), 0.50118721, 1, 20];}, {}, localize ""STR_BWA3_Rope_hide""] call ace_common_fnc_progressBar"
            };
        };
    };

    class BWA3_Eagle_flw100_base: BWA3_Eagle_Base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled = 1;
                ACE_fcs_minDistance = 50;
                ACE_fcs_maxDistance = 5000;
                ACE_fcs_distanceInterval = 5;
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
            };
        };
    };

    class ReammoBox_F;
    class BWA3_Box_Base: ReammoBox_F {
        ACE_dragging_canCarry = 1;
        ACE_dragging_canDrag = 1;
    };

    class BWA3_Box_All: BWA3_Box_Base {
        ACE_dragging_canCarry = 0;
        ACE_dragging_canDrag = 0;
    };

    class BWA3_Box_Gear: BWA3_Box_Base {
        ACE_dragging_canCarry = 0;
        ACE_dragging_canDrag = 0;
    };
};
