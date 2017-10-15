class Construction : Default {
	zombieChance = 0.8;
	maxRoaming = 6;
	zombieClass[] =
	{
		"z_worker1",
		"z_worker2",
		"z_worker3"
	};
	lootChance = 0.2;
	lootGroup = Construction;
};

class IndustrialCargo : Construction {
	zombieChance = 0.8;
	maxRoaming = 6;
	zombieClass[] =
	{
		"z_worker1",
		"z_worker2",
		"z_worker3"
	};
	lootChance = 0.2;
	lootGroup = IndustrialCargo;
};

class MilitaryCargo : Construction {
	zombieChance = 0.8;
	maxRoaming = 6;
	zombieClass[] =
	{
		"z_us_soldier",
		"z_us_soldier_light"
	};
	lootChance = 0.2;
	lootGroup = MilitaryCargo;
};
class Land_Hanger_2 : Construction {
	zedPos[] = {{10.729,-4.638,-0.130371},{4.516,-13.235,-0.130371},{-8.084,-13.729,-0.130371},{-5.547,-0.144,-0.130371},{0.494,-0.017,-0.130371},{-8.711,4.344,-0.130371},{-1.861,13.369,-0.130371},{10.273,13.539,-0.130371}};
	lootPos[] = {{10.729,-4.638,-0.130371},{4.516,-13.235,-0.130371},{-8.084,-13.729,-0.130371},{-5.547,-0.144,-0.130371},{0.494,-0.017,-0.130371},{-8.711,4.344,-0.130371},{-1.861,13.369,-0.130371},{10.273,13.539,-0.130371}};
};
class Land_wagon_box : Construction {
	zedPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
};

class Land_transport_cart_EP1 : Construction {
	lootPos[] = {{-0.01,0.24,0.16}};
};

class Land_wagon_flat : Construction {
	lootPos[] = {{0.02,6.44,0.28},{0.12,4.54,0.28},{0.22,2.57,0.28},{0.32,0.68,0.28},{0.43,-1.48,0.28},{0.54,-3.85,0.28},{0.03,-6.13,0.28}};
};

class Land_wagon_tanker : Construction {
	lootPos[] = {{0.05,4.78,-0.73},{-0.05,-4.71,-0.73}};
};

class MAP_Misc_Greenhouse : Construction {
	lootPos[] = {{0.73,-0.1,-0.73},{0,-0.1,-0.74},{-1.84,-0.02,-0.8}};
};

class Misc_Cargo1Bo_military : Construction {
	lootPos[] = {{0.35,-1.66,-1.09},{-0.06,0.27,-1.09},{-0.34,1.84,-1.09}};
};

class Land_Misc_Cargo1Ao : IndustrialCargo { //Orange
	zedPos[] =	{
		{0.00976563,0.19043,-1.09224},
		{0.012207,2.19263,-1.09224},
		{0.48877,-1.61377,-1.09224}};
	lootPos[] =	{
		{0.48877,-1.61377,-1.09224},
		{0.012207,2.19263,-1.09224},
		{0.00976563,0.19043,-1.09224}};
};

class Land_Misc_Cargo1Bo : MilitaryCargo { //Red
	zedPos[] = {
		{0.223389,-0.580078,-1.09222},
		{-0.322021,1.68555,-1.09222},
		{0.548584,-1.96289,-1.09222}};
	lootPos[] =	{
		{-0.322021,1.68555,-1.09222},
		{0.548584,-1.96289,-1.09222},
		{0.223389,-0.580078,-1.09222}};
};
