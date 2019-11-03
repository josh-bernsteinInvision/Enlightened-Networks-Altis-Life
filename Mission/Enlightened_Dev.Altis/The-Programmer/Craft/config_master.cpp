/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define true 1
#define false 0

class Max_Settings_Craft {
    default_lang = "en"; // fr / en / de / es

    textures_base_path = "The-Programmer\Craft\textures";

    item_workbench = "etabli";
    3d_object_workbench = "Land_Workbench_01_F";
    place_only_in_house = true;

    class crafts {
        class vItem { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VITEMS";

            class pickaxe {
                itemsRequired[] = {
                    {"rock",2}
                };
                moneyRequired = 0;

                itemGive = "pickaxe"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Une pioche, pour faire un trou"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Fabrication d'une pioche";
                timeToCraft = 60; // In seconds
            };
			class wire {
				itemsRequired[] = {
					{"copper_refined",5},
					{"iron_refined",2}
				};
				moneyRequired = 100;

                itemGive = "wire"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Une pioche, pour faire un trou"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Fabrication d'une pioche";
                timeToCraft = 60; // In seconds
            };
					
        };

        class weapon { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_WEAPONS";

        };

        class uniform { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_UNIFORM";

        };

        class backpack { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_BACKPACK";

        };

        class vehicle { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VEHICLES";

            class quad {
                itemsRequired[] = {
                    {"iron_refined",20},
                    {"toolkit",3}
                };
                moneyRequired = 500;

                itemGive = "B_Quadbike_01_F";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Fabrication d'un quad";
                timeToCraft = 120; // In seconds
            };
        };
    };
};
