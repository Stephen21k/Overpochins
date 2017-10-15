class Industrial: Default {
	zombieChance = 0.8;
	maxRoaming = 2;
	zombieClass[] =	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.3;
	lootGroup = Industrial;
};

class Superstore: Industrial {
	zombieChance = 0.8;
	maxRoaming = 2;
	zombieClass[] =	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.3;
	lootGroup = Superstore;
};

class WIPBuilding: Industrial {
	zombieChance = 0.8;
	maxRoaming = 2;
	zombieClass[] =	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.3;
	lootGroup = WIPBuilding;
};

class Workshop: Industrial {
	zombieChance = 0.8;
	maxRoaming = 2;
	zombieClass[] =	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.3;
	lootGroup = Workshop;
};

///////////////////WorkShops//////////////////////////////////

class Land_Ind_Workshop01_01 : Workshop {
	lootChance = 0.3;	
	zedPos[] = 	{
		{-0.661621,-0.498047,-1.29883},
		{1.24536,0.464844,-1.29498},
		{0.59668,-2.43066,-1.29449}};
	lootPos[] =	{
		{0.59668,-2.43066,-1.29449},
		{1.24536,0.464844,-1.29498},
		{-0.661621,-0.498047,-1.29883},
		{1.31201,-2.71387,-1.29234},
		{-0.819336,0.449219,-1.29946}};
	lootPosSmall[] =	{
		{1.81372,-3.33643,-0.714019},
		{1.92627,-1.69531,-1.29493},
		{-1.19482,2.00977,-0.22825},
		{-0.82251,1.2583,-0.836819}};
};

class Land_Ind_Garage01_EP1: Workshop {
	lootPos[] = {
		{1.65088,2.49048,-1.23114}};
	lootPosSmall[] = {
		{2.89014,2.49634,-1.12063},
		{2.84814,3.43677,-1.12102},
		{1.39063,3.59766,-0.391855},
		{1.57227,3.61353,0.368147},
		{1.7251,3.61353,-1.15185}};
	zedPos[] = {{0.125488,0.557861,-0.357141},{1.11084,-1.33643,-0.36116}};
};

class Land_Ind_Garage01 : Workshop {
	lootChance = 0.3;
	zedPos[] =	{
		{2.47778,-1.12793,-1.23743},
		{-0.580322,-1.49609,-1.23523},
		{1.32104,1.63184,-1.23218},
		{-0.834229,2.75684,-1.22571}
	};
	lootPos[] =	{
		{-0.580322,-1.49609,-1.23523},
		{-0.834229,2.75684,-1.22571},
		{2.47778,-1.12793,-1.23743},
		{1.32104,1.63184,-1.23218},
		{1.73755,2.71973,-1.24332},
		{-0.880371,-1.9082,-1.23318},
		{0.607178,3.2373,-1.23157}};
	lootPosSmall[] = {
		{2.9375,2.47754,-1.12036},
		{2.8606,3.33398,-1.12131},
		{1.35205,3.58398,-0.0119934},
		{1.76196,3.62207,-0.772003}};
};

class Land_Ind_Workshop01_02 : Workshop {
	lootChance = 0.3;
	zedPos[] = 	{
		{1.15479,-0.554688,-1.42944},
		{-1.18579,-0.178711,-1.42859},
		{-0.661377,1.10352,-1.42688}};
	lootPos[] =	{
		{1.15479,-0.554688,-1.42944},
		{-1.18579,-0.178711,-1.42859},
		{-0.661377,1.10352,-1.42688},
		{1.47144,-0.825195,-1.42987},
		{-1.29663,-0.373047,-1.42896}};
	lootPosSmall[] = {
		{1.65283,1.66846,-1.42742},
		{-1.75757,-1.08887,-1.43804}};
};

class Land_Ind_Workshop01_04 : Workshop {
	lootChance = 0.3;
	zedPos[] =	{
		{-1.37415,4.18896,-1.53123},
		{-1.06677,2.69531,-1.53062},
		{0.695435,4.24561,-1.52934},
		{-1.05566,-4.08398,-1.51927},
		{0.79248,-4.60742,-1.49341},
		{-1.84424,-6.1709,-1.44427},
		{1.43774,-6.59424,-1.41742}};
	lootPos[] = {
		{-1.37415,4.18896,-1.53123},
		{0.695435,4.24561,-1.52934},
		{-1.06677,2.69531,-1.53062},
		{0.79248,-4.60742,-1.49341},
		{-1.84424,-6.1709,-1.44427},
		{-1.05566,-4.08398,-1.51927},
		{1.43774,-6.59424,-1.41742},
		{-1.62207,-6.37305,-1.52724},
		{-0.118408,-3.88281,-1.52788},
		{-1.01611,2.13428,-1.53099}};
	lootPosSmall[] = {
		{-1.3833,-3.02734,-0.298156},
		{-1.9519,-3.37891,-1.52803},
		{1.60425,4.75244,-1.52979},
		{-0.324219,1.91504,-0.680825},
		{-0.302734,2.08545,0.0790772},
		{-1.61523,-3.03809,0.0718207}};
	hangPos[] = {{-0.541748,4.01221,-2.03068}};
};

class Land_Ind_Workshop01_L : Workshop {
	lootChance = 0.3;
	zedPos[] =	{
		{2.54688,-2.17773,-1.31482},
		{0.903809,-2.58984,-1.31418},
		{3.81299,-4.27051,-1.31345},
		{1.72021,-3.75586,-1.31332},
		{-0.813477,3.56348,-1.30765},
		{-2.38379,2.36133,-1.30405},
		{-3.21143,4.7793,-1.30246}};
	lootPos[] =	{
		{-3.21143,4.7793,-1.30246},
		{-0.813477,3.56348,-1.30765},
		{-2.38379,2.36133,-1.30405},
		{3.81299,-4.27051,-1.31345},
		{0.903809,-2.58984,-1.31418},
		{2.54688,-2.17773,-1.31482},
		{1.72021,-3.75586,-1.31332},
		{3.89063,-4.09888,-1.31299},
		{1.80273,-1.88599,-1.31412},
		{-0.928223,4.50635,-1.31364}};
	lootPosSmall[] = {
		{0.62793,-1.49097,-1.23395},
		{0.805664,-1.45605,-0.0939465},
		{4.56055,-5.29443,-1.31279},
		{0.0273438,5.04443,-0.47565},
		{0.25,5.00342,0.284006}};
};

/////////////////////////////////////////////////////////////////

class Land_Hangar_2 : Industrial { //Industrial Hanger
	lootChance = 0.3;
	zedPos[] =	{
		{1.79614,7.12695,-2.56329},
		{11.9399,7.90918,-2.56323},
		{5.98828,-2.6123,-2.56323},
		{-8.96973,-4.34961,-2.56323},
		{-0.560791,-7.5957,-2.56317},
		{10.1245,-6.48926,-2.56311},
		{-11.8945,10.541,-2.56311}};
	lootPos[] =	{
		{10.1245,-6.48926,-2.56311},
		{11.9399,7.90918,-2.56323},
		{1.79614,7.12695,-2.56329},
		{-11.8945,10.541,-2.56311},
		{-8.96973,-4.34961,-2.56323},
		{-0.560791,-7.5957,-2.56317},
		{5.98828,-2.6123,-2.56323},
		{-13.1816,10.4204,-2.56318},
		{-0.127441,-2.88794,-2.56318},
		{0.291992,3.94775,-2.56318},
		{8.94482,6.87793,-2.56318},
		{-13.688,-4.67871,-2.56318},
		{3.4248,-8.1499,-2.56318}};
	lootPosSmall[] = {
		{-14.3721,11.1743,-2.56319},
		{-0.0571289,5.94385,-2.56319},
		{11.751,11.3525,-2.56319},
		{-0.458008,-9.68652,-2.56319},
		{-14.3472,-6.29736,-2.56319},
		{14.4277,-4.83154,-2.56319}};
};

class Land_A_FuelStation_Build : Industrial {
	lootChance = 0.3;
	zombieClass[] = {"zZombie_Base","zZombie_Base"};
	zedPos[] =	{
		{-1.23218,1.26758,-1.57458},
		{1.67871,-0.918945,-1.57458},
		{1.82349,0.769531,-1.57458},
		{-1.31885,-0.655273,-1.57446}};
	lootPos[] =	{
		{-1.31885,-0.655273,-1.57446},
		{1.82349,0.769531,-1.57458},
		{1.67871,-0.918945,-1.57458},
		{-1.23218,1.26758,-1.57458},
		{1.88281,-0.879639,-1.57458}};
	lootPosSmall[] = {
		{-1.92578,0.237061,-0.604466},
		{-1.38672,0.592651,-1.09459}};
};

class Land_Shed_Ind02 : Industrial { //Metal Compound NWA
	lootChance = 0.3;
	zedPos[] =	{
		{4.44653,9.67578,-4.66602},
		{-2.28149,-5.67188,-4.65601},
		{4.41162,2.65137,-1.27954},
		{-3.44482,12.2129,-1.27704},
		{-0.437988,11.6953,-1.2764}};
	lootPos[] =	{
		{-2.28,-5.67,-4.66},
		{4.41,2.65,-1.28},
		{-0.44,11.7,-1.28},
		{-3.44,12.21,-1.28},
		{-2.77,5.85,-4.63},
		{3.42,1.62,-4.63},
		{4.69,-9.2,-1.28},
		{-3.93,-2.17,-1.29},
		{-3.94,-8.55,-1.29},
		{-5.57,9.01,-4.13},
		{-5.53,-8.73,-4.09},
		{3.39893,9.21875,-4.67596},
		{1.29541,0.227539,-4.67596},
		{-0.458984,11.6934,-1.28638},
		{-4.00879,-8.42773,-1.29721}};
	lootPosSmall[] = {
		{-3.66064,-0.253906,-4.66599},
		{4.44873,9.92578,-4.66599},
		{-0.209961,-0.124023,-4.66599},
		{4.89307,-0.166992,-1.29736},
		{-3.74805,12.123,-1.28674}};
};

class Land_tovarna1: Industrial {
	lootPos[] = {
		{ 2.83887,5.23889,-5.75442 },
		{ -2.30774,7.31934,-5.75442 },
		{ -11.0908,5.44897,-5.75442 },
		{ -11.4746,-1.5791,-5.75442 },
		{ -5.52405,1.68994,-5.75442 },
		{ 2.82605,1.4801,-5.75442 },
		{ 2.44128,-6.50256,-5.75442 },
		{ -6.68335,-0.453369,2.17997 },
		{ -3.81812,0.690186,2.17997 },
		{ 2.78735,1.19409,2.17997 },
		{ 1.59167,-6.06665,2.17997 },
		{ -2.4646,-5.63696,2.17997 },
		{ -5.77393,-7.28271,2.17997 },
		{ -0.484985,-3.14197,4.82992 }};
};
class Land_tav_Tovarna2 : Industrial { //Tec
	lootChance = 0.3;
	zedPos[] =	{
		{-12.0674,2.57031,-5.62714},
		{-6.39404,-8.25293,-5.62549},
		{0.234375,1.72266,-5.59778},
		{-10.854,-6.9209,-5.56561},
		{-6.77686,-1.73828,-5.56012},
		{-2.03516,6.61426,-5.55927},
		{-4.89844,6.62988,-5.55927},
		{-11.627,7.19629,-5.5592},
		{6.22021,-3.94824,-4.61829},
		{-3.74561,2.9043,-3.9967},
		{-7.14746,8.45313,-2.31165},
		{-12.7241,4.10254,-2.3114},
		{-12.8682,1.44434,-2.31134},
		{-4.55859,5.21777,-2.30164},
		{-4.00293,8.9707,-2.30151},
		{-12.4126,8.12402,-2.27142},
		{-12.1294,-0.157227,0.354309},
		{-8.81348,-0.453125,0.381226},
		{-4.67676,7.32715,1.57178},
		{-11.4702,2.91211,1.59656},
		{-11.0664,8.12988,1.60657},
		{-2.68555,3.43945,3.37433},
		{-13.1958,-8.95898,3.38428}};
	lootPos[] =	{
		{-11.63,7.2,-5.56},
		{-12.07,2.57,-5.63},
		{-4.9,6.63,-5.56},
		{-3.75,2.91,-4},
		{-12.87,1.44,-2.31},
		{-12.41,8.12,-2.27},
		{-12.72,4.1,-2.31},
		{-4,8.97,-2.3},
		{-7.15,8.45,-2.31},
		{-4.56,5.22,-2.3},
		{-11.47,2.91,1.6},
		{-11.07,8.13,1.61},
		{-4.68,7.33,1.57},
		{-2.69,3.44,3.37},
		{-13.2,-8.96,3.38},
		{-8.81,-0.45,0.38},
		{-12.13,-0.16,0.35},
		{-2.04,6.61,-5.56},
		{0.23,1.72,-5.6},
		{6.22,-3.95,-4.62},
		{-6.39,-8.25,-5.63},
		{-10.85,-6.92,-5.57},
		{-6.78,-1.74,-5.56},
		{8.44,0.52,-4.62},
		{2.1,6.56,-5.58},
		{-8.62,6.18,-5.56},
		{-9.26,7.01,-2.23},
		{-6.39,-0.48,6.45},
		{-4.37,-3.18,6.58},
		{-9.32,-1.18,6.56},
		{-10.16,7.67,6.56},
		{-2.09,-7.35,6.57},
		{0.91,1.59,6.56},
		{-1.2,6.85,6.58},
		{-2.02222,7.87256,-5.62933},
		{-12.2107,-8.15527,-5.62469},
		{-12.2112,7.7998,-5.62933},
		{-8.99805,7.72168,-2.31135},
		{-6.54077,8.80469,-2.31156},
		{-12.6907,8.04932,1.58661},
		{-9.06421,8.10645,1.58661},
		{-5.39453,9.02783,1.56174},
		{-8.26465,-0.520508,0.37684},
		{-3.83984,4.99121,-2.31156},
		{-6.6416,8.03174,-5.62933},
		{-3.31763,-1.80762,-5.59492},
		{-6.66382,7.57861,1.56174},
		{-12.8,4.30664,1.58661},
		{-12.8074,-0.535156,0.374299},
		{-12.4324,5.15918,-2.31135},
		{-12.8635,1.78174,-5.61933},
		{-3.19507,-8.49707,-5.63091},
		{6.43872,-3.48145,-4.62884},
		{9.97998,-2.35059,-4.62604}};
	lootPosSmall[] = {
		{-3.22974,9.69678,1.56174},
		{-10.2683,8.87354,1.58661},
		{-13.2981,7.09912,-2.31135},
		{-7.51001,9.64307,-2.31156},
		{-8.13623,5.60693,-5.62933},
		{-13.2112,0.257813,-5.62933},
		{2.41431,-2.05469,-5.62689},
		{1.64185,8.75879,0.374298},
		{-13.2427,-8.98438,3.3743},
		{-4.927,0.368164,0.372077},
		{-3.88208,-3.81641,6.62795},
		{-7.47241,4.50391,1.56174},
		{-8.28833,4.20068,1.58661},
		{-13.2944,-9.01514,0.374299},
		{-7.38672,4.53418,-2.31156},
		{-5.28125,2.875,-5.62933},
		{2.42627,-8.75684,-5.62154}};
};
class Land_Tovarna2 : Industrial { //Tec
	lootChance = 0.3;
	zedPos[] =	{
		{-12.0674,2.57031,-5.62714},
		{-6.39404,-8.25293,-5.62549},
		{0.234375,1.72266,-5.59778},
		{-10.854,-6.9209,-5.56561},
		{-6.77686,-1.73828,-5.56012},
		{-2.03516,6.61426,-5.55927},
		{-4.89844,6.62988,-5.55927},
		{-11.627,7.19629,-5.5592},
		{6.22021,-3.94824,-4.61829},
		{-3.74561,2.9043,-3.9967},
		{-7.14746,8.45313,-2.31165},
		{-12.7241,4.10254,-2.3114},
		{-12.8682,1.44434,-2.31134},
		{-4.55859,5.21777,-2.30164},
		{-4.00293,8.9707,-2.30151},
		{-12.4126,8.12402,-2.27142},
		{-12.1294,-0.157227,0.354309},
		{-8.81348,-0.453125,0.381226},
		{-4.67676,7.32715,1.57178},
		{-11.4702,2.91211,1.59656},
		{-11.0664,8.12988,1.60657},
		{-2.68555,3.43945,3.37433},
		{-13.1958,-8.95898,3.38428}};
	lootPos[] =	{
		{-11.63,7.2,-5.56},
		{-12.07,2.57,-5.63},
		{-4.9,6.63,-5.56},
		{-3.75,2.91,-4},
		{-12.87,1.44,-2.31},
		{-12.41,8.12,-2.27},
		{-12.72,4.1,-2.31},
		{-4,8.97,-2.3},
		{-7.15,8.45,-2.31},
		{-4.56,5.22,-2.3},
		{-11.47,2.91,1.6},
		{-11.07,8.13,1.61},
		{-4.68,7.33,1.57},
		{-2.69,3.44,3.37},
		{-13.2,-8.96,3.38},
		{-8.81,-0.45,0.38},
		{-12.13,-0.16,0.35},
		{-2.04,6.61,-5.56},
		{0.23,1.72,-5.6},
		{6.22,-3.95,-4.62},
		{-6.39,-8.25,-5.63},
		{-10.85,-6.92,-5.57},
		{-6.78,-1.74,-5.56},
		{8.44,0.52,-4.62},
		{2.1,6.56,-5.58},
		{-8.62,6.18,-5.56},
		{-9.26,7.01,-2.23},
		{-6.39,-0.48,6.45},
		{-4.37,-3.18,6.58},
		{-9.32,-1.18,6.56},
		{-10.16,7.67,6.56},
		{-2.09,-7.35,6.57},
		{0.91,1.59,6.56},
		{-1.2,6.85,6.58},
		{-2.02222,7.87256,-5.62933},
		{-12.2107,-8.15527,-5.62469},
		{-12.2112,7.7998,-5.62933},
		{-8.99805,7.72168,-2.31135},
		{-6.54077,8.80469,-2.31156},
		{-12.6907,8.04932,1.58661},
		{-9.06421,8.10645,1.58661},
		{-5.39453,9.02783,1.56174},
		{-8.26465,-0.520508,0.37684},
		{-3.83984,4.99121,-2.31156},
		{-6.6416,8.03174,-5.62933},
		{-3.31763,-1.80762,-5.59492},
		{-6.66382,7.57861,1.56174},
		{-12.8,4.30664,1.58661},
		{-12.8074,-0.535156,0.374299},
		{-12.4324,5.15918,-2.31135},
		{-12.8635,1.78174,-5.61933},
		{-3.19507,-8.49707,-5.63091},
		{6.43872,-3.48145,-4.62884},
		{9.97998,-2.35059,-4.62604}};
	lootPosSmall[] = {
		{-3.22974,9.69678,1.56174},
		{-10.2683,8.87354,1.58661},
		{-13.2981,7.09912,-2.31135},
		{-7.51001,9.64307,-2.31156},
		{-8.13623,5.60693,-5.62933},
		{-13.2112,0.257813,-5.62933},
		{2.41431,-2.05469,-5.62689},
		{1.64185,8.75879,0.374298},
		{-13.2427,-8.98438,3.3743},
		{-4.927,0.368164,0.372077},
		{-3.88208,-3.81641,6.62795},
		{-7.47241,4.50391,1.56174},
		{-8.28833,4.20068,1.58661},
		{-13.2944,-9.01514,0.374299},
		{-7.38672,4.53418,-2.31156},
		{-5.28125,2.875,-5.62933},
		{2.42627,-8.75684,-5.62154}};
};

class Land_Ind_Vysypka : Industrial {
	lootChance = 0.3;
	zedPos[] =	{
		{-6.26709,26.7344,-4.9772},
		{1.64697,23.4033,-4.97098},
		{7.146,3.9248,-4.96973},
		{4.63623,-12.1621,-4.9697},
		{0.487793,4.9541,-4.9686},
		{-6.30127,2.92969,-4.96838},
		{1.08203,-0.407227,-4.96802},
		{-5.07617,-16.4658,-4.96759},
		{-0.0336914,-10.8203,-4.96686}};
	lootPos[] =	{
		{0.487793,4.9541,-4.9686},
		{1.08203,-0.407227,-4.96802},
		{-0.0336914,-10.8203,-4.96686},
		{-5.07617,-16.4658,-4.96759},
		{-6.30127,2.92969,-4.96838},
		{-6.26709,26.7344,-4.9772},
		{1.64697,23.4033,-4.97098},
		{7.146,3.9248,-4.96973},
		{4.63623,-12.1621,-4.9697},
		{1.50195,-15.9287,-4.9663},
		{1.88208,6.03809,-4.97856},
		{-8.42188,10.0103,-4.97909},
		{1.21948,13.2168,-4.97966},
		{-7.09595,26.0376,-4.99675}};
	lootPosSmall[] = {
		{2.5459,-16.5952,-4.97639},
		{-8.72485,-22.1318,-4.97806}};
};

class Land_A_BuildingWIP : WIPBuilding {
	lootChance = 0.3;
	zedPos[] =	{
		{-12.6382,0.492188,-6.53247},
		{15.4502,-0.316406,-6.52979},
		{-15.563,-5.17871,-6.50513},
		{-16.0015,-9.80957,-6.50415},
		{-14.5049,-8.13086,-6.49951},
		{14.771,7.2959,-6.47754},
		{-4.62646,4.52344,-6.45264},
		{0.944824,-2.30176,-6.43042},
		{7.28076,3.20898,-6.4104},
		{9.75732,10.1123,-6.4082},
		{20.4893,2.31836,-4.52576},
		{2.22461,-9.21582,-2.53406},
		{-16.3184,-8.35645,-2.53357},
		{-8.92041,-7.18848,-2.53308},
		{17.3125,-3.09961,-2.53271},
		{10.7061,-6.51563,-2.53259},
		{-17.8853,6.63281,-2.53186},
		{-23.1982,8.44629,-2.53186},
		{-17.1982,9.58594,-2.53174},
		{-21.3066,-6.79297,-2.53174},
		{-21.6021,-1.79297,-2.53174},
		{-4.99121,9.80957,-2.53174},
		{14.0864,7.43945,-2.52686},
		{-13.8184,3.99023,1.47827},
		{10.5786,-6.84863,1.4812},
		{-20.6992,-16.9766,1.48291},
		{-15.9497,-6.17578,1.48804},
		{-3.19141,-2.49414,1.49414},
		{-15.415,-13.3896,5.4668}};
	lootPos[] =	{
		{0.16,11.99,-6.49},
		{-7.62,-9.06,-6.47},
		{-4.94,-6.01,-6.46},
		{-11.87,-9.73,-6.49},
		{-8.89,9.19,-6.48},
		{-4.24,10.81,-6.51},
		{-21.71,4.84,-6.41},
		{-23.5,11.51,-6.46},
		{-23.95,-1.07,-6.45},
		{-21.7,-9.83,-6.52},
		{-14.56,-13.11,-6.5},
		{-17.56,-15.55,-6.52},
		{-14.35,-16.07,-4.52},
		{-0.67,-14.4,-2.54},
		{15.23,-15.17,-2.54},
		{5.96,-12.56,-2.54},
		{-23.95,3.74,-2.53},
		{-22.82,8.38,1.48},
		{-11.27,10.63,1.5},
		{8.1,7.48,1.49},
		{17.76,2.55,1.43},
		{-7.71,-13.39,-6.87},
		{0.02,-13.18,-6.87},
		{8.24,-13.4,-6.87},
		{7.84,-7.36,-6.51},
		{0.9,4.92,-6.38},
		{-5.73,-1.68,-6.41},
		{-15.84,0.39,-6.48},
		{-11.72,15.21,-6.47},
		{-15.68,9.71,-6.44},
		{-15.4871,-9.755,-6.53698},
		{-10.4043,-9.76697,-6.53213},
		{-12.0098,-5.50208,-6.53936},
		{-21.5681,-9.69409,-6.54067},
		{-23.7563,8.18347,-6.45811},
		{2.82544,11.3822,-6.47826},
		{-7.49634,-9.24609,-6.52115},
		{6.21216,7.7356,-6.41615},
		{-9.29541,0.683716,-6.53778},
		{16.8376,2.03186,-2.54291},
		{4.77661,-9.35681,-1.50389},
		{-20.3762,-2.86389,-2.53182},
		{-14.3564,-9.68604,-2.5341},
		{-24.1724,7.65405,-2.53182},
		{1.15796,8.03552,-2.53182},
		{-24.0901,11.4227,1.47364},
		{-22.1218,11.8442,1.47786},
		{-22.7849,10.4189,1.47402},
		{-8.66797,5.81238,1.47396},
		{-11.4856,-2.29419,2.50674},
		{-15.6948,-13.5236,5.46682},
		{-8.00171,-1.07678,5.31147},
		{8.66626,-8.14514,5.344},
		{11.5269,2.50977,-6.52237},
		{-15.926,-17.5713,-6.53193},
		{-23.8391,0.109863,-6.47638},
		{-24.2957,2.29199,-2.53182},
		{-7.6853,11.9902,-2.53182},
		{-17.7314,1.81299,-2.53182},
		{2.94116,6.97754,1.47579},
		{-9.39014,-9.62451,1.47428},
		{-24.1311,9.47656,5.46242}};
	lootPosSmall[] = {
		{-10.4377,-8.03418,-6.54007},
		{-15.9675,-6.70959,-6.54014},
		{-15.8289,7.37451,-6.46946},
		{-6.89136,-5.30615,-6.52994},
		{-7.37231,0.36084,-5.627},
		{-20.3455,-4.8197,-2.24182},
		{-13.9419,-5.02502,-2.53268},
		{-6.2439,11.7518,-1.50182},
		{-23.1213,12.5128,1.47477},
		{-24.5806,9.80115,1.47403},
		{4.63794,-0.358765,2.17724},
		{-5.92505,11.8485,2.50079},
		{-11.2415,4.78796,6.37765},
		{-24.7756,-10.0265,5.46264},
		{5.75464,-9.76001,1.47425},
		{-23.0313,2.87158,-5.43137},
		{-0.398193,7.37256,-6.52535},
		{13.678,1.89307,-6.54251},
		{-7.79321,-9.53564,-2.53376},
		{15.3154,11.478,-2.54182},
		{-19.8633,12.3149,-2.54182},
		{-21.0286,-11.563,5.46691}};
};

class Land_Misc_PowerStation : Industrial {
	zedPos[] =	{
		{4.22803,-1.19922,-1.28812},
		{4.09863,4.89746,-1.25742}};
	lootPos[] =	{
		{4.09863,4.89746,-1.25742},
		{4.22803,-1.19922,-1.28812},
		{2.98767,-5.02051,1.54777},
		{3.67371,5.62207,-2.04407}};
	lootPosSmall[] = {
		{4.92017,6.24707,-1.26179},
		{1.62573,-6.4541,-1.13445},
		{1.33667,-6.37207,-0.374413},
		{-3.20825,-6.50195,0.315748},
		{-3.84949,-6.2627,-1.16402},
		{-1.35608,-6.3877,-0.374122},
		{-0.895142,-6.39453,-0.37413},
		{2.30383,2.21387,-2.04394},
		{0.0808105,-0.0566406,-1.204},
		{1.98657,3.49121,-0.623982}};
};

class Land_telek1 : Industrial { //Metal Radio tower, red-white
	zombieChance = 0;
	minRoaming = 0;
	maxRoaming = 0;
	/*zedPos[] = {
		{-0.114014,0.609375,13.9082},
		{-1.54883,-0.761719,13.9082}};*/
	lootChance = 0.3;
	lootPos[] =	{
		{-0.114014,0.609375,13.9082},
		{-1.54883,-0.761719,13.9082}};
};

class Land_Barn_Metal : Industrial {
	zedPos[] =	{
		{1.78223,7.49902,-5.44214},
		{-3.16846,14.9141,-5.44214},
		{-4.52295,-18.5713,-5.44214},
		{7.79883,20.1406,-5.44214},
		{-8.45898,-8.43848,-5.44214},
		{8.87207,-23.2041,-5.44214},
		{-2.00244,-3.19043,5.40768},
		{10.2598,22.709,5.57785},
		{-9.37109,-22.1816,5.57785}};
	lootPos[] =	{
		{-2.00244,-3.19043,5.40768},
		{-9.37109,-22.1816,5.57785},
		{10.2598,22.709,5.57785},
		{7.79883,20.1406,-5.44214},
		{8.87207,-23.2041,-5.44214},
		{-4.52295,-18.5713,-5.44214},
		{-8.45898,-8.43848,-5.44214},
		{1.78223,7.49902,-5.44214},
		{-3.16846,14.9141,-5.44214},
		{-8.18506,19.9023,-5.44214},
		{4.70117,17.2849,-5.44214},
		{1.31738,-7.94946,-5.44214},
		{-7.74316,-20.5955,-5.44214}};
	lootPosSmall[] = {
		{10.5313,22.6777,5.58788},
		{-9.65137,1.55225,5.58788},
		{-9.48535,-25.0022,5.58788},
		{2.83203,-25.1704,5.58788}};
};

class Land_Ind_Expedice_1 : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{5.66846,-18.3174,-5.75726},
		{0.120605,13.0664,-5.6839},
		{1.67725,2.15137,-5.6839},
		{-0.315918,13.1416,-3.48672},
		{-11.7915,-13.8818,-3.48672},
		{-6.87695,-18.2285,-3.48672},
		{-0.5625,13.8926,9.71017}};
	lootPos[] =	{
		{-6.87695,-18.2285,-3.48672},
		{-0.315918,13.1416,-3.48672},
		{-0.5625,13.8926,9.71017},
		{5.66846,-18.3174,-5.75726},
		{1.67725,2.15137,-5.6839},
		{-11.7915,-13.8818,-3.48672},
		{0.120605,13.0664,-5.6839},
		{5.56104,-18.4136,-5.75725},
		{-10.0732,-18.7891,-3.48673},
		{-6.21045,-7.65479,-3.48673},
		{0.0634766,-0.0908203,-5.68389},
		{-2.59351,18.4795,-5.68389},
		{-1.85474,13.1089,-3.48673}};
	lootPosSmall[] = {
		{6.71289,-18.1563,-5.75725},
		{-9.12036,-17.6846,-3.48673},
		{-7.7959,-8.31201,-3.48673},
		{-1.51221,0.0673828,-5.68389},
		{-2.6748,11.6543,-5.6839},
		{-2.34814,11.9219,-3.48673}};
};

class Land_Ind_Mlyn_03 : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{-3.09521,-2.06934,-4.17218},
		{-5.604,4.47461,-4.17218},
		{2.34961,-5.01953,9.02472}};
	lootPos[] = {
		{-5.604,4.47461,-4.17218},
		{-3.09521,-2.06934,-4.17218},
		{2.34961,-5.01953,9.02472}	};
	lootChance = 0.3;
};

class Land_Ind_Pec_01 : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}};
	lootChance = 0.3;
	lootPos[] =	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}};
};

class Land_Ind_SiloVelke_01 : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{2.62646,7.77051,-5.45245},
		{-10.4751,0.642578,11.8912},
		{-5.62451,3.42188,11.8912},
		{-1.60742,8.15918,21.9993}};
	lootChance = 0.3;
	lootPos[] =	{
		{2.62646,7.77051,-5.45245},
		{-5.62451,3.42188,11.8912},
		{-10.4751,0.642578,11.8912},
		{-1.60742,8.15918,21.9993}};
};

class Land_A_CraneCon : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{-7.78271,-1.56445,10.621}};
	lootPos[] =	{
		{-7.78271,-1.56445,10.621}};
};

class Land_komin : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{0.126953,2.88086,12.4362}};
	lootChance = 0.3;
	lootPos[] =	{
		{0.126953,2.88086,12.4362}};
};

class Land_tav_Ind_Pec_03 : Industrial {
	lootChance = 0.3;
	maxRoaming = 0;
	zedPos[] =	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}};
	lootPos[] =	{
		{-2.19824,26.2227,-4.4661},
		{4.89453,26.7656,-4.4661},
		{2.17969,4.71582,-4.4661},
		{14.0068,16.0586,-4.4661},
		{4.92969,-5.46094,-4.4661},
		{4.93164,-13.1533,-4.4661},
		{5.01855,-20.9277,-4.4661},
		{10.9297,-18.2666,-4.4661},
		{9.71289,-24.5117,-4.4661},
		{-1.56641,-24.6504,-4.4661},
		{-0.686523,-12.4434,-4.4661},
		{-5.2793,0.951172,-4.4661},
		{-4.9707,11.3594,-4.4661},
		{11.3066,1.03125,-4.4661},
		{9.48145,-10.4277,-4.4661},
		{-14.2217,-10.0586,-4.4661},
		{-12.2393,-8.73047,-4.4661},
		{-13.8672,-8.78809,-4.4661},
		{-12.9355,-14.5117,-4.4661},
		{-7.47363,-8.41797,-4.4661},
		{-7.55371,-10.001,-4.4661},
		{-9.73633,-8.46875,-4.4661},
		{-7.62891,-8.92383,-1.52624},
		{-7.88672,-12.3398,-1.52624},
		{-9.21582,-10.7285,-1.52624},
		{-13.1914,-9.15625,-1.52624},
		{-11.082,-12.4648,-1.52624},
		{-8.52832,-15.9375,-3.07736},
		{2.53418,-6.66602,-3.1861},
		{6.47656,-5.81934,-3.1861},
		{7.3584,2.21094,-3.1861},
		{2.57031,2.86719,-3.1861},
		{3.07324,-5.07031,-3.1861}};
};

class Land_Ind_Quarry : Industrial {
	zedPos[] =	{
		{0.74,-10.68,-7.48},
		{-2.97,-15.79,-7.48},
		{6.12,6.62,-7.48},
		{6.38,9.22,-7.48},
		{-7.11,3.25,-7.48}};
	lootPos[] = {
		{-4.53,-6.8,5.25},
		{-4.36,16.23,5.26},
		{0.74,-10.68,-7.48},
		{-2.97,-15.79,-7.48},
		{-7.11,3.25,-7.48},
		{6.12,6.62,-7.48},
		{6.38,9.22,-7.48},
		{-7.12,13.38,-7.48},
		{-4.55,6.12,5.29}};
};

class Land_hut_old01: Industrial { //metal barn
	lootPos[] = {
		{2.2793,-7.06348,-3.06107},
		{-3.3584,-1.7334,-3.01178},
		{-5.0332,-0.929688,-3.0112}};
};

class Land_hut_old02: Industrial { //metal barn
	lootPos[] = {
		{-5.60449,-1.20215,-3.03296},
		{-3.80371,-2.33154,-3.03296},
		{2.10156,-8.16406,-3.03296},
		{3.87402,8.28125,-3.03296}};
};

class Land_Shed_M02 : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{-0.0136719,-1.44629,-1.54199}};
	lootChance = 0.3;
	lootPos[] = {
		{-0.0136719,-1.44629,-1.54199}};
	lootPosSmall[] = {
		{1.00586,0.0698242,-1.01666},
		{-0.931641,0.0825195,-1.01755}};
};

class Land_A_Crane_02b_disabled : Industrial {
	maxRoaming = 0;
	lootChance = 0.3;
	lootPos[] =	{
		{-3.4707,-0.149414,-6.06299},
		{-10.9609,-0.0419922,-5.6626},
		{-9.85547,-0.046875,0.922455}};
};

class UralWreck : Industrial {
	maxRoaming = 0;
	lootChance = 0.3;
	lootPos[] =	{
		{-0.27,1.32,-1.19}};
};

class Land_Misc_GContainer_Big : Industrial {
	maxRoaming = 0;
	zedPos[] =	{
		{2.28223,0.792969,0.0986633}};
	lootChance = 0.3;
	lootPos[] =	{
		{2.28223,0.792969,0.0986633}};
};

class Land_trafostanica_velka : Industrial {
	maxRoaming = 6;
	zedPos[] =	{
		{-0.688965,5.47168,-2.61597},
		{0.803223,6.91602,-2.61597},
		{1.89258,-1.68164,-2.61597},
		{-2.82227,-6.4502,-2.61597}};
	lootChance = 0.3;
	lootPos[] =	{
		{-0.688965,5.47168,-2.61597},
		{0.803223,6.91602,-2.61597},
		{1.89258,-1.68164,-2.61597},
		{-2.82227,-6.4502,-2.61597}};
};

class Land_leseni2x: Industrial { //scaffolding
	lootPos[] = {
		{1.15625,-0.206055,2.55466}};
};

class Land_Ind_Oil_Pump_EP1: Industrial {
	lootPos[] = {
		{ 1.49048,-1.99609,-2.08473 }};
};
class Land_IndPipe2_bigL_L_EP1: Industrial
{
	lootPos[] = {
		{ 1.09961,1.11572,2.0323 }};
};

class Land_Misc_Cargo1Bo_EP1: Industrial {
	lootPos[] = {{-0.0170898,-0.331421,-1.09225}};
};

class Land_Mil_Repair_center_EP1: Industrial {
	lootPos[] = {
		{-2.42432,-0.73584,-1.52847},
		{-2.43018,2.83984,-1.52847}};
};

class Land_Ind_PowerStation_EP1: Industrial {
	lootPos[] = {
		{4.04248,-3.4917,-1.26547},
		{3.8645,3.5249,-1.28112}};
};

class land_repair_center: Industrial  {
	lootPos[] = {
		{0.327148,1.65479,-2.37888},
		{-2.35547,-0.163574,-1.71927},
		{-2.41016,4.45654,-1.71927}};
	lootPosSmall[] = {
		{1.80469,2.01709,-1.6489},
		{1.60352,4.57178,-0.862885},
		{0.771484,4.55713,-0.48288},
		{1.56348,4.50439,-1.24289}};
	zedPos[] = {{0.982422,-0.634277,-1.51389}};
};

class Land_Ind_TankBig: Industrial {
	lootChance = 0.1;
	lootPosSmall[] = {
		{-1.2981,3.27441,5.34628},
		{3.49609,-3.02539,5.34628}};
	lootPos[] = {
		{-2.854,4.599,5.34728},
		{-6.382,-0.768,5.34728},
		{-2.694,-2.158,5.34728},
		{-3.468,-6.228,5.34728},
		{1.687,-6.462,5.34728},
		{1.979,0.845,5.34728},
		{5.631,-0.482,5.34728}};
};

class Land_Ind_FuelStation_Build_EP1: Industrial {
	lootChance = 0.3;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	lootPos[] = {
		{-1.34521,1.40698,-1.33611},
		{2.27051,-0.949951,-1.33611},
		{-2.23193,-1.146,-1.33589},
		{-0.185059,0.775146,-1.33609}};
};

class Land_ibr_FuelStation_Build: Industrial { //IndustrialFuel 
	lootChance = 0.3;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	lootPos[] = {
		{-1.34521,1.40698,-1.33611},
		{2.27051,-0.949951,-1.33611},
		{-2.23193,-1.146,-1.33589},
		{-0.185059,0.775146,-1.33609}};
};

class Land_Ind_Oil_Tower_EP1: Industrial {
	lootChance = 0.3;
	lootPos[] = {
		{ 3.55743,-5.92773,-12.9755 },
		{ 4.63086,1.24902,-12.9932 },
		{ -0.240356,-1.08252,-12.9875 },
		{ 6.87689,-6.34961,-8.00889 },
		{ 2.31177,0.231689,-8.00478 }};
};

class land_tram_depo: Industrial {
	lootChance = 0.3;
	lootPos[] = {
		{11.1523,-16.3965,-9.15949},
		{0.307617,-16.4951,-9.15949},
		{-11.1084,-16.4189,-9.15949},
		{1.97461,1.98926,-9.15949},
		{0.515625,13.2666,-9.15949},
		{-5.27832,19.6436,-9.15949},
		{-10.4971,19.5029,-9.15949},
		{6.68262,14.8379,-9.15949},
		{10.7861,19.4287,-9.15949},
		{10.6387,8.13086,-9.15949},
		{4.88574,-3.84082,-9.15949},
		{9.9248,-6.97852,-9.15949},
		{0.344727,-5.77832,-9.15949},
		{-10.8809,2.92383,-9.15949}};
};

class land_garaz_velka: Industrial { //Tavi Sabina Garage
	lootChance = 0.3;
	lootPos[] = {
		{7.56934,-9.99414,-5.52303},
		{22.2715,-7.43652,-5.52303},
		{20.9033,8.24414,-5.52303},
		{4.78418,2.84375,-5.52303},
		{2.78809,5.93359,-5.52303},
		{3.04004,17.5098,-5.52303},
		{-16.0752,-8.50977,-5.52303},
		{-22.25,-7.68359,-5.52303},
		{22.248,-23.8613,-5.41638},
		{24.5527,-22.373,0.168219},
		{24.1465,-26.9609,-1.70645},
		{25.5938,-26.9951,2.03974},
		{26.1787,-20.2354,2.00194},
		{22.0303,-8.19922,2.00194},
		{5.66113,-8.63086,2.00194},
		{7.4082,-6.36719,2.00194},
		{-18.2686,-8.81641,2.00194},
		{-20.1641,-5.9873,2.00194},
		{-14.4131,7.26172,2.00194},
		{-14.834,17.5068,2.00194},
		{-26.6826,9.1416,2.00194},
		{-26.2002,-20.1494,2.00194},
		{2.7002,17.7383,2.00194},
		{26.2344,17.791,2.00194},
		{-0.272461,28.1563,-0.133459},
		{-11.7461,28.0645,-0.133459},
		{2.75586,17.5186,-1.75768},
		{14.0391,8.28516,-1.75768},
		{12.3477,10.8789,-1.75768},
		{12.2598,4.83984,-1.75768},
		{20.5791,-5.67871,-1.75768},
		{24.4707,-20.2852,-1.75768},
		{2.62988,-8.18555,-1.75768},
		{-3.33008,-13.8398,-1.75768},
		{-5.87891,-10.291,-1.75768},
		{-22.0908,4.43359,-1.75768},
		{-26.417,17.2725,-1.75768},
		{-15.1211,16.9443,-1.75768},
		{-0.407227,27.873,-3.89596},
		{-11.7822,28.2432,-3.89596},
		{-14.542,6.79102,-5.52303},
		{-15.2705,17.4814,-5.52303}};
};

class land_shopping_sab2: Superstore {
	lootChance = 0.3;
	lootPos[] = {
		{12.0645,-24.2559,-3.66148},
		{9.24609,-21.6592,-3.66148},
		{7.26953,-19.5176,-3.66148},
		{0.694336,-19.5039,-3.66148},
		{-7.35156,-19.6172,-3.66148},
		{-8.61719,-21.5732,-3.66148},
		{-11.8691,-24.2324,-3.66148},
		{-5.72559,-24.0039,-3.66148},
		{-2.16309,-17.3877,-3.66148},
		{1.01074,-15.1289,-3.66148},
		{10.4287,-15.0889,-3.66148},
		{11.7324,-18.9287,-3.66148},
		{9.4873,-10.7725,-3.66148},
		{10.2363,-8.48047,-3.66148},
		{-7.06836,-10.6455,-3.66148},
		{-10.5547,-13.0273,-3.66148},
		{-11.8945,-16.4619,-3.66148},
		{-7.62695,-15.1455,-3.66148},
		{-6.99121,-8.10254,-3.66148},
		{-11.8018,-9.00098,-3.66148},
		{-11.7734,5.7998,-3.66148},
		{-10.5938,10.3682,-3.66148},
		{-7.46777,12.5869,-3.66148},
		{-11.9561,14.5635,-3.66148},
		{-9.95898,16.9697,-3.66148},
		{-7.94238,19.2363,-3.66148},
		{-10.2939,21.3496,-3.66148},
		{-11.8369,23.917,-3.66148},
		{-2.34863,23.7939,-3.66148},
		{-0.318359,21.5,-3.66148},
		{-2.35645,16.9541,-3.66148},
		{0.292969,14.7881,-3.66148},
		{6.9668,12.5928,-3.66148},
		{9.43945,10.4824,-3.66148},
		{9.33984,16.875,-3.66148},
		{6.46191,19.2637,-3.66148},
		{-0.428711,19.2891,-3.66148},
		{0.0410156,23.6914,-3.66148},
		{11.7842,23.7246,-3.66148},
		{11.0313,15.0938,-3.66148},
		{11.8086,5.98145,-3.66148},
		{6.4375,14.9834,-3.66148}};
	lootPosSmall[] = {
		{-9.89453,5.51465,-3.66148},
		{-0.229492,7.29492,-3.66148},
		{5.87305,5.40723,-3.66148},
		{8.5957,5.37305,-3.66148},
		{-8.62402,-5.69727,-3.66148},
		{-11.4727,-5.62988,-3.66148},
		{-0.388672,-7.70801,-3.66148},
		{6.23242,-5.61328,-3.66148},
		{7.54395,-6.71289,-3.08148},
		{9.6582,-6.70801,-3.08148},
		{-7.88477,-6.66699,-3.08148},
		{-9.0791,-6.55469,-3.08148},
		{-7.30566,6.4248,-3.08148},
		{4.8877,6.39746,-3.08148},
		{6.83691,6.38086,-3.08148},
		{9.36133,6.40723,-3.08148},
		{-1.58594,7.34863,-3.15148},
		{0.637695,8.04004,-3.15148},
		{-1.74512,-7.89844,-3.15148},
		{0.402344,-8.60449,-3.15148},
		{0.5,-8.80176,-2.66148},
		{0.59375,-7.17578,-2.66148},
		{-1.71191,6.54883,-2.66148},
		{-1.6123,8.16016,-2.66148},
		{0.839844,7.17969,-2.66148},
		{-7.87598,9.30566,-2.84148},
		{-9.33496,11.5684,-2.84148},
		{-10.1094,11.584,-2.84148},
		{-10.8721,13.5967,-2.84148},
		{-8.68457,13.5996,-2.84148},
		{-8.62891,15.959,-2.84148},
		{-10.8115,17.9814,-2.84148},
		{-7.90918,17.958,-2.84148},
		{-8.57813,20.3145,-2.84148},
		{-9.25781,20.3008,-2.84148},
		{-7.79199,22.3994,-2.84148},
		{-1.50684,22.4092,-2.84148},
		{-1.57324,20.377,-2.84148},
		{-2.15332,20.4678,-2.84148},
		{-1.54883,15.9268,-2.84148},
		{-1.39648,13.582,-2.84148},
		{0.761719,13.6523,-2.84148},
		{9.07715,20.373,-2.84148},
		{8.35449,20.2783,-2.84148},
		{6.8125,20.3633,-2.84148},
		{6.11426,17.9941,-2.84148},
		{9.83594,15.9541,-2.84148},
		{9,15.9219,-2.84148},
		{7.56348,15.9893,-2.84148},
		{8.5498,13.6318,-2.84148},
		{9.7334,11.6006,-2.84148},
		{8.14258,11.6406,-2.84148},
		{6.1123,11.5254,-2.84148},
		{8.56934,-11.8203,-2.84148},
		{8.51172,-16.1494,-2.84148},
		{9.92773,-18.5635,-2.84148},
		{8.4248,-20.585,-2.84148},
		{6.82324,-22.7422,-2.84148},
		{-1.58008,-22.7539,-2.84148},
		{-0.447266,-22.8027,-2.84148},
		{-1.97363,-20.5801,-2.84148},
		{-0.527344,-20.5889,-2.84148},
		{0.77832,-20.5576,-2.84148},
		{1.03711,-18.5098,-2.84148},
		{-2.01172,-16.165,-2.84148},
		{0.22168,-14.125,-2.84148},
		{-1.32422,-14.1582,-2.84148},
		{-6.77246,-9.75195,-2.84148},
		{-10.5684,-11.791,-2.84148},
		{-9.08203,-11.7246,-2.84148},
		{-7.00195,-14.1328,-2.84148},
		{-10.6543,-16.1855,-2.84148},
		{-8.42773,-16.166,-2.84148},
		{-9.91895,-18.4775,-2.84148},
		{-10.6318,-22.7012,-2.84148},
		{-7.63867,-22.7334,-2.84148}};
};

class land_nasypka: Industrial { //metal funnel
	lootPos[] = {
		{-1.46045,-0.168945,6.56824}};
	lootPosSmall[] = {
		{-1.58691,0.717285,6.56824}};
	zedPos[] = {{1.50659,-0.027832,-5.55527}};
};

class land_bus_depo_geo1: Workshop {
	lootChance = 0.3;
	lootPos[] = {
		{12.0186,-28.6318,-11.4182},
		{11.8145,-14.2285,-11.4182},
		{12.0166,-8.44531,-11.4182},
		{10.416,14.9063,-11.4182},
		{11.6387,35.9648,-11.4182},
		{4.68945,35.7861,-11.4182},
		{1.36035,27.4053,-11.4182},
		{-6.48828,27.6865,-11.4182},
		{-6.15234,17.3291,-11.4182},
		{-6.17383,5.12891,-11.4182},
		{-5.97852,-6.58691,-11.4182},
		{-4.28027,-17.457,-11.4182},
		{-6.31738,-28.0059,-11.4182},
		{0.273438,-27.6211,-11.4182}};
};
	
class land_bus_depo_geo3: Workshop {
	lootChance = 0.3;
	lootPos[] = {
		{35.3701,13.2041,-5.01495},
		{26.0781,11.8965,-5.01495},
		{25.3555,0.882813,-5.01495},
		{24.7852,6.53613,-5.01495},
		{24.9189,-4.85938,-5.01495},
		{24.9063,-9.81836,-5.01495},
		{19.1973,-9.86914,-5.01495},
		{18.918,-4.95215,-5.01495},
		{18.8271,0.879883,-5.01495},
		{18.8545,6.5957,-5.01495},
		{18.4893,-15.3633,-5.01495},
		{25.9863,-15.209,-5.01495},
		{34.7832,-18.0898,-5.01495},
		{34.7461,-10.8926,-5.01495},
		{3.16797,-4.77148,-5.01495},
		{3.28125,0.859375,-5.01495},
		{3.04004,6.40039,-5.01495},
		{-3.125,6.45313,-5.01495},
		{-3.28516,1.0332,-5.01495},
		{-2.9502,-4.64453,-5.01495},
		{-4.41895,-17.3877,-5.01495},
		{3.00879,-11.793,-5.01495},
		{-26.2402,-9.25781,-5.01495},
		{-34.6729,-17.9121,-5.01495},
		{-19.8555,-15.1045,-5.01495},
		{-20.8486,3.95508,-5.01495},
		{-34.8984,12.208,-5.01495}};
};