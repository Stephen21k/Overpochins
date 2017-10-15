Military[] = { 
	{Loot_GROUP,		4,		pistols},
	{Loot_GROUP,		3,		militaryshotguns},
	{Loot_GROUP,		7,		sniperrifles},
	{Loot_GROUP,		4,		submachinegun},
	{Loot_GROUP,		7,		assaultrifles},
	{Loot_GROUP,		7,		machineguns},
	{Loot_GROUP,		3,		backpacks},
	{Loot_GROUP,		5,		militarybackpacks},
	{Loot_GROUP,		5,		militaryclothes},
	{Loot_GROUP,		5,		specialclothes},
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},		//545x39	AK74, RPK74
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},		//762x39	AK47
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxRU3, 5, 10},		//762x54r	SVD, PKM
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxUS, AmmoBoxEU1, 10, 20},		//556x45	G36, M249
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxUS, AmmoBoxEU2, 5, 10},		//762x51	FAL, M240
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxUS, AmmoBoxUS1, 10, 20},		//556x45	STANAG, M249
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxUS, AmmoBoxUS2, 5, 10},		//762x51	DMR, M240
	{Loot_PILE,			7,		AmmoMilitaryLow, 1, 3},
	{Loot_GROUP,		7,		AmmoMilitaryHigh},
	{Loot_GROUP,		3,		AttachmentsEast},
	{Loot_GROUP,		3,		militaryTools},	
	{Loot_PILE,			5,		MedicalLow, 1, 2}
	//{Loot_PILE,			10,		Trash, 1, 2}
};

MilitarySmall[] = {
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_MAGAZINE,		5,		ItemWaterBottleUnfilled},	
	{Loot_MAGAZINE,		3,		ItemWaterBottle},	
	//{Loot_MAGAZINE,		2,		ItemWaterBottleHerbal},		
	//{Loot_MAGAZINE,		4,		HandRoadFlare},
	//{Loot_MAGAZINE,		4,		HandChemGreen},
	//{Loot_MAGAZINE,		4,		HandChemBlue},
	//{Loot_MAGAZINE,		4,		HandChemRed},
	{Loot_TOOL,			2,		Binocular},
	{Loot_TOOL,			2,		ItemRadio},	
	{Loot_TOOL,			1,		ItemGPS},
	{Loot_TOOL,			2,		ItemMap},
	{Loot_GROUP,		2,		toolsKnife},
	{Loot_GROUP,		8,		AmmoMilitaryLow},
	{Loot_GROUP,		7,		AmmoMilitaryHigh},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		2,		AttachmentsEast},
	{Loot_GROUP,		2,		MedicalLow}
	//{Loot_GROUP,		4,		FilesMilitary},	
	//{Loot_GROUP,		8,		Trash}
};

MilitarySpecial[] = {
	{Loot_WEAPON,		0.2,	NVGoggles},
	{Loot_GROUP,		4,		pistolsSD},
	{Loot_GROUP,		1,		militaryshotguns},
	{Loot_GROUP,		7,		sniperrifles},
	{Loot_GROUP,		3,		submachinegunSD},
	{Loot_GROUP,		6,		assaultriflesSD},
	{Loot_GROUP,		7,		machineguns},
	{Loot_GROUP,		5,		militarybackpacks},
	{Loot_GROUP,		5,		machinegunammo},
	{Loot_GROUP,		5,		militaryclothes},
	{Loot_GROUP,		5,		specialclothes},
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},	//5.45x39
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxUS, AmmoBoxUS1, 7, 14},	//5.56x45
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxCZ1, 7, 14},	//7.62x39
	{Loot_CONTAINER,	0.5,		DZ_AmmoBoxRU, AmmoBoxCZ2, 2, 5},	//7.62x54R
//	{Loot_CONTAINER,	0.5,	DZ_AmmoBoxRU, AmmoBoxRU3, 3, 7},	//7.62x54R
//	{Loot_CONTAINER,	0.2,	DZ_ExplosivesBoxRU, AmmoBoxRU4, 5, 15},	//GP-25
//	{Loot_CONTAINER,	0.2,	DZ_ExplosivesBoxRU, AmmoBoxRU5, 3, 7},	//Grenades
	//{Loot_MAGAZINE,		0.1,	PipeBomb},
	{Loot_PILE,			5,		AmmoMilitaryLow, 1, 4},
	{Loot_PILE,			5,		AmmoMilitaryHigh, 1, 3},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		2,		AttachmentsEast},
	{Loot_GROUP,		3,		AttachmentsWest},
	{Loot_GROUP,		4,		militaryTools},		
	{Loot_PILE,			4,		MedicalLow, 1, 2}
	//{Loot_PILE,			9,		Trash, 1, 2}
};

MilitarySpecialSmall[] = {
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_MAGAZINE,		5,		ItemWaterBottleUnfilled},	
	{Loot_MAGAZINE,		3,		ItemWaterBottle},	
	//{Loot_MAGAZINE,		2,		ItemWaterBottleHerbal},		
	//{Loot_MAGAZINE,		4,		HandRoadFlare},
	//{Loot_MAGAZINE,		4,		HandChemGreen},
	//{Loot_MAGAZINE,		4,		HandChemBlue},
	//{Loot_MAGAZINE,		4,		HandChemRed},
	{Loot_WEAPON,		1,		NVGoggles},
	{Loot_TOOL,			1,		Binocular_Vector},
	{Loot_GROUP,		3,		toolsKnife},
	{Loot_TOOL,			2,		ItemGPS},
	{Loot_TOOL,			2,		ItemRadio},		
	{Loot_TOOL,			3,		ItemMap},
  	{Loot_GROUP,		15,		AmmoMilitaryLow},
	{Loot_GROUP,		20,		AmmoMilitaryHigh},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		4,		AttachmentsEast},
	{Loot_GROUP,		4,		AttachmentsWest},
	{Loot_GROUP,		4,		MedicalLow}
	//{Loot_GROUP,		4,		FilesMilitary},	
	//{Loot_GROUP,		8,		Trash}
};

MilitaryIndustrial[] = {
	{Loot_GROUP,		15,		Parts},
	{Loot_MAGAZINE,		5,		FoodMRE},
	{Loot_MAGAZINE,		3,		ItemFuelBarrelEmpty},
	{Loot_MAGAZINE,		2,		ItemGenerator},
	{Loot_MAGAZINE,		2,		fuel_pump_kit},
	{Loot_MAGAZINE,		3,		ItemWire},
	{Loot_MAGAZINE,		3,		ItemTankTrap},
	{Loot_MAGAZINE,		6,		ItemSandbag},
	{Loot_MAGAZINE,		1,		PartEngine},
	{Loot_GROUP,		5,		submachinegun},
	{Loot_GROUP,		4,		assaultrifles},
	{Loot_GROUP, 		15, 	Military},
	{Loot_GROUP,		4,		Generic}
};

MilitaryIndustrialSmall[] = {
	{Loot_GROUP, 		15, 	MilitarySmall},
	{Loot_TOOL,			2,		ItemRadio},		
	{Loot_GROUP, 		6, 		militaryTools},	
	{Loot_GROUP,		8,		GenericSmall}
};

Firestation[] = {
	{Loot_GROUP,		5,		toolsKnife},
	{Loot_WEAPON,		6,		ItemToolbox},
	{Loot_VEHICLE,		6,		WeaponHolder_ItemCrowbar},
	{Loot_VEHICLE,		8,		WeaponHolder_ItemHatchet},
	{Loot_WEAPON,		3,		ItemKeyKit},
	{Loot_TOOL,			5,		ItemFlashlight},
	{Loot_TOOL,			2,		ItemRadio},		
	{Loot_TOOL,			4,		ItemEtool},
	{Loot_TOOL,			4,		ItemCompass},
	{Loot_TOOL,			4,		ItemSledge},
	{Loot_MAGAZINE,		3,		ItemFuelBarrelEmpty},
	{Loot_MAGAZINE,		6,		PartGeneric},	
	{Loot_MAGAZINE,		2,		ItemGenerator},
	{Loot_MAGAZINE,		2,		fuel_pump_kit},
	{Loot_MAGAZINE,		3,		ItemWire},
	{Loot_MAGAZINE,		6,		ItemSandbag},
	{Loot_GROUP,		5,		Consumable},		
	{Loot_GROUP,		4,		tents},		
	//{Loot_GROUP,		4,		Chainsaws},	
	//{Loot_GROUP,		10,		Trash},	
	{Loot_GROUP,		9,		firestationGeneric},		
	{Loot_GROUP,		4,		MedicalBox}
};

FirestationSmall[] = {
	//{Loot_GROUP,		10,		Trash},	
	{Loot_GROUP,		4,		Consumable},	
	{Loot_GROUP,		4,		MedicalLow},		
	{Loot_TOOL,			2,		ItemGPS},
	{Loot_TOOL,			3,		ItemMap}
};

Policestation[] = {
	{Loot_GROUP,		5,		toolsKnife},
	{Loot_TOOL,			5,		ItemFlashlightRed},
	{Loot_WEAPON,		2,		ItemKeyKit},
	{Loot_TOOL,			2,		ItemGPS},
	{Loot_TOOL,			4,		ItemMap},	
	{Loot_TOOL,			4,		ItemFlashlight},
	{Loot_TOOL,			4,		ItemCompass},
	{Loot_GROUP,		4,		police},		
	{Loot_GROUP,		8,		Consumable}		
	//{Loot_GROUP,		10,		Trash}
};
