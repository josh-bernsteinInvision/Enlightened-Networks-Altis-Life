/*
	What is this?
	To link your server with you the programmer account to have more informations to help you for the installation of your next products.
	This is important to start our products on your server because the core do a lot of work to have an easy installation for all our products.

	This is required to start your server for security reasons. If you do not put the right email adress, you server will not work.

	EXAMPLE : (DO NOT USE THESE EMAIL ADRESS, THEY ARE NOT WORKING ITS ONLY AN EXAMPLE)

	accounts[] = {
	    "contact@the-programmer.com",
	    "postmaster@the-programmer.com"
	};
*/
accounts[] = {
	"stevenwalker500@gmail.com",
	"josh.williams57@hotmail.com"
	
};


/*
	What is this?
	The Programmer has a global ban system so hackers don't jump around servers and learn how to bypass The Programmer.

	If you as a server admin want him to get in even tho he is globally banned,	just ask for his UID and add the UID in the array below.
*/
enable_global_ban_sync = true; // If disable, all people banned by the programmer will be able to join your server (RECOMMENDED TO USE DEFAULT : true)

bypass_global_ban_uids[] = {
	"UID1","UID2","UID3","..."
};


/*
	What is this?
	The programmer can detect errors in the installation of our products on your server.
*/
errors_detection = true;

descriptionPath = "description.ext";
cfgRemoteExecPath = "CfgRemoteExec.hpp";
coreInitPath = "core\init.sqf";


/*
	What is this?
	To be able to customize our products to the maximum you can remove functions that may seem useless for you or add others
*/
edited_functions_logs = true;

removed_functions[] = {
	// {"\PBO_name\path_in_pbo","file_name_without_fn"}
};

added_functions[] = {
	// {"\PBO_name\path_in_pbo","file_name_without_fn", "tag", view (-2 : eveyrone, 2 : server)}
};
