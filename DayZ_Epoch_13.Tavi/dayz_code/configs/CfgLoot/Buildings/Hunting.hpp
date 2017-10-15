class Hunting : Default {
	zombieChance = 0.8;
	minRoaming = 4;
	maxRoaming = 6;
	zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
	lootChance = 0.2;
	lootGroup = Hunting;
};

class Land_Misc_deerstand: Hunting {
	zombieChance = 0.8;
	maxRoaming = 6;
	zedPos[] = {{0.419922,-0.234375,0.985291},{-0.836914,-0.929688,0.985291}};
	lootChance = 0.2;
	lootPos[] = {{-0.836914,-0.929688,0.985291},{0.419922,-0.234375,0.985291}};
};

class Land_bouda2_vnitrek: Hunting { //dark brown wooden house
	lootPos[] = {{2.33496,0.372559,-0.610508},{-0.845703,2.32129,-0.610506},{-3.27344,-2.27295,-0.610508}};
};