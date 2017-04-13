class CfgSurfaces 
{
	class Default {};
	class grass_surface : Default
	{	
		 files = "grass*";
		 rough = 0.09;
		 maxSpeedCoef = 0.85;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "grass_Character";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.03;
	};
	class sand_surface : Default
	{	
		 files = "sand*";
		 rough = 0.09;
		 maxSpeedCoef = 0.80;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "EMPTY";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.03;
	};
	class forest_surface : Default
	{	
		 files = "forest*";
		 rough = 0.09;
		 maxSpeedCoef = 0.85;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "grass_Character";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.03;
	};
};

class CfgSurfaceCharacters
{
	class grass_Character
  	{
			probability[]={0.6, 0.2};
			names[]={"Grass", "Flowers"};
  	};
};