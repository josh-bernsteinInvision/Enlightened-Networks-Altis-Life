/*
 *  Author: Thomas CROIZET "Steez"
 *  File: fn_bourseReturnTime.sqf
 *  License: Script sales in The-Programmer, © All Rights Reserved
*/
#define true 1
#define false 0

class CfgDynamicMarketPrice {
	lang = "en"; // en / fr

	sleepSpecialEvent = 10; // in minutes, default value = 10
	sleepCalculating = 5; // in minutes, default value = 5
	saveInDatabase = true;
	hideEventTime = false; //Displays or not the date of the next event
	enableSpecialEvent = true; //If you have no event you can disable the system
	timeCalculSafe = 5; // In seconds, protect a bourse price stops

	/* EXAMPLE CLASS
		class Example ==> This is the variable of the virtual object
		{
				isHide = ==> Does not display the object in the menu (the object remains influenced)

				synchronizeBuyPrice = ==> Synchronize or not the buy price to the sell price

				minPrice = the minimum price of your item, must be an integer

				maxPrice = the maximum price of your item, must be an integer

				defaultPrice = the default price of your item, must be an integer

				influence = a coefficiant for the item, default value = 0.15

				specialEvents[] = { {"name of an event", min influence, max influence} } to lower the price put the influence betwteen > 1 and < 2.

				To increase the price put the influence between < 1 and > 0. Leave blank if you do not want an event.

				itemInfluenced[] = { {"class name of the item", coefficiant} } the coefficiant must be >= 1, default value 1.25
		};
	*/

	class apple {
		isHide = false;
		synchronizeBuyPrice = false;
		minPrice = 1254;
		maxPrice = 5488;
		defaultPrice = 1478;
		influence = 0.15;
		specialEvents[] = { {"New company specialized in apple sales", 0.15, 0.8}, {"A scientific study proves the benefits of apples", 1.15, 1.8} };
		itemInfluenced[] = { {"peach", 1.25} };
	};
};
