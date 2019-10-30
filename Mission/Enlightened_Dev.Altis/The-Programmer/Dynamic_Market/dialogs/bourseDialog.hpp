class BourseView
{
	idd = 128000;
	movingEnable = false;
	enableSimulation = true;

	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29322917;
			y = safeZoneY + safeZoneH * 0.14351852;
			w = safeZoneW * 0.41354167;
			h = safeZoneH * 0.63055556;
			style = 48;
			text = "The-Programmer\Dynamic_Market\textures\bourse.paa";
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};

		class TimeBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.32135417;
			y = safeZoneY + safeZoneH * 0.275;
			w = safeZoneW * 0.3578125;
			h = safeZoneH * 0.08425926;
			style = 0;
			text = "";
			colorBackground[] = {44/255, 45/255, 44/255 ,1};
			colorText[] = {0,0,0,0};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};

		class TimeBetweenNewCalcul
		{
			type = 0;
			idc = 128005;
			x = safeZoneX + safeZoneW * 0.33072917;
			y = safeZoneY + safeZoneH * 0.275;
			w = safeZoneW * 0.16041667;
			h = safeZoneH * 0.03425926;
			style = 0+2;
			text = "Temps avant un nouveau calcul";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.25);
		};

		class TimeBetweenNewEvent
		{
			type = 0;
			idc = 128006;
			x = safeZoneX + safeZoneW * 0.50572917;
			y = safeZoneY + safeZoneH * 0.275;
			w = safeZoneW * 0.16041667;
			h = safeZoneH * 0.03425926;
			style = 0+2;
			text = "Temps avant un nouvel évènement";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.25);
		};

		class BackgroundInformation
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.46458334;
			y = safeZoneY + safeZoneH * 0.37407408;
			w = safeZoneW * 0.21458334;
			h = safeZoneH * 0.35;
			style = 0;
			text = "";
			colorBackground[] = {44/255, 45/255, 44/255 ,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};

	class Controls
	{
		class BourseItems
		{
			type = 5;
			idc = 128001;
			x = safeZoneX + safeZoneW * 0.321875;
			y = safeZoneY + safeZoneH * 0.375;
			w = safeZoneW * 0.13489584;
			h = safeZoneH * 0.35;
			style = 16;
			colorBackground[] = {44/255, 45/255, 44/255 ,1};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			colorSelect2[] = {1,1,1,1};
			colorSelectBackground[] = {0.95, 0.95, 0.95, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			colorPicture[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
			colorPictureDisabled[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			onLBSelChanged = "call theprogrammer_fnc_bourseViewSelectChange;";
			shadow = 0;

			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};

		/*class BourseItemInformations
		{
				type = 13;
				idc = 128002;
				style = 0;
				x = safeZoneX + safeZoneW * 0.465625;
				y = safeZoneY + safeZoneH * 0.375;
				w = safeZoneW * 0.215625;
				h = safeZoneH * 0.35;
				text = "";
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				colorText[] = {1, 1, 1, 1};
				colorBackground[] = {44/255, 45/255, 44/255 ,1};
				shadow = 1;

				class Attributes
				{
				font = "PuristaMedium";
				color = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};*/

		class TimeCalcul
		{
			type = 0;
			idc = 128003;
			x = safeZoneX + safeZoneW * 0.340625;
			y = safeZoneY + safeZoneH * 0.30925926;
			w = safeZoneW * 0.15052084;
			h = safeZoneH * 0.025;
			style = 0+2;
			text = "xx minute(s) xx seconde(s)";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.25);
		};

		class TimeEvent
		{
			type = 0;
			idc = 128004;
			x = safeZoneX + safeZoneW * 0.50572917;
			y = safeZoneY + safeZoneH * 0.30925926;
			w = safeZoneW * 0.16041667;
			h = safeZoneH * 0.025;
			style = 0+2;
			text = "xx minute(s) xx seconde(s)";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.25);
		};

		class ItemIcon
		{
			type = 0;
			idc = 128007;
			x = safeZoneX + safeZoneW * 0.46510417;
			y = safeZoneY + safeZoneH * 0.375;
			w = safeZoneW * 0.01927084;
			h = safeZoneH * 0.03611112;
			style = 48;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
		};

		class ItemName
		{
			type = 0;
			idc = 128008;
			x = safeZoneX + safeZoneW * 0.48489584;
			y = safeZoneY + safeZoneH * 0.375;
			w = safeZoneW * 0.19375;
			h = safeZoneH * 0.03611112;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
		};

		class PriceTendance
		{
			type = 13;
			idc = 128009;
			x = safeZoneX + safeZoneW * 0.46510417;
			y = safeZoneY + safeZoneH * 0.42222223;
			w = safeZoneW * 0.21354167;
			h = safeZoneH * 0.02870371;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow = 1;

			class Attributes
			{
				font = "PuristaMedium";
				color = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};

		class GeneralPriceTendance
		{
			type = 13;
			idc = 128010;
			x = safeZoneX + safeZoneW * 0.46510417;
			y = safeZoneY + safeZoneH * 0.44722223;
			w = safeZoneW * 0.21354167;
			h = safeZoneH * 0.02870371;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow = 1;

			class Attributes
			{
				font = "PuristaMedium";
				color = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};

		class ItemInformation
		{
			type = 13;
			idc = 128011;
			x = safeZoneX + safeZoneW * 0.46510417;
			y = safeZoneY + safeZoneH * 0.46851852;
			w = safeZoneW * 0.21354167;
			h = safeZoneH * 0.25462963;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow = 1;

			class Attributes
			{
				font = "PuristaMedium";
				color = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
	};
};
