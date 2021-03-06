class Residential : Default {
	zombieChance = 0.8;
	maxRoaming = 6;
	zombieClass[] =
	{
		"zZombie_Base",
		"z_teacher",
		"z_villager1",
		"z_villager2",
		"z_villager3"
	};
	lootChance = 0.2;
	lootGroup = Residential;
};

class Land_A_MunicipalOffice : Residential { //Huge town hall (Middle Cherno)
	maxRoaming = 6;
	zedPos[] = {{-0.20752,-6.48633,-18.429},{3.31641,-5.77441,-18.429},{-4.66113,-6.27246,-18.429}};
	lootChance = 0.2;
	lootPos[] = {
		{-4.66113,-6.27173,-18.429},
		{3.31641,-5.77417,-18.429},
		{-0.20752,-6.48682,-18.429},
		{-9.72412,-4.88745,-3.78903},
		{-9.57813,3.55615,-3.78903},
		{-7.16797,11.0737,-3.78903},
		{5.07422,11.1838,-3.78903},
		{9.3208,5.38623,-3.78903},
		{9.65332,-4.82056,-3.78903},
		{3.23535,-0.105957,-0.169027},
		{4.85205,-3.69019,-0.169027},
		{-0.80127,-7.89087,-0.169027},
		{-4.4082,-4.91772,-0.169027},
		{-4.90771,-2.23169,-0.169027}
	};
	lootPosSmall[] = {
		{4.34521,-8.81567,-18.439},
		{-1.06787,-5.11499,-18.439},
		{1.3291,9.86938,-18.4413},
		{-1.54395,9.90649,-18.4353}};
};

class Land_ibrhotel: Residential { //Hotel Seven
	lootPos[] = {
		{ -8.44922,9.08105,-7.74672 },
		{ -0.813965,9.1748,-7.74672 },
		{ 3.17383,11.873,-7.74672 },
		{ 2.74072,2.91016,-7.74672 },
		{ 3.80225,-2.44434,-7.85944 },
		{ -1.28711,-0.235352,-4.25943 },
		{ 17.8379,-8.18896,-4.25943 },
		{ 15.4878,-11.4014,-4.25943 },
		{ -15.9063,-12.082,-4.25943 },
		{ -12.2837,-4.31934,-4.25943 },
		{ -16.7495,9,-4.25943 },
		{ -15.7764,11.6875,-4.25944 },
		{ -11.9551,16.458,-4.25944 },
		{ -4.83203,12.1294,-4.25943 },
		{ -5.21436,6.14258,-4.25943 },
		{ 3.57373,5.38721,-4.25943 },
		{ 8.66553,17.2417,-4.25943 },
		{ -1.28711,-0.235352,-0.759062 },
		{ 17.8379,-8.18896,-0.759062 },
		{ -9.04395,-17.6064,-0.759062 },
		{ -11.9761,-15.2539,-0.759062 },
		{ -15.9063,-12.082,-0.759062 },
		{ -12.2837,-4.31934,-0.759062 },
		{ -16.7495,9,-0.759062 },
		{ -15.7764,11.6875,-4.25944 },
		{ -11.9551,16.458,-4.25944 },
		{ -4.83203,12.1294,-0.759062 },
		{ -5.21436,6.14258,-0.759062 },
		{ 3.57373,5.38721,-0.759062 },
		{ 8.66553,17.2417,-0.759062 },
		{ -1.28711,-0.235352,2.74082 },
		{ 17.8379,-8.18896,2.74082 },
		{ 15.4878,-11.4014,2.74082 },
		{ 11.8403,-17.5391,2.74082 },
		{ 4.74902,-11.9019,2.74082 },
		{ -9.04395,-17.6064,2.74082 },
		{ -11.9761,-15.2539,2.74082 },
		{ -15.9063,-12.082,2.74082 },
		{ -12.2837,-4.31934,2.74082 },
		{ -16.7495,9,2.74082 },
		{ -15.7764,11.6875,-4.25944 },
		{ -11.9551,16.458,-4.25944 },
		{ -4.83203,12.1294,2.74082 },
		{ -5.21436,6.14258,2.74082 },
		{ 3.57373,5.38721,2.74082 },
		{ 11.8359,4.06348,2.74082 },
		{ -1.54492,0.158691,6.24485 },
		{ 3.11914,5.81445,6.24485 }};
	lootPosSmall[] = {
		{ 11.8403,-17.5391,-4.25943 },
		{ 4.74902,-11.9019,-4.25943 },
		{ -9.04395,-17.6064,-4.25943 },
		{ -11.9761,-15.2539,-4.25943 },			
		{ 15.4878,-11.4014,-0.759062 },
		{ 11.8403,-17.5391,-0.759062 },
		{ 4.74902,-11.9019,-0.759062 },			
		{ 8.66553,17.2417,2.74082 },
		{ 12.2725,16.1885,2.74082 },			
		{ 12.2725,16.1885,-0.759062 },
		{ 11.8359,4.06348,-0.759062 },
		{ 8.99023,1.72949,-0.759062 },	
		{ 12.2725,16.1885,-4.25943 },
		{ 11.8359,4.06348,-4.25943 },
		{ 8.99023,1.72949,-4.25943 }};
};

/////////////////////Sheds////////////////////////

class Land_kulna : Residential { //Wooden Shed small
	zedPos[] = {{-0.498291,1.92871,-1.12811},{0.503174,0.217773,-1.11633}};
	lootPos[] = {
		{0.503174,0.217773,-1.11633},
		{-0.498291,1.92871,-1.12811}};
};

class Land_hut06 : Residential { // Straw Shed
	zedPos[] = {{0.337402,2.27051,-1.56116},{-0.637695,0.753906,-1.53836}};
	lootPos[] = {
		{0.337402,2.27051,-1.56116},
		{-0.637695,0.753906,-1.53836}};
};

class Land_Shed_wooden : Residential { //Wooden Shed big
	zedPos[] = {{-0.342773,1.0293,-1.29156},{1.26807,-0.362305,-1.29156}};
	lootPos[] = {
		{1.26807,-0.361328,-1.29153},
		{-0.342773,1.0293,-1.29153}};
};

class Land_Hlidac_budka : Residential { // Guard Shed Green (Elektro Firestation)
	zedPos[] = {{2.02051,0.444336,-0.81366},{-0.460938,1.75879,-0.78363},{-2.31836,1.5127,-0.78363}};
	lootPos[] = {
		{-2.31836,1.5127,-0.78363},
		{2.02051,0.444336,-0.81366},
		{-0.460938,1.75879,-0.78363},
		{2.4209,2.16064,-0.783617}};
	lootPosSmall[] = {
		{0.987305,2.43359,-0.113617},
		{1.67773,2.24927,-0.113617},
		{-0.138184,0.0844727,-0.713617}};
};

class Land_Shed_W4 : Residential {
	maxRoaming = 6;
	zedPos[] = {};
	lootPos[] = {};
};

class Land_GuardShed : Residential {
	maxRoaming = 6;
	zedPos[] = {{-0.02,-1,-0.61}};
	lootPos[] = {{-0.02,-1,-2.61}};
};

class Land_Shed_W01 : Residential {
	zedPos[] =	{
		{-1.52832,-0.249023,-1.41138}};
	lootPos[] =	{
		{-1.52832,-0.249023,-1.41138}};
};


///////////////////////////Houses/////////////////////////////////

class Land_HouseV_1I4 : Residential { //Stashhouse
	zedPos[] = {{-0.400146,-3.87891,-2.7688},{-3.67651,-2.51758,-2.76544},{-0.472412,3.19824,-2.72028}};
	lootPos[] = {
		{0.53,-4.53,-2.77},
		{-3.83,-2.5,-2.77},
		{-0.51,3.92,-2.72},
		{-1.93,-5.12,-2.17},
		{0.57,-1.53,-2.76},		
		{0.222168,3.90839,-2.73031},
		{-1.82983,-1.81403,-2.76768}};
	lootPosSmall[] = {
		{-1.91772,-5.13812,-2.14811},
		{-4.34497,-1.12036,-1.88536},
		{-2.12329,-2.59363,-2.05582},
		{-1.34595,-2.80969,-2.04825}};
};

class Land_HouseV_1I1 : Residential { // Small Red-Green House (Only entrance)
	zedPos[] = {{0.100586,-2.34473,-2.88281}};
	lootPos[] = {
		{0.100586,-2.34473,-2.88281}};
	lootPosSmall[] = {
		{0.728516,-2.01514,-2.86235}};
};

class land_r_housev2_04: Residential { 
	lootPos[] = {
		{0.364502,3.06128,-4.08876},
		{-4.49097,3.29565,-4.0887},
		{7.0625,-1.54053,-4.09079}};
	lootPosSmall[] = {
		{-5.88696,2.77051,-4.08894},
		{-4.32666,6.00415,-4.0887},
		{7.37158,4.41968,-4.08918},
		{6.17065,2.39063,-4.09028}};
	zedPos[] = {{-1.72021,2.7146,-3.20429},{2.7522,2.9668,-3.20421},{4.73706,-0.942627,-3.20546}};
};

class Land_HouseV2_02_Interier : Residential { //Orange House (two sides)
	zedPos[] = {{-3.62598,3.05273,-5.58072},{3.34814,1.9707,-5.57071},{5.20117,-1.54004,-5.57071},{-5.71094,5.49414,-5.57071},{7.23145,5.37109,-5.57071},{-7.57861,-1.01563,-5.57071},{8.5498,0.754883,-5.57071},{-6.52295,2.35547,-5.5607}};
	lootPos[] = {
		{7.23,5.37,-5.57},
		{8.55,0.75,-5.57},
		{5.2,-1.54,-5.57},
		{3.35,1.97,-5.57},
		{-3.63,3.05,-5.58},
		{-7.58,-1.02,-5.57},
		{-6.52,2.35,-5.56},
		{-5.71,5.49,-5.57},
		{6.53,1.49,-4.64},
		{0.05,1.32,-5.53},
		{6.97412,1.26904,-5.53068},
		{4.21631,6.56396,-5.53068},
		{-5.94922,-1.28955,-5.53068},
		{-3.31494,6.44287,-5.53068}};
	lootPosSmall[] = {
		{6.44629,1.7251,-4.61068},
		{6.63672,1.2583,-4.61068},
		{8.7749,-2.23779,-4.74068},
		{2.81006,6.30908,-5.57068},
		{-4.97754,-2.1543,-5.57068},
		{-2.42676,5.58887,-5.57068}};
};

class Land_HouseV2_04_interier : Residential { //Red house (one way)
	zedPos[] = {{2.10938,6.60449,-5.76862},{-2.30029,4.22461,-5.75937},{-4.96289,2.91309,-5.74985},{1.95557,4.16211,-5.74939},{-5.13281,6.74316,-5.74857},{7.51025,-0.931641,-5.74176},{7.49561,5.83594,-5.73901}};
	lootPos[] = {
		{7.5,6.93,-5.74},
		{7.58,-1.89,-5.74},
		{1.85,2.66,-5.06},
		{3.38,6.4,-5.77},
		{-1.44,3.1,-5.76},
		{-3.63,6.88,-4.99},
		{-4.96,2.91,-5.75},
		{0.29,1.26,-2.93},
		{-1.44,6.44,-5.74},
		{4.82,2.63,-5.74},
		{-5.08826,3.13818,-5.73971},
		{7.37061,6.52881,-5.73873},
		{1.75281,3.70752,-5.73953},
		{-3.75183,7.1626,-5.73842},
		{0.292725,1.27441,-2.93809}};
	lootPosSmall[] = {
		{4.7594,2.8042,-5.07979},
		{4.93396,2.56348,-5.07979},
		{1.95215,2.67529,-5.05956},
		{0.668823,2.56299,-5.74944},
		{-3.7146,7.07813,-4.98862},
		{-3.31897,6.68457,-4.98895},
		{-2.87244,6.92676,-5.29893},
		{-3.95215,2.85449,-5.19935}};
};

class Land_HouseV2_04_interier_dam : Land_HouseV2_04_interier {};

class Land_HouseV2_01A : Residential {  // Big Green House (Only entrance)
	zedPos[] = {{-1.60547,-3.23535,-5.61884},{-3.37256,-3.34082,-5.58344}};
	lootPos[] = {
		{-3.37256,-3.34082,-5.58344},
		{-1.60547,-3.23535,-5.61884}};
	lootPosSmall[] = {
		{-3.53906,-3.29736,-5.55779},
		{-0.759766,-3.95068,-5.56563}};
};

class Land_sara_domek_zluty : Residential { //Yellow House with interier
	maxRoaming = 6;
	zedPos[] = {{-6.17139,-2.33789,-2.43384},{-0.660645,2.05469,-2.43372},{6.36401,-0.236328,-2.43372},{2.95679,3.00684,-2.43365},{-3.75342,-3.54785,-2.42389},{-2.77441,0.751953,-2.42371},{-5.07666,3.04395,-2.42352},{0.627197,-0.584961,-2.41394},{7.06665,2.9541,-2.4137}};
	lootPos[] = {
		{2.96,3.01,-2.43},
		{7.07,2.95,-2.41},
		{6.36,-0.24,-2.43},
		{0.63,-0.58,-2.44},
		{-0.66,2.05,-2.43},
		{-2.77,0.75,-2.42},
		{-5.08,3.04,-2.42},
		{-6.17,-2.34,-2.43},
		{-3.75,-3.55,-2.42},
		{6.91724,3.09277,-2.43372},
		{6.52881,-0.521973,-2.43379},
		{0.613037,3.74463,-2.4337},
		{-7.00024,-0.744141,-2.43373},
		{-3.13672,3.45459,-2.43364},
		{-6.81055,-2.67676,-2.43385}};
	lootPosSmall[] = {
		{7.26685,-0.882324,-2.43378},
		{4.00684,3.84766,-2.43372},
		{-1.11255,1.29395,-2.43382},
		{-7.22192,-4.23584,-2.43386}};
};

class Land_HouseV_3I4 : Residential {
	maxRoaming = 6;
	zedPos[] = {{5.46387,2.80273,-2.61298}};
	lootPos[] = {{5.46387,2.80273,-2.61298}};
};

class Land_HouseV_3I1 : Residential { //Green-Orange-Green House
	maxRoaming = 6;
	zedPos[] = {};
	lootPos[] = {};
};

class Land_HouseV_1L2 : Residential { //House with carport
	maxRoaming = 6;
	zedPos[] = {{-0.448242,5.29883,-3.01697}};
	lootPos[] = {
		{-0.448242,5.29883,-3.01697},
		{-2.58887,-4.8584,-0.789368},
		{-2.58887,-4.8584,-0.789368},
		{-2.37646,0.373047,-0.799377}};
	lootPosSmall[] = {
		{-1.37354,-3.26465,-0.789368},
		{4.48389,-3.06348,0.0406189},
		{4.53271,-3.61328,0.590637},
		{-1.37354,-3.26465,-0.789368},
		{4.48389,-3.06348,0.0406189},
		{4.53271,-3.61328,0.590637},
		{4.29126,-1.02441,0.0606384},
		{-0.199707,3.28711,-2.9292}};
};

class Land_HouseV_1T : Residential { //Red Roof - Orange House
	maxRoaming = 6;
	zedPos[] = {{2.53027,-2.41895,-3.22815}};
	lootPos[] = {{2.53027,-2.41895,-3.22815}};
};

class Land_HouseV_1L1 : Residential { // Green carport house-model
	zedPos[] = {{1.20801,5.86035,-1.09302}};
	lootPos[] = {{1.20801,5.86035,-1.09302}};
};

class Land_HouseV_1I2 : Residential
{
	zedPos[] = {{-3.60205,2.81641,-2.23148}};
	lootPos[] = {{-3.60205,2.81641,-2.23148}};
};

class Land_HouseV_2L : Residential {
	zedPos[] = {{-3.98438,-3.87207,-4.02338},{4.32617,1.81836,-3.96332}};
	lootPosSmall[] = {{4.39404,1.28296,-3.96535},{4.12988,2.52222,-3.95569}};
};

class Land_tav_HouseV_2L : Residential { //Norislsk
	lootPos[] = {
		{0.483398,2.25684,-3.29924},
		{0.300781,-1.57422,-3.06017},
		{2.90918,-4.0625,-3.06057},
		{1.52344,3.75098,-0.395091},
		{-3.5332,2.64844,-0.595092},
		{-3.80859,1.17188,-1.14509},
		{2.6543,-4.27734,-1.14509},
		{2.83105,-2.11621,-4.08029},
		{-1.25195,1.68066,-4.07906},
		{-4.23438,2.72754,-4.07856},
		{-2.65039,-3.74414,-0.19509}};
	lootPosSmall[] = {
		{0.574219,2.58691,-4.06917},
		{3.32617,4.78516,-4.06888},
		{-1.50488,3.18359,-4.06856},
		{-4.18555,1.18164,-4.06856},
		{-4.87695,1.31445,-4.06856},
		{-4.70117,4.9375,-4.06856},
		{3.37305,0.746094,-4.06922},
		{-0.0234375,-3.15332,-4.07054},
		{3.19141,-0.136719,-1.13509},
		{3.1377,-0.967773,-1.13509},
		{-2.74023,-3.70898,-1.13509},
		{-2.77148,-2.56348,-1.13509},
		{-0.976563,-4.875,-1.13509},
		{-4.46289,4.51758,-1.13509},
		{-0.130859,0.648438,-1.13509},
		{3.09375,0.771484,-1.13509},
		{1.26465,4.79883,-1.13509},
		{3.04102,2.9502,-1.13509},
		{-1.35352,4.82422,-1.13509},
		{-0.813477,4.83984,0.00490952},
		{0.104492,4.82422,0.00490952},
		{2.71484,-0.000976563,0.0749092},
		{3.10352,-1.32227,0.0749092},
		{3.21289,-2.25,0.0749092},
		{3.1875,-3.03516,0.0749092},
		{-0.722656,-4.56445,-0.225091},
		{0.0693359,-3.25977,-0.735092},
		{1.3291,-4.46289,-0.735092},
		{-1.54883,-1.73633,-0.645092},
		{-1.75195,-0.941406,-0.645092},
		{0.0117188,0.966797,-0.265091},
		{-1.8457,2.47266,-0.445091},
		{-1.96484,3.44336,-0.445091},
		{-1.36133,2.75,-3.15856},
		{2.8252,4.51563,-3.58856},
		{0.360352,2.92188,-3.29856},
		{-4.50586,1.41895,-3.15856},
		{-3.22656,1.39453,-3.84856},
		{3.16504,-1.10938,-3.12034},
		{2.64648,-0.820313,-3.1199},
		{3.05371,-2.88086,-3.06018},
		{0.214844,-0.182617,-3.05989},
		{-1.41016,0.794922,-3.09866},
		{-0.527344,0.71875,-3.09862},
		{0.304688,0.761719,-3.09872}};
};

class Land_HouseV_1I3 : Residential { // Wooden Blockhouse
	zedPos[] = {{2.19531,-0.954102,-2.23218}};
	lootPos[] = {{2.19531,-0.954102,-2.23218}};
};

class Land_houseV_2T2 : Residential { // Big green house
	zedPos[] = {{-4.24951,0.988281,-4.0574}};
	lootPos[] = {
		{-4.24951,0.988281,-4.0574},
		{-3.49072,1.01782,-4.03519}};
	lootPosSmall[] = {
		{2.8606,4.33081,-4.65974},
		{-0.222778,4.34985,-4.65713}};
};

class Land_HouseV2_03 : Residential { // white house, two parts 
	zedPos[] = {{0.812988,7.99805,-5.89618},{9.96143,-9.00488,-5.48578}};
	lootPos[] = {{0.812988,7.99805,-5.89618},{9.96143,-9.00488,-5.48578}};
};

class Land_HouseV2_01B : Residential { //Big red house
	zedPos[] = {{9.53711,3.39453,-6.11053}};
	lootPos[] = {{9.53711,3.39453,-6.11053}};
	lootPosSmall[] = {{-4.27881,-2.22852,-5.18173}};
};

class Land_tav_HouseV2_01B : Residential { //Norislsk Big red house
	lootPos[] = {
		{7.30078,-0.0952148,1.13542},
		{0.769531,4.71094,1.13502},
		{-7.5498,4.64209,1.13655},
		{-9.64453,0.362305,1.13806},
		{-1.00391,1.87549,1.13656},
		{-4.78223,3.21484,1.13658},
		{-1.45703,-0.594238,1.13671},
		{5.11523,-1.07031,1.1359},
		{-9.37695,2.37695,5.40886},
		{-8.70215,0.0830078,5.40886},
		{-4.53418,3.28174,5.40886},
		{4.16211,-0.959961,5.40886},
		{1.70117,1.02783,5.40886},
		{7.22266,4.78809,5.40886},
		{2.25488,4.68994,5.40886},
		{4.16699,5.05371,6.34886},
		{1.87305,-0.604492,6.15886},
		{6.75488,-0.432617,5.96886},
		{-8.79492,1.7085,1.89788}};
	lootPosSmall[] = {
		{-8.69629,5.24414,2.14651},
		{-10.0557,5.22656,2.1467},
		{-6.22461,2.59814,2.14643},
		{-6.27344,0.944824,2.14708},
		{-6.52539,4.32715,2.10656},
		{-8.93262,2.42139,1.89691},
		{-7.12109,-1.61865,2.20792},
		{-6.25391,-1.59668,2.20797},
		{1.75195,5.22119,2.19488},
		{2.42773,5.10498,2.19485},
		{7.80859,1.64502,1.83461},
		{7.81641,2.87988,1.84464},
		{7.80469,4.92773,1.84399},
		{0.789063,1.01855,1.79576},
		{0.808594,2.23975,1.79544},
		{0.618164,3.15918,2.05509},
		{-4.14844,4.66992,1.27605},
		{-5.4209,5.37646,1.13588},
		{-4.81055,5.39844,1.13588},
		{-3.86523,2.56055,1.13599},
		{-6.22949,-1.68604,1.13781},
		{-6.24414,3.5332,1.13657},
		{-10.0664,4.62842,5.41886},
		{-10.043,0.655762,5.41886},
		{-10.2578,-1.69531,5.41886},
		{-6.85547,-0.668945,5.41886},
		{-2.43359,3.32227,5.41886},
		{-5.03711,5.55127,5.41886},
		{4.24609,5.21729,5.41886},
		{7.57715,0.412109,5.41886},
		{2.15137,-1.64404,5.41886},
		{0.361328,0.150879,5.41886},
		{0.382813,2.48779,5.41886},
		{0.283203,5.4707,5.41886},
		{5.56641,5.3584,5.41886},
		{7.55176,1.63721,6.10886},
		{7.63965,0.838379,6.10886},
		{-9.37695,1.07031,5.82886},
		{-9.67383,-1.12354,5.82886},
		{-7.6543,2.17969,5.93886},
		{-2.04102,0.571777,6.33886},
		{-1.98828,2.25732,6.33886},
		{-2.77539,3.60449,6.32886},
		{-5.07227,5.16943,6.02886},
		{-1.61816,5.81836,6.45886},
		{-4.19141,5.79102,6.45886},
		{-6.14258,5.77441,6.45886},
		{-8.28027,5.83496,6.45886},
		{1.21289,5.82031,6.45886},
		{2.56055,5.77686,6.45886},
		{5.41992,5.83838,6.45886},
		{3.0918,-2.07861,6.45886},
		{1.65625,-2.06006,6.45886},
		{5.72461,-2.05566,6.45886},
		{8.14844,2.68555,6.49886},
		{-4.47461,-2.04736,6.45886},
		{-5.89844,-2.05078,6.45886},
		{-1.42578,-2.07129,6.45886},
		{-10.7725,1.27686,2.5278},
		{-8.2207,-2.05469,2.5282},
		{3.08008,-2.08545,2.5262},
		{5.97656,-2.05029,2.52628},
		{2.94531,5.7915,2.53437},
		{5.36328,5.77246,2.53404}};
};

class Land_dum_mesto2: Residential { //Grey House (Trader Gord)
	lootPos[] = {
		{2.46582,7.10742,-4.34475},
		{2.87305,4.03906,-4.34475},
		{-3.56738,4.05078,-4.34475},
		{-2.49902,0.46875,-4.34475},
		{1.77734,-7.41797,-4.34475},
		{-3.24512,-7.69922,-4.34475},
		{-3.16113,-1.58984,-4.34475},
		{3.19531,1.64258,-0.945168},
		{-3.19141,7.76563,-0.944004},
		{-0.253906,4.78516,-0.944004},
		{-3.35645,-5.74414,-0.944004},
		{-1.70508,-7.22656,-0.944004},
		{1.21973,-1.07617,-0.944004}};
};

class Land_sara_Domek_sedy: Residential { //Small white house
	lootPos[] = {
		{-1.76367,-1.11328,-2.14196},
		{-5.0127,3.01953,-2.14196},
		{5.41211,2.625,-2.14196},
		{4.86035,-0.738281,-2.14196}};
};
class Land_dum_rasovna: Residential { //small grey house with ladder
	lootPos[] = {
		{-1.271,3.38281,-2.69958},
		{3.14893,3.86255,-2.69958},
		{3.30957,-4.17871,-2.69958},
		{-0.936523,-1.97412,0.242605},
		{1.05518,3.77271,0.242605}};
	lootPosSmall[] = {
		{-0.964844,-3.52148,0.952604},
		{0.613281,-0.726807,-2.69958},
		{3.69873,-1.69995,-2.69958}};
	zedPos[] = {{-1.08252,-1.93018,-1.79458},{-1.68555,2.19971,-1.79458}};
};

class Land_dum_ras: Residential {
	lootPos[] = {
		{-1.53223,3.34424,-2.66958},
		{1.36621,-0.507813,-2.66958},
		{0.860352,3.72705,0.272604},
		{-0.767578,-1.96289,0.272604},
		{-0.27832,-3.96045,0.272604}};
};

class land_seb_bouda1: Residential {
	lootPos[] = {
		{2.49316,-2.44238,1.13067},
		{-0.645996,-2.44824,1.13067},
		{-0.924316,-0.460938,0.573963},
		{-2.89697,1.9043,0.571716},
		{2.80566,1.2334,-3.28989},
		{-2.38672,-0.893555,-3.28989},
		{-2.7666,2.41699,-3.28989}};
};

class land_cihlovej_dum_mini: Residential {
	lootPos[] = {
		{-2.4646,-0.78418,-2.86942},
		{-1.75586,2.88525,-2.86942},
		{2.76587,2.08154,-2.86942},
		{1.96265,-1.98877,-2.86942},
		{0.0109863,0.876465,-2.86942},
		{0.116455,3.05762,-2.86942}};
};

class Land_hruzdum: Residential {
	lootPos[] = {
		{-1.67188,3.71826,-4.72847},
		{-2.52295,-1.02246,-1.16867},
		{-1.94971,1.22021,1.5983}};
	lootPosSmall[] = {
		{-2.84448,0.796875,2.35386},
		{2.79614,3.2666,-1.15755},
		{-3.03979,2.35303,-4.72847}};
	zedPos[] = {{-1.66382,-1.14795,-3.82291},{-2.79248,3.60742,-0.251995}};
};

class Land_cihlovej_dum_in: Residential {
	lootPos[] = {
		{-0.0117188,0.0441895,-1.81473},
		{-1.76758,2.24805,-1.8147},
		{-2.88965,-1.64795,-1.8147},
		{1.84277,-2.07983,-1.81471},
		{1.58691,-1.3374,-5.27588},
		{1.22852,2.57324,-5.27588}};
};

class land_smd_cihlovej_dum_mini: Residential {
	lootPos[] = {
		{0.623047,2.39746,-2.58942},
		{0.0996094,0.995117,-2.86942},
		{-4.05957,-1.01953,-2.86942},
		{-8.86328,2.89453,-2.86942}};
	lootPosSmall[] = {
		{2.89453,-1.72852,-1.91942},
		{2.92773,-2.3418,-2.86942},
		{-6.09668,3.10938,-2.86942},
		{-2.19629,2.9375,-2.86942}};
	zedPos[] = {{1.81738,0.794922,-1.99442},{-1.7959,1.10742,-1.99442},{-6.54102,1.04688,-1.99442}};
};

class Land_deutshe_mini : Residential { //white house
	lootPos[] = {
		{-4.34277,-2.54297,-2.74846},
		{-0.624023,-0.357422,-2.74846},
		{0.853516,1.04395,-2.74846},
		{-2.75781,2.44336,-2.74846}};
};

class Land_dum_mesto_in: Residential {
	lootPos[] = {
		{ -5.53796,-2.51996,-3.99769 },
		{ -4.66113,1.34052,-4.26331 },
		{ -4.9137,3.4718,-4.26331 },
		{ 0.397583,-2.74866,-4.26418 },
		{ 2.18762,0.74707,-4.26418 },
		{ 4.94128,-1.67108,-4.26418 },
		{ 4.48279,2.82495,-4.26418 },
		{ 1.11023,4.69928,-2.75561 },
		{ 4.98938,3.79883,-1.28095 },
		{ 5.55957,-1.61218,-1.28095 },
		{ 0.695679,-2.18268,-1.28095 },
		{ -2.42969,-1.18854,-1.27582 },
		{ -4.77722,3.51996,-1.27582 }};
};

class Land_HouseV_2I : Default {
	maxRoaming = 6;
};

//////////////////////Block Houses///////////////////////////

class Land_A_Pub_01 : Residential { //Corner House
	zombieChance = 0.8;
	lootPos[] = {
		{1.83,0.39,-5.75},
		{-1.77,0.33,-5.76},
		{-6.66,-6.43,-5.76},
		{-4.64,-0.1,-5.75},
		{-5.76,-3.05,-5.75},
		{-2.08,0.92,-1.79},
		{-4.77,-5.89,-1.78},
		{-6.94,-1.94,-1.77},
		{-4.05,-0.78,-1.78},
		{1.4,-1.74,-1.76},
		{3.14,-2.79,-1.76},
		{3.58,-0.59,-1.76},
		{3.03,-4.04,-1.76},
		{1.94,3.19,-1.78},
		{-0.1,6.22,-1.78},
		{5.3,7.56,-1.79},
		{6.93,-2.85,-1.79},
		{2.57,-4.6,-5.76},
		{4.07,5.41,-5.76},
		{0.75,2.3,-5.75},
		{6.47,-1.71,-5.06},
		{1.17188,5.7522,-5.75623},
		{6.46191,-1.73706,-5.01623},
		{6.46777,1.47949,-5.75623},
		{0.975098,-5.80859,-5.75621},
		{-5.79736,-2.57813,-1.79123},
		{-7.35303,-3.7627,-1.79123},
		{4.56885,0.998291,-1.79123},
		{3.45947,0.236328,-1.79123},
		{1.91504,6.302,-1.79123},
		{0.114258,2.17432,-1.79123},
		{6.52832,6.10889,-1.79123},
		{0.555176,0.169189,-1.79123},
		{-4.37793,-2.64038,-5.75623},
		{-7.1709,-1.76855,-5.75623}};
	lootPosSmall[] = {
		{-0.602051,2.69214,-5.48623},
		{2.0708,1.98486,-5.19622},
		{1.37744,7.89722,-5.01622},
		{3.28076,-1.51782,-4.75623},
		{2.79395,-1.90845,-4.75622},
		{1.19043,-1.97632,-4.7562},
		{4.03418,-5.81592,-5.30621},
		{1.46143,-6.27979,-5.01621},
		{-4.8252,-2.66309,-1.78122},
		{1.16504,1.125,-1.19122},
		{2.73486,0.744873,-0.701225},
		{5.04053,-2.60938,-1.78122},
		{5.00293,2.03491,-1.78122},
		{2.89844,5.78613,-1.37122},
		{1.44482,6.51831,-1.31123},
		{1.77734,7.88013,-1.79123},
		{5.81934,5.90967,-1.41122},
		{-3.41016,1.26123,-1.78123},
		{-7.37891,-1.24756,-5.28622}};
	zedPos[] = {{-1.76563,0.334473,-5.75623},{2.56934,-4.6001,-5.75623},{4.06738,5.41406,-5.75623},{-6.66211,-6.4292,-5.75623},{0.75293,2.2998,-5.74622},{-4.63574,-0.100586,-5.74622},{-5.75977,-3.05029,-5.74622},{1.83398,0.394043,-5.74619},{-2.08203,0.922852,-1.79126},{5.30469,7.55957,-1.79126},{6.93164,-2.84668,-1.79126},{-0.0957031,6.22461,-1.78125},{1.94141,3.18799,-1.78125},{-4.05273,-0.779785,-1.78125},{-4.76563,-5.89111,-1.78125},{-6.94434,-1.9375,-1.77124},{1.39844,-1.73779,-1.76123},{3.03027,-4.04346,-1.76123},{3.13867,-2.78564,-1.76123},{3.58301,-0.591309,-1.76123}};
};

class Land_HouseBlock_A1_1 : Residential { //House with hallway
	zedPos[] = {{-3.52881,0.15918,-4.74365},{-3.56152,-2.33496,-4.73096}};
	lootPos[] = {
		{-3.52881,0.158936,-4.74365},
		{-3.56152,-2.33484,-4.73106}};
};

class land_tav_houseblock_b4_in: Residential {
	lootPos[] = {
		{1.19824,-4.22266,-2.93635},
		{-3.9834,2.82324,-2.55635},
		{-1.55566,1.9707,-2.30635},
		{-1.57422,3.13379,-2.30635},
		{4.9873,-2.69336,-2.77635},
		{-5.21973,1.08105,-3.32635},
		{-2.82031,4.12402,-3.32635},
		{-4.75488,-2.58594,-3.32635},
		{3.3125,-1.01172,-3.32635},
		{4.82715,-3.86719,-3.32635}};
	lootPosSmall[] = {
		{5.17383,-1.13867,-3.32635},
		{5.875,-4.10059,-3.32635},
		{2.65039,-0.420898,-3.32635},
		{0.492188,-1.28125,-3.32635},
		{0.808594,-4.11816,-3.32635},
		{-2.60059,-4.41113,-3.32635},
		{-0.510742,-4.31055,-3.32635},
		{-5.9248,-1.26367,-3.32635},
		{-6.00195,-4.45801,-3.32635},
		{-4.0166,3.09375,-3.32635},
		{-1.42871,3.91113,-3.32635},
		{1.08203,-1.06152,-7.3048},
		{1.12402,-1.63086,-7.3048},
		{1.07715,-4.26563,-7.3048},
		{-1.78418,4.05566,-7.3048},
		{-5.67383,2.34668,-2.39635},
		{-4.38281,-0.324219,-2.35635},
		{-4.87402,0.123047,-2.35635},
		{-1.61523,4.27148,-1.92635},
		{-5.5918,-1.16992,-2.10635},
		{-3.90039,-1.20605,-2.10635},
		{-4.46484,-1.25781,-2.62635},
		{-5.1875,-1.18652,-2.62635},
		{-0.639648,-3.66992,-2.40635},
		{-4.97266,-4.07422,-2.91635},
		{-4.1377,-4.12793,-2.91635},
		{-3.01953,-3.87109,-2.91635},
		{5.9209,-4.02344,-2.16635},
		{-0.584961,0.911133,-3.32635},
		{-0.591797,-0.46582,-3.32635},
		{0.148438,0.955078,-3.31635}};
};

class Land_HouseBlock_A1 : Residential {
	zedPos[] = {{-3.48242,2.13965,-8.81882},{-4.56689,-3,-8.81262}};
	lootPos[] = {{-4.56689,-3,-8.81262},{-3.48242,2.13965,-8.81882}};
};

class Land_HouseBlock_A2_1 : Residential {
	zedPos[] = {{3.98975,4.48926,-7.4043}};
	lootPos[] = {{3.98975,4.48926,-7.4043}};
};

class Land_HouseBlock_A3 : Residential {
	zedPos[] = {{0.554688,2.70801,-5.4317}};
	lootPos[] = {{0.56,2.71,-5.43},{-0.72,-3.61,-5.45},{1.04,-1.56,-5.45}};
};

class Land_HouseBlock_B5 : Residential {
	zedPos[] = {{-5.10742,5.23926,-7.57431}};
	lootPos[] = {{-5.10742,5.23926,-7.57431}};
};

class Land_HouseBlock_B6 : Residential {
	zedPos[] = {{-3.01172,0.820313,-7.60886}};
	lootPos[] = {{-3.01172,0.820313,-7.60886}};
};

class Land_HouseBlock_C1 : Residential {
	zedPos[] = {{5.85889,4.46875,-9.59036}};
	lootPos[] = {{5.85889,4.46875,-9.59036}};
};


/////////////////////Appartements/////////////

class Land_Panelak : Residential {
	lootPos[] = {
		{-2.76855,-6.26563,0.0714111},
		{-2.93848,-1.3916,0.0714111},
		{-5.4209,-3.13184,0.0814209},
		{-6.81152,-6.15527,0.0714111},
		{-4.00879,2.53027,0.0714111},
		{-0.730469,-3.20117,2.77145},
		{3.97852,-7.08936,2.77145},
		{2.49609,2.93701,2.77145},
		{6.78906,1.55273,2.77145},
		{6.38477,-2.3916,2.77145},
		{6.80566,-5.77295,2.77145},
		{4.59863,-1.36328,2.77145},
		{-0.824219,1.86914,1.32864},
		{-3.76709,-5.5791,0.0714226},
		{-6,-5.1709,0.0714226},
		{-4.86719,-3.30518,0.0714226},
		{-5.75098,1.51172,0.0714226},
		{3.95483,-4.83008,2.77144},
		{4.8728,1.51855,2.77144},
		{6.07324,-5.4668,2.77144}};
	lootPosSmall[] = {
		{-4.05713,-4.55469,1.21142},
		{-4.03857,-4.71094,0.0714211},
		{-5.52002,-6.45508,0.0714211},
		{-3.9873,-3.06934,0.761421},
		{-3.99072,-3.84375,1.29142},
		{-4.09497,-2.15625,0.0714211},
		{-5.01172,1.91406,0.0714211},
		{-4.146,1.42871,0.391421},
		{1.37354,-5.00684,2.77144},
		{4.1167,-7.4834,2.77144},
		{4.2417,-3.69287,3.00144},
		{5.16602,-3.7334,3.40144},
		{4.15137,1.27051,2.77144},
		{4.66846,1.74414,3.43144},
		{5.69775,-6.44727,2.77144}};
	zedPos[] = {{-2.76855,-6.26563,0.0714111},{-2.93848,-1.3916,0.0714111},{-4.00879,2.53027,0.0714111},{-6.81152,-6.15527,0.0714111},{-5.4209,-3.13184,0.0814209},{-0.824219,1.86914,1.32864},{-0.730469,-3.20117,2.77145},{2.49609,2.93701,2.77145},{3.97852,-7.08936,2.77145},{4.59863,-1.36328,2.77145},{6.38477,-2.3916,2.77145},{6.78906,1.55273,2.77145},{6.80566,-5.77295,2.77145}};
};

class Land_Panelak2 : Residential {
	lootPos[] = {
		{-0.729492,-3.00684,-2.62872},
		{-0.763672,1.36133,-1.3714},
		{-0.30127,3.64941,1.32861},
		{0.736328,-3.22266,2.76105},
		{-0.630859,1.84668,4.05231},
		{3.68896,-7.33789,5.46661},
		{2.26807,2.94043,5.46661},
		{6.70068,2.69043,5.46655},
		{6.87842,-1.45996,5.47675},
		{6.39795,-6.02734,5.47662},
		{4.55371,-1.76758,5.46667},
		{2.76416,0.446289,5.46661},
		{0.53833,2.0498,-1.29137},
		{4.87939,1.90234,5.46665},
		{4.71045,-3.02197,5.46665},
		{6.01514,-5.86133,5.46665},
		{3.8833,-4.72314,5.46665}};
	lootPosSmall[] = {
		{4.85205,-3.7041,6.69665},
		{4.38281,-3.68848,6.09665},
		{5.229,1.64063,6.24665},
		{4.62354,1.4082,6.24665},
		{5.41382,-5.54199,5.79665},
		{1.20215,-4.93652,5.47665}};
	zedPos[] = {{-0.729492,-3.00684,-2.62872},{-0.763672,1.36133,-1.3714},{-0.30127,3.64941,1.32861},{0.736328,-3.22266,2.76105},{-0.630859,1.84668,4.05231},{6.70068,2.69043,5.46655},{2.26807,2.94043,5.46661},{2.76416,0.446289,5.46661},{3.68896,-7.33789,5.46661},{4.55371,-1.76758,5.46667},{6.39795,-6.02734,5.47662},{6.87842,-1.45996,5.47675}};
};

class LAND_Tav_Panelak2 : Residential {
	lootPos[] = {
		{-0.267578,2.73926,-3.90915},
		{-0.0234375,-1.99805,-2.64298},
		{0.143555,2.68262,-1.28629},
		{-0.164063,-1.85938,0.0610123},
		{0.175781,2.66699,1.41665},
		{-0.126953,-1.85352,2.76688},
		{0.125977,2.57227,4.11961},
		{-0.19043,-1.8584,5.47019},
		{2.67578,3.37891,5.46665},
		{2.63086,-0.570313,5.46665},
		{3.48535,-5.80371,5.46665},
		{3.59473,-4.33398,5.46665},
		{4.78711,-1.08887,5.46665},
		{6.69238,-4.27539,5.46665},
		{6.61719,3.67383,5.46665},
		{4.81641,2.58594,6.23665}};
	lootPosSmall[] = {
		{5.21875,-2.73047,6.08665},
		{4.81152,-2.74023,6.08665},
		{4.21875,-2.66113,6.08665},
		{5.39453,-3.66309,5.79665},
		{5.34277,-4.81543,5.79665},
		{5.25391,-5.68848,5.46665},
		{7.30762,-6.48438,5.48665},
		{5.38672,-6.54297,5.48665},
		{4.20313,1.3877,5.48665},
		{5.69629,-2.75391,5.48665},
		{4.16113,-2.09375,5.48665},
		{5.02734,2.38086,5.48665},
		{3.39258,1.33887,5.48665},
		{1.39941,-4.07422,5.48665},
		{1.9375,-3.56055,5.48665},
		{-0.790039,4.34863,4.09244},
		{0.803711,4.29395,4.09244},
		{-0.862305,4.28906,1.36864},
		{0.732422,4.38574,1.36864},
		{-0.611328,4.32324,-1.31137},
		{0.744141,4.28027,-1.30137},
		{-0.724609,4.50977,-3.99646}};		
};

class LAND_Tav_panelak : Residential {
	lootPos[] = {
		{-0.328125,2.66797,-1.222},
		{0.110352,-2.06738,0.0614243},
		{-0.0195313,2.73926,1.40865},
		{-0.0527344,-1.95703,2.77016},
		{2.60156,3.63281,2.77144},
		{6.72168,3.70215,2.77144},
		{4.81641,-1.12305,2.77144},
		{5.60547,0.893555,2.77144},
		{6.74219,-4.35449,2.77144},
		{3.74316,-4.25293,2.77144},
		{2.67969,-5.72266,2.77144},
		{-2.54688,-0.0263672,0.0714226},
		{-6.36719,3.61914,0.0714226},
		{-2.76367,3.48535,0.0714226},
		{-5.36719,-2.10059,0.0714226},
		{-5.80957,0.717773,0.0714226},
		{-6.6416,-4.4668,0.0714226},
		{-3.47266,-5.7832,0.0714226},
		{-2.6875,-4.62793,0.0714226}};
	lootPosSmall[] = {
		{-0.868164,4.48926,-1.37059},
		{-3.41992,-3.5127,0.0714226},
		{-1.90039,-3.55371,0.0714226},
		{-2.2041,-6.19434,0.0714226},
		{-1.83594,-2.96387,0.0714226},
		{-4.0332,-1.21875,0.0714226},
		{-5.31934,-5.62207,0.0714226},
		{-5.50098,-6.51563,0.0814209},
		{-6.9502,-6.58008,0.0814209},
		{-7.41016,2.33984,0.0714226},
		{-5.88184,2.25488,0.0714226},
		{-3.87109,2.44043,0.391422},
		{-4.69824,2.48535,0.391422},
		{-3.99902,-1.74316,0.761421},
		{-4.03711,-2.67773,0.761421},
		{-4.03906,-2.08105,1.29142},
		{-4.00098,-3.65039,1.21142},
		{-0.432617,4.21777,1.38865},
		{0.736328,4.30273,1.39864},
		{5.25977,2.48828,3.43144},
		{4.5498,2.63184,3.43144},
		{5.10352,-2.66211,3.40144},
		{4.29004,-2.67773,3.40144},
		{4.20898,-2.80371,4.00144},
		{4.82227,-2.78906,4.00144},
		{5.34375,-4.81348,3.10144},
		{5.50977,-3.85547,3.10144},
		{5.24121,-5.63086,2.77144},
		{5.76172,-2.82227,2.77144},
		{4.16016,1.40723,2.77144},
		{7.47559,2.31445,2.77144},
		{4.99414,2.62988,2.77144},
		{1.86328,-2.88086,2.77144},
		{1.42969,-4.06445,2.77144},
		{6.95508,-6.49609,2.79144},
		{5.37695,-6.75098,2.78144}};				
};

class Land_Panelak3 : Residential { //Huge Appartement
	zedPos[] = {};
	lootPos[]={
		{0.54,-0.71,-8.11},
		{2.51,-1.84,12.38},
		{2.8,-0.67,12.38},
		{3.98,-1.49,12.38},
		{2.00415,-1.33325,12.3769},
		{0.0378418,-1.23608,-10.8254}};
};

class LAND_Tav_Panelak3 : Residential { //Huge Appartement Tavi
	lootPos[] = {
		{0.0878906,0.793457,-10.8154},
		{-0.810547,3.44824,-10.8154}};
};

class LAND_Big_Panelak : Residential { //Tavi only 
	lootPos[] = {
		{3.30566,-9.23413,-14.7521},
		{3.10059,-7.05005,-14.7521},
		{5.36914,0.495361,-14.7521},
		{-0.236328,-3.16772,-14.7521},
		{3.05078,-0.838379,-14.7521}};
};

class Land_ibrPanelak: Land_Panelak{};
class Land_ibrPanelak2: Land_Panelak2{};

//////////////////Wrecks///////////////

class UAZWreck: Residential {
	zombieClass[] = {"zZombie_Base"};
	zombieChance = 0;
	lootChance = 0;
	minRoaming = 0;
	maxRoaming = 0;
	lootPos[] = {};
};

class LADAWreck : Residential {
	zombieChance = 0;
	minRoaming = 0;
	maxRoaming = 0;
	zedPos[] = {};
	lootChance = 0.2;
	lootPos[] = {{-0.106934,-0.660156,-0.144714}};
};

class SKODAWreck : Residential {
	zombieChance = 0;
	minRoaming = 0;
	maxRoaming = 0;
	zedPos[] = {};
	lootChance = 0.2;
	lootPos[] = {{-0.66,-0.09,-0.58}};
};

class datsun01Wreck : Residential {
	maxRoaming = 0;
	lootChance = 0.2;
	lootPos[] =	{
		{0.0239258,1.51465,-0.141052}};
};

class datsun02Wreck: Residential {
	zombieClass[] = {"zZombie_Base"};
	zombieChance = 0;
	lootChance = 0;
	minRoaming = 0;
	maxRoaming = 0;
	lootPos[] = {};
};

class hiluxWreck: Residential {
	zombieClass[] = {"zZombie_Base"};
	zombieChance = 0;
	lootChance = 0;
	minRoaming = 0;
	maxRoaming = 0;
	lootPos[] = {};
};

/////////////////////Misc//////////////////////

class Land_psi_bouda : Residential { // Dog house
	zombieChance = 0;
	maxRoaming = 0;
	zedPos[] = {{1.02197,0.0185547,-0.519989}};
	lootPos[] = {{1.02197,0.0185547,-0.519989}};
};

class Land_KBud : Residential { //Outhouse
	zombieChance = 0.8;
	maxRoaming = 0;
	zedPos[] = {{-0.017334,0.0107422,-0.663696}};
	lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
};

class RU_WarfareBBarracks : Residential {
	maxRoaming = 0;
	zedPos[] = {{2.06,-2.63,0.52},{-0.01,2.35,0.55},{2.43,2.04,1.08},{-2.81,2.49,1.3},{-0.72,-0.03,1.31},{-0.38,-2.29,1.87}};
	lootChance = 0.1;
	lootPos[] = {{-2.81,2.49,1.3},{-0.72,-0.03,1.31},{2.06,-2.63,0.52},{-0.38,-2.29,1.87},{2.43,2.04,1.08},{-0.01,2.35,0.55}};
};

class Land_NAV_Lighthouse : Residential {
	zedPos[] = {{-0.16,-0.1,-6.78},{-0.06,3.36,-7.87}};
	lootChance = 0.2;
	lootPos[] = {{-0.16,-0.1,-6.78},{0.01,-1.7,2.42},{-0.06,3.36,-7.87}};
};

class land_rozvodna: Residential { //substation
	lootPos[] = {{-6.8208,-1.58789,-0.369419}};
};

class LAND_Posta : Residential { //Tavi school
	lootPos[] = {
		{-17.4678,-9.28809,1.00044},
		{-16.5732,-1.32227,1.00044},
		{-3.60254,-5.11377,1.00044},
		{9.72168,-6.61035,1.00044},
		{17.333,-8.2085,1.00044},
		{13.3633,7.1958,1.00044},
		{1.56445,8.49707,1.00044}};
};

class LAND_skola : Residential { //Tavi school
	lootPos[] = {
		{15.8508,20.459,-2.00361},
		{29.0132,22.3887,-2.00361},
		{30.6335,16.1104,-2.00361},
		{30.7412,5.33691,-2.00361},
		{18.7554,5.07324,-2.00361},
		{2.84912,14.2744,-2.00361},
		{-1.27197,12.2324,-2.00361},
		{-5.66699,16.6445,-2.00361},
		{-2.93408,22.0967,-2.00361},
		{5.48535,21.7969,-2.00361},
		{-9.52954,-8.64063,-2.00361},
		{-18.5305,-9.60449,-2.00361},
		{-23.9783,-0.905273,-2.00361},
		{-8.50586,13.9482,-2.00361},
		{5.84448,0.175781,-2.00361},
		{2.56885,-14.167,-2.00361},
		{-3.15063,-14.084,-2.00361},
		{-3.76294,-21.2754,-2.00361},
		{5.4397,-24.5635,-2.00361},
		{18.5049,-11.9141,-2.00361},
		{10.7795,-18.4443,-2.00361},
		{18.3979,-21.9854,1.22083},
		{20.1707,-14.1572,1.22083},
		{30.334,5.12402,1.22083},
		{22.9521,12.1387,1.22083},
		{1.45825,18.208,1.22083},
		{-5.56128,20.1572,1.22083},
		{-6.19165,15.4678,1.22083},
		{-1.05029,9.69141,1.22083},
		{6.17896,5.19434,1.22083},
		{5.00513,2.78711,1.22083},
		{5.81836,-5.65625,1.22083},
		{-0.54541,-15.1104,1.22083},
		{1.8418,-19.8584,1.22083},
		{-2.10864,-21.9961,1.22083},
		{-5.78857,-24.9277,1.22083},
		{16.3679,-15.4463,1.22083},
		{28.0537,-17.1328,1.22083},
		{22.1833,11.416,-2.00361}};
};

class LAND_hospoda  : Residential { //Tavi restaurant
	lootPos[] = {
		{3.46094,-1.42871,-1.80302},
		{2.40137,-1.22656,-1.80307},
		{7.81836,-1.63281,-1.80282},
		{2.04004,-6.71777,-1.80289},
		{-5.56641,0.793945,-1.80295},
		{-4.18164,8.64063,-1.80286},
		{1.16602,5.0791,-1.80348},
		{1.21582,3.73242,-1.8034},
		{0.248047,5.55176,-1.80324},
		{-1.84766,3.92969,-1.80313},
		{-1.85254,0.222656,-1.80321}};
};
class LAND_Kiosk2 : Residential {
	lootPos[] = {
		{-20.7441,45.2878,3.05876},
		{-3.80933,-33.6328,3.02246},
		{-3.57007,-22.666,3.02246},
		{4.76587,-24.3711,-0.618923},
		{-1.10449,43.1938,-0.58263},
		{8.77441,23.7346,-0.845428},
		{-9.86914,41.6533,3.05876},
		{7.84668,20.991,4.76736},
		{6.91211,27.9067,10.1178}};
};


class LAND_vokzal_big: Residential { //Tavi Trainstation
	lootPos[] = {
		{7.28613,-0.216797,-7.96283},
		{6.84961,2.56152,-7.96283},
		{6.9834,-4.98047,-7.96283},
		{-7.07227,1.28223,-7.96283}};
};

class Land_Rail_House_01 : Residential {
	zedPos[] =	{
		{0.487793,3.38867,-1.28265},
		{-1.82178,3.10938,-1.28265},
		{2.81152,3.61426,-1.28265}};
	lootPos[] =	{
		{2.81152,3.61426,-1.28265},
		{-1.82178,3.10938,-1.28265},
		{0.487793,3.38867,-1.28265},
		{-2.35864,3.04199,-1.28266}};
	lootPosSmall[] = {
		{3.13745,3.62549,-1.28266}};
};

class Land_sara_hasic_zbroj : Residential { //Car Port
	zedPos[] =	{
		{0.14,1.76,-2.65},
		{-0.94,-0.97,-2.65},
		{1.86,-0.47,-2.65},
		{2.69,-2.12,-2.65},
		{-3.02,-1.3,-2.65},
		{4.97,-1.94,-2.65},
		{5.67,1.09,-2.65}};
	lootChance = 0.2;
	lootPos[] =	{
		{5.67,1.09,-2.65},
		{4.97,-1.94,-2.65},
		{2.69,-2.12,-2.65},
		{1.86,-0.47,-2.65},
		{0.14,1.76,-2.65},
		{-3.02,-1.3,-2.65},
		{-0.94,-0.97,-2.65},
		{5.92285,1.35645,-2.66287},
		{0.00878906,-1.37549,-2.66287},
		{-1.82715,1.93066,-2.66287}};
	lootPosSmall[] = {
		{6.81348,-2.16846,-2.66287},
		{-3.30176,-2.49121,-2.67287}};
};

class land_zastavka : Residential { //tram station sabina
	lootChance = 0.5;
	lootPos[] =	{
		{0.31543,-4.39648,-2.42086},
		{0.351563,-0.875977,-2.42086},
		{0.358398,1.63086,-2.42086},
		{0.200195,4.66016,-2.42086}};
	lootPosSmall[] = {
		{-1.26367,0.50293,-2.42086},
		{-1.20605,3.5625,-2.42086},
		{-1.16211,5.33594,-2.42086},
		{-0.584961,-2.30469,-2.42086},
		{-1.21387,-2.0332,-2.42086},
		{-1.30566,-3.55859,-2.42086},
		{-1.24414,-4.92871,-2.42086},
		{-1.10547,-0.992188,-2.09086},
		{-1.1416,-4.33887,-2.09086},
		{-1.07129,1.53027,-2.09086},
		{-1.14941,4.64355,-2.09086}};
};

class land_hokej_stadion : Residential { //hockey field station sabina
	lootChance = 0.4;
	lootPos[] =	{
		{-11.1455,-6.15137,-1.7127},
		{-11.1045,-1.4043,-1.7127},
		{-11.1309,0.969727,-1.7127},
		{-11.2324,5.58203,-1.7127},
		{-12.1963,-5.32715,-1.2027},
		{-12.0586,-2.12402,-1.2027}};
	lootPosSmall[] = {
		{-12.3213,2.67676,-1.7127},
		{-12.0674,0.944336,-1.7127},
		{-12.2754,5.16016,-1.7127},
		{-12.1406,3.91406,-1.7127},
		{-12.2021,-1.43066,-1.7127},
		{-12.168,-3.06934,-1.7127},
		{-12.0576,-4.58594,-1.7127},
		{-11.9629,-6.15234,-1.7127},
		{-11.9736,1.04883,-1.2027},
		{-12.0586,2.67188,-1.2027},
		{-12.4736,5.80176,-1.2027},
		{-12.4219,-3.64941,-1.2027},
		{-12.0039,-1.1084,-1.2027},
		{-11.9814,-6.4668,-1.2027}};
};