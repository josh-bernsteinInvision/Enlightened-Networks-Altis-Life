/*
    Author: Beast
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

*/
#define true 1
#define false 0

class interationCfg {
    class vehicle_menu {
        class button_1 {
            displayName = "STR_vInAct_Registration"; //The text that will be shown on the exact button
            buttonAction = "[cursorObject] spawn life_fnc_searchVehAction; closeDialog 0;"; //The action the button will do after clicking on it ONCE
            buttonToolTip = ""; //The ToolTip that will be shown while the cursor is on the exact button
            side[] = {west}; //Sides that will be able to click the button civ -for civilians \ west - for cops \ guer - for medics \ east - only if enable in your server
            disable = false; // false the button is activated || true the button is hidden
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_RadialMenu"" >> ""plate_system"")) isEqualTo 0)"; // condition to enable or disable the button
        };

        class button_2 {
            displayName = "STR_vInAct_Unflip";
            buttonAction = "cursorObject setPos [(getPos cursorObject select 0), (getPos cursorObject select 1), (getPos cursorObject select 2)+0.5]; closeDialog 0;"; //The action the button will do after clicking on it ONCE.
            buttonToolTip = "";
            side[] = {civ,west,guer};
            disable = false;
            condition = "";
        };

        class button_3 {
            displayName = "STR_vInAct_Repair";
            buttonAction = "[cursorObject] spawn life_fnc_repairTruck; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ,west,guer};
            disable = false;
            condition = "";
        };

        class button_4 {
            displayName = "STR_vInAct_SearchVehicle";
            buttonAction = "[cursorObject] spawn life_fnc_vehInvSearch; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };

        class button_5 {
            displayName = "STR_vInAct_PullOut";
            buttonAction = "[cursorObject] spawn life_fnc_pulloutAction; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "!(crew cursorObject isEqualTo [])";
        };

        class button_6 {
            displayName = "Mining And Fuel";
            buttonAction = "[] spawn {closeDialog 0; sleep 0.1; ['vehicle_mining'] spawn CBX_fnc_openInteraction;};";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(((typeOf cursorObject) == 'O_Truck_03_device_F') || ((typeOf cursorObject) in ['C_Van_01_fuel_F','I_Truck_02_fuel_F','B_Truck_01_fuel_F']) && (cursorObject in life_vehicles))";
        };

        class button_7 {
            displayName = "STR_vInAct_PushBoat";
            buttonAction = "[] spawn life_fnc_pushObject; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ,west,guer};
            disable = false;
            condition = "cursorObject isKindOf 'Ship' && {crew cursorObject isEqualTo []}";
        };

        class button_8 {
            displayName = "STR_vInAct_Impound";
            buttonAction = "[cursorObject] spawn life_fnc_impoundAction; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };

        class button_9 {
            displayName = "Technical Inspection";
            buttonAction = "[cursorObject] spawn max_controltech_fnc_verifControlTech; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_RadialMenu"" >> ""Technical_Inspection"")) isEqualTo 1)";
        };

        class button_10 {
            displayName = "Ticket system";
            buttonAction = "closeDialog 0; createDialog ""max_contravention"";";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_RadialMenu"" >> ""Ticket_system"")) isEqualTo 1)";
        };

        class button_11 {
            displayName = "Licence plate";
            buttonAction = "[cursorObject] spawn max_immat_fnc_verifPlate; closeDialog 0";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_RadialMenu"" >> ""plate_system"")) isEqualTo 1)";
         };
    };

    class vehicle_mining {
        class button_1 {
            displayName = "STR_vInAct_DeviceMine";
            buttonAction = "[cursorObject] spawn life_fnc_deviceMine;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "((typeOf cursorObject) == 'O_Truck_03_device_F') && isNil {(cursorObject getVariable 'mining')} && (local cursorObject) && {cursorObject in life_vehicles}";
        };

        class button_2 {
            displayName = "STR_FuelTank_Stop";
            buttonAction = "cursorObject setVariable ['fuelTankWork',nil,true]; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "!isNil {cursorObject getVariable 'fuelTankWork'}";
        };

        class button_3 {
            displayName = "STR_FuelTank_Supply";
            buttonAction = "[cursorObject] spawn life_fnc_fuelSupply";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "count (nearestObjects [cursorObject, ['Land_FuelStation_Feed_F','Land_fs_feed_F'], 15]) > 0";
        };

        class button_4 {
            displayName = "STR_FuelTank_Store";
            buttonAction = "[cursorObject] spawn life_fnc_fuelStore";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(['fuel_storage_1','fuel_storage_2'] findif {player distance (getMarkerPos _x) <20} != -1)";
        };
    };

    class cop_interaction {
        class button_1 {
            displayName = "STR_pInAct_Unrestrain";
            buttonAction = "[cursorObject] call life_fnc_unrestrain; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };

        class button_2 {
            displayName = "STR_pInAct_checkLicenses";
            buttonAction = "[player] remoteExecCall [""life_fnc_licenseCheck"",cursorObject]; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };

        class button_3 {
            displayName = "STR_pInAct_SearchPlayer";
            buttonAction = "[cursorObject] spawn life_fnc_searchAction; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };

        class button_4 {
            displayName = "STR_pInAct_Escort";
            buttonAction = "[cursorObject] call life_fnc_escortAction; closeDialog 0;";
            buttonToolTip = "Button 4";
            side[] = {west};
            disable = false;
            condition = "!(player getVariable ['isEscorting',false])";
        };

        class button_5 {
            displayName = "STR_pInAct_StopEscort";
            buttonAction = "[] call life_fnc_stopEscorting; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "player getVariable ['isEscorting',false]";
        };

        class button_6 {
            displayName = "STR_pInAct_TicketBtn";
            buttonAction = "[cursorObject] call life_fnc_ticketAction;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };

        class button_7 {
            displayName = "STR_pInAct_Arrest";
            buttonAction = "[cursorObject] call life_fnc_arrestAction; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "(((getArray (missionConfigFile >> 'Life_Settings' >> 'sendtoJail_locations')) findif {player distance (getMarkerPos _x) <30}) != -1)";
        };

        class button_8 {
            displayName = "STR_pInAct_PutInCar";
            buttonAction = "[cursorObject] call life_fnc_putInCar; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "!(player getVariable ['isEscorting',false])";
        };

        class button_9 {
            displayName = "STR_pInAct_Seize";
            buttonAction = "[cursorObject] spawn life_fnc_seizePlayerAction; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "call life_coplevel > getNumber (missionConfigFile >> 'Life_Settings' >> 'seize_minimum_rank')";
        };

        class button_10 {
            displayName = "Driving licence";
            buttonAction = "if ((getNumber (missionConfigFile >> ""The_Programmer_Settings_RadialMenu"" >> ""points_driving_license"")) isEqualTo 2) then {[name cursorObject,1] remoteExec ['max_permisPoints_fnc_getPermisInfo',2] else {[] remoteExec ['max_permisPoints_fnc_getPermisInfo', cursorObject]}"; 
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "";
        };
    };

     class house_menu {
        class button_1 {
            displayName = "STR_pInAct_BuyHouse";
            buttonAction = "[cursorObject] spawn life_fnc_buyHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "_houseCfg = [(typeOf cursorObject)] call life_fnc_houseConfig; !(cursorObject in life_vehicles) && isNil {cursorObject getVariable 'house_owner'} && !(count _houseCfg isEqualTo 0) && (isClass (missionConfigFile >> 'Housing' >> worldName >> typeOf cursorObject))";
        };

        class button_2 { //house grage
            displayName = "STR_pInAct_BuyGarage";
            buttonAction = "[cursorObject] spawn life_fnc_buyHouseGarage; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(!(cursorObject getVariable ['garageBought',false])) && (getNumber (missionConfigFile >> 'Housing' >> worldName >> (typeOf cursorObject) >> 'canGarage') isEqualTo 1) && (cursorObject in life_vehicles) && !isNil {cursorObject getVariable 'house_owner'}";
        };

        class button_3 { //normal_garage
            displayName = "STR_BUY_GARAGE";
            buttonAction = "[cursorObject] spawn life_fnc_buyHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "_houseCfg = [(typeOf cursorObject)] call life_fnc_houseConfig; !(cursorObject in life_vehicles) && isNil {cursorObject getVariable 'house_owner'} && !(count _houseCfg isEqualTo 0) && (isClass (missionConfigFile >> 'Garages' >> worldName >> typeOf cursorObject))";
        };

        class button_4 {
            displayName = "STR_pInAct_SellHouse";
            buttonAction = "[cursorObject] spawn life_fnc_sellHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(cursorObject in life_vehicles) && (isClass (missionConfigFile >> 'Housing' >> worldName >> typeOf cursorObject))";
        };

        class button_5 {
            displayName = "STR_pInAct_AccessGarage";
            buttonAction = "[cursorObject,""Car""] spawn life_fnc_vehicleGarage; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(((getNumber (missionConfigFile >> 'Housing' >> worldName >> (typeOf cursorObject) >> 'canGarage') isEqualTo 1) && (cursorObject getVariable ['garageBought',false])) || (isClass (missionConfigFile >> 'Garages' >> worldName >> (typeOf cursorObject)))) && {cursorObject in life_vehicles}";
        };

        class button_6 {
            displayName = "STR_Vehicle_StoreVehicle";
            buttonAction = "[cursorObject,player] spawn life_fnc_storeVehicle; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(((getNumber (missionConfigFile >> 'Housing' >> worldName >> (typeOf cursorObject) >> 'canGarage') isEqualTo 1) && (cursorObject getVariable ['garageBought',false])) || (isClass (missionConfigFile >> 'Garages' >> worldName >> (typeOf cursorObject)))) && {cursorObject in life_vehicles}";
        };

        class button_7 {
            displayName = "STR_pInAct_LockStorage";
            buttonAction = "[cursorObject] call life_fnc_lockHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "((cursorObject in life_vehicles) && !(cursorObject getVariable ['locked',false]))";
        };

        class button_8 {
            displayName = "STR_pInAct_UnlockStorage";
            buttonAction = "[cursorObject] call life_fnc_lockHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "((cursorObject in life_vehicles) && (cursorObject getVariable ['locked',false])) && (isClass (missionConfigFile >> 'Housing' >> worldName >> typeOf cursorObject))";
        };

        class button_9 {
            displayName = "STR_pInAct_LightsOn";
            buttonAction = "[cursorObject] call life_fnc_lightHouseAction; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "cursorObject in life_vehicles && (isClass (missionConfigFile >> 'Housing' >> worldName >> typeOf cursorObject))";
        };

        class button_10 { //sell house garage
            displayName = "STR_pInAct_SellGarage";
            buttonAction = "[cursorObject] spawn life_fnc_sellHouseGarage; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "getNumber (missionConfigFile >> 'Housing' >> worldName >> (typeOf cursorObject) >> 'canGarage') isEqualTo 1 && {!(cursorObject getVariable ['blacklistedGarage',false])} && {cursorObject getVariable ['garageBought',false]} && ((cursorObject getVariable 'house_owner' select 0) == (getPlayerUID player))";
        };

        class button_11 { //sell normal garage
            displayName = "STR_pInAct_SellGarage";
            buttonAction = "[cursorObject] spawn life_fnc_sellHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {civ};
            disable = false;
            condition = "(isClass (missionConfigFile >> 'Garages' >> worldName >> typeOf cursorObject)) && ((cursorObject getVariable 'house_owner' select 0) == (getPlayerUID player))";
        };
    };

    class cop_house_menu {
        class button_1 {
            displayName = "STR_pInAct_Repair";
            buttonAction = "[cursorObject] spawn life_fnc_repairDoor; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
			condition = "_vaultHouse = [[['Altis', 'Land_Research_house_V1_F'], ['Tanoa', 'Land_Medevac_house_V1_F']]] call TON_fnc_terrainSort; _altisArray = [16019.5,16952.9,0];_tanoaArray = [11074.2,11501.5,0.00137329];_pos = [[['Altis', _altisArray], ['Tanoa', _tanoaArray]]] call TON_fnc_terrainSort;((nearestObject [_pos,'Land_Dome_Big_F']) isEqualTo cursorObject) || ((nearestObject [_pos,_vaultHouse]) isEqualTo cursorObject)";
        };

        class button_2 {
            displayName = "STR_pInAct_CloseOpen";
            buttonAction = "[cursorObject] call life_fnc_doorAnimate; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "_vaultHouse = [[['Altis', 'Land_Research_house_V1_F'], ['Tanoa', 'Land_Medevac_house_V1_F']]] call TON_fnc_terrainSort; _altisArray = [16019.5,16952.9,0];_tanoaArray = [11074.2,11501.5,0.00137329];_pos = [[['Altis', _altisArray], ['Tanoa', _tanoaArray]]] call TON_fnc_terrainSort;((nearestObject [_pos,'Land_Dome_Big_F']) isEqualTo cursorObject) || ((nearestObject [_pos,_vaultHouse]) isEqualTo cursorObject)";
        };

        class button_3 {
            displayName = "STR_House_Raid_Owner";
            buttonAction = "[cursorObject] call life_fnc_copHouseOwner;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "!isNil {cursorObject getVariable 'house_owner'}";
        };

        class button_4 {
            displayName = "STR_pInAct_BreakDown";
            buttonAction = "[cursorObject] spawn life_fnc_copBreakDoor; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "!isNil {cursorObject getVariable 'house_owner'}";
        };

        class button_5 {
            displayName = "STR_pInAct_SearchHouse";
            buttonAction = "[cursorObject] spawn life_fnc_raidHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "!(player distance cursorObject > 15) && !isNil {cursorObject getVariable 'house_owner'} && {cursorObject isKindOf ""House""}";
        };

        class button_6 {
            displayName = "STR_pInAct_LockHouse";
            buttonAction = "[cursorObject] spawn life_fnc_lockupHouse; closeDialog 0;";
            buttonToolTip = "";
            side[] = {west};
            disable = false;
            condition = "!isNil {cursorObject getVariable 'house_owner'}";
        };
    };
};
