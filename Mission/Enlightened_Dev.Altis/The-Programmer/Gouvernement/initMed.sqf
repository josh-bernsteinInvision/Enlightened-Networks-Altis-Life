/*
_null=this execVM "The-Programmer\Gouvernement\initMed.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_ACCOUNT_MANAGEMENT","Max_Settings_Gouvernement","Gouvernement_Localization"] call theprogrammer_core_fnc_localize),{[2] spawn max_gouvernement_fnc_accountManagementMenu;},"",0,false,false,"",'((call life_mediclevel) >= (getNumber (missionConfigFile >> "Max_Settings_Gouvernement" >> "min_mediclevel_for_use_med_account")))'];