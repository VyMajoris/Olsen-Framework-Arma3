//Do not edit unless you know what you are doing
//because you are on the highway to the danger zone!

class RscTitles {
	
	class testHud {
		idd = 400;
		fadeout = 0;
		fadein = 0;
		duration = 1e+1000;
		onLoad = "uiNamespace setVariable ['fwDebug', _this select 0];";
		
		class controlsBackground {
		
			class SOME_TEXT: RscStructuredText
			{
			
				idc = 4001;
				x = 0 * safezoneW + safezoneX;
				y = 0 * safezoneH + safezoneY;
				w = 0.5 * safezoneW;
				h = 1 * safezoneH;
				
			};
			
		};
		
	};
};