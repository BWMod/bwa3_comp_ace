
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
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,-1.0,1.3]";
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
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,-1.5,1.3]";
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
