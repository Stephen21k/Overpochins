class Castle : Default
{
	zombieClass[] = {"z_new_villager2","z_new_villager3","z_new_villager4"};
	lootChance = 0.2;
	lootGroup = Castle;
};

class Land_A_Castle_Bergfrit: Castle {
	zedPos[] = {{1.19141,-1.43848,-2.81638},{0.0595703,2.04785,-2.79636},{-2.19482,4.12305,-0.63858},{2.36133,3.86816,1.83972},{2.64746,-3.5459,3.85541},{-2.09473,-3.44922,6.29901},{-0.540039,-2.35254,8.76691},{-1.15918,3.13867,8.76691},{1.74707,1.26855,8.76691},{-1.62207,-4.28027,13.4801},{1.67578,-0.825195,16.8505},{-2.23047,4.82422,16.856}};
	//lootPos[] = {{0.0595703,2.04785,-2.79636},{1.19141,-1.43848,-2.81638},{-2.19482,4.12305,-0.63858},{2.36133,3.86816,1.83972},{2.64746,-3.5459,3.85541},{-2.09473,-3.44922,6.29901},{-1.15918,3.13867,8.76691},{1.74707,1.26855,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.28027,13.4801},{-2.23047,4.82422,16.856},{1.67578,-0.825195,16.8505}};
	lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
};

class Land_A_Castle_Stairs_A: Castle {
	zedPos[] = {{0.693604,-1.79297,0.703918},{8.42188,0.878906,0.889343},{8.11035,1.47949,7.01178}};
	//lootPos[] = {{0.693604,-1.79297,0.703918},{8.42188,0.878906,0.889343},{8.11035,1.47949,7.01178}};
	lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
};

class Land_A_Castle_Gate: Castle {
	zedPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	lootChance = 0.2;
	//lootPos[] = {{0.24,-4.49,-3.14},{-1.25,2.99,-3.07},{4.51,-3.31,-2.95},{4.71,2.71,-2.95},{7.76,0.51,-2.91}};
	lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
};

class Land_A_Castle_Wall2_End_2: Castle {
	lootChance = 0.2;
	lootPos[] = {{-4.66,0.52,-5.91},{1.51,0.07,-4.61}};
};

class Land_A_Castle_WallS_End: Castle {
	lootChance = 0.2;
	lootPos[] = {{-0.53,-1.95,-1.06}};
};

class Land_A_Castle_Wall2_30: Castle {
	lootChance = 0.2;
	lootPos[] = {{-7.18,-0.58,-5.89},{-0.94,-0.38,-4.58}};
};

class Land_A_Castle_WallS_10: Castle {
	lootChance = 0.2;
	lootPos[] = {{2.72,-2.57,-0.41},{-1.37,-1.28,-0.41}};
};

class Land_A_Castle_Donjon: Castle {
	lootChance = 0.2;
	lootPos[] = {{-2.14,2.22,12.5},{3.25,3.36,12.6},{0.92,0.93,12.53},{4,0.33,12.49},{-0.07,4.13,12.52},{-2.86,5.47,12.48}};
};