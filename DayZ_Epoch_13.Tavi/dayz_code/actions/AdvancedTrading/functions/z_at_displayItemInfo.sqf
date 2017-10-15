private ["_item","_picture","_class","_display","_buyPrice","_sellPrice","_formattedText","_buyCurrency","_sellCurrency","_compatible","_weapon","_attach","_config","_compatibleText","_type","_text","_displayText"];
#include "defines.hpp"

_item = _this select 0;
_picture = _item select 4;
_class = _item select 0;
_display = _item select 3;
_buyPrice = 0;
_sellPrice = 0;

if (Z_Selling) then {
	_buyPrice = _item select 6;
	_buyCurrency = _item select 8;
	_sellPrice = _item select 2;
	_sellCurrency = _item select 7;
} else {
	_buyPrice = _item select 2;
	_buyCurrency = _item select 7;
	_sellPrice = _item select 6;
	_sellCurrency = _item select 8;
};

_compatible = [];
if (["Attachment",_class] call fnc_inString) then {
	_config = configFile >> "CfgWeapons";

	for "_i" from 0 to (count _config)-1 do {
		_weapon = _config select _i;
		if (isClass _weapon && {isClass (_weapon >> "Attachments")}) then {
			for "_i" from 0 to (count (_weapon >> "Attachments"))-1 do {
				_attach = (_weapon >> "Attachments") select _i;
				_type = configName _attach;
				if (_class == _type) exitWith {
					_text = getText (_weapon >> "displayName");
					if (!(_text in _compatible) && (!(isClass (_weapon >> "ItemActions")) or {count (_weapon >> "ItemActions") < 1})) then {
						_compatible set [count _compatible,_text];
					};
				};
			};
		};
	};
};

_compatibleText = "";
{
	if (_forEachIndex > 0) then {
		_compatibleText = _compatibleText + ", " + _x;
	} else {
		_compatibleText = _compatibleText + _x;
	};
} forEach _compatible;


switch (_class) do {
	case 'ItemTrashPaperMusic': {
		_display = 'Bed (Spawn Point)';
		_displayText = 'This allows you to build a spawn point at your base where you can spawn after death.';
		_picture = '\dayz_equip\textures\equip_tentbag_ca.paa';
	};
	case 'ItemTrashPaper': {
		_display = 'Vehicle Garage';
		_displayText = 'This allows you to build a virtual garage at your base.';
		_picture = getText(configFile >> _type >> _classname >> 'picture');
	};
	case 'ItemCards': {
		_display = 'Vehicle Garage Spawn Point';
		_displayText = 'This allows you to build a virtual garage spawn point at your base.';
		_picture = getText(configFile >> _type >> _classname >> 'picture');
	};
	case 'ItemSodaSmashtEmpty': {
		_display = 'Bandit Level 1 House';
		_displayText = 'You need -5,000 humanity to build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = 'origins\killb.paa';
	};
	case 'ItemSodaDrwasteEmpty': {
		_display = 'Bandit House lvl 2';
		_displayText = 'You need -15,000 humanity to build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = 'origins\killb.paa';
	};
	case 'ItemSodaLemonadeEmpty': {
		_display = 'Bandit House lvl 3';
		_displayText = 'You need -25,000 humanity to build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = 'origins\killb.paa';
	};
	case 'ItemSodaMtngreenEmpty': {
		_display = 'Hero House lvl 1';
		_displayText = 'You need 5,000 humanity to build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = 'origins\killh.paa';
	};
	case 'ItemSodaR4z0rEmpty': {
		_display = 'Hero House lvl 2';
		_displayText = 'You need 15,000 humanity to build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = 'origins\killh.paa';
	};
	case 'ItemSodaClaysEmpty': {
		_display = 'Hero House lvl 3';
		_displayText = 'You need 25,000 humanity to build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = 'origins\killh.paa';
	};
	
	case 'ItemSodaLvgEmpty': {
		_display = 'Small Origins Garage';
		_displayText = 'You need lvl 1 house before you can build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = getText(configFile >> _type >> _classname >> 'picture');
	};	
	case 'ItemSodaMzlyEmpty': {
		_display = 'Large Origins Garage';
		_displayText = 'You need lvl 3 house before you can build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = getText(configFile >> _type >> _classname >> 'picture');
	};	
	case 'ItemSodaRabbitEmpty': {
		_display = 'Stronghold';
		_displayText = 'You need emerald, sledgehammer and lvl 3 house before you can build this, Gear Dose Not Save After Restart, As A Temp Solution Use Vaults To Save/Store Gear.';
		_picture = getText(configFile >> _type >> _classname >> 'picture');
	};	
	case 'ItemSodaRbull': {
		_display = 'FastTravel';
		_displayText = 'This allows you to Fast Travel.';
		_picture = getText(configFile >> _type >> _classname >> 'picture');
	};

	
	default {
	_displayText = getText(configFile >> "CfgMagazines" >> _class >> "descriptionShort");
	};
	};
if (Z_SingleCurrency) then {
	_formattedText = format [
		"<img image='%1'  size='3' align='center'/><br />" +
		"<t color='#33BFFF' size='0.7'>%8: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%9: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%6 %7</t><br />" +
		"<t color='#33BFFF' size='0.7'>%10: </t><t color='#ffffff' size='0.7'>%5 %12</t><br />",
		_picture,
		_display, // #2 Name
		_class, // #3 Classe
		'lazy',
		//if (_sellPrice >= 0) then {[_sellPrice] call BIS_fnc_numberText;} else {"";},
		if (_sellPrice >= 9999999) then {"UNBUYABLE HERE";} else { if (_sellPrice >= 0) then {[_sellPrice] call BIS_fnc_numberText;} else {"";};}, // #5
		if (_buyPrice >= 9999999) then {"UNBUYABLE HERE";} else { if (_buyPrice >= 0) then {[_buyPrice] call BIS_fnc_numberText;} else {"";}}, // #6
		//CurrencyName,
		if (_buyPrice >= 9999999) then {"";} else {CurrencyName;}, // #7
		localize "STR_EPOCH_NAME", // #8
		localize "STR_EPOCH_CLASS",// #9
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291",
		if (_sellPrice >= 9999999) then {"";} else {CurrencyName;} // #12
	];
} else {
	_picSell = "";
	if (_sellPrice >= 0) then {
		_picSell = getText (configFile >> "CfgMagazines" >> _sellCurrency >> "picture");
		_sellCurrency = getText (configFile >> "CfgMagazines" >> _sellCurrency >> "displayName");
	};
	_picBuy = "";
	if (_buyPrice >= 0) then {
		_picBuy = getText (configFile >> "CfgMagazines" >> _buyCurrency >> "picture");
		_buyCurrency = getText (configFile >> "CfgMagazines" >> _buyCurrency >> "displayName");
	};
	_formattedText = format [
		"<img image='%1'  size='3' align='center'/><br />" +
		"<t color='#33BFFF' size='0.7'>%11: </t><t color='#ffffff' size='0.7'>%2</t><br />" +
		"<t color='#33BFFF' size='0.7'>%12: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
		"<t color='#33BFFF' size='0.7'>%14: </t><t color='#ffffff' size='0.7'>%6 <img image='%10' /> %9</t><br />" +
		"<t color='#33BFFF' size='0.7'>%13: </t><t color='#ffffff' size='0.7'>%5 <img image='%8' /> %7</t><br />",
		_picture,
		_display,
		_class,
		'lazy',
		if (_sellPrice >= 0) then {_sellPrice} else {"";},
		if (_buyPrice >= 0) then {_buyPrice} else {"";},
		_sellCurrency,
		_picSell,
		_buyCurrency,
		_picBuy,
		localize "STR_EPOCH_NAME",
		localize "STR_EPOCH_CLASS",
		localize "STR_EPOCH_PLAYER_292",
		localize "STR_EPOCH_PLAYER_291"
	];
};

if (count _compatible > 0) then {
	_formattedText = _formattedText + format [
		"<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br />"
		,localize "STR_EPOCH_COMPATIBLE",_compatibleText
	];
};

if (_displayText != "") then {
	_formattedText = _formattedText + format [
		"<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t>"
		,localize "STR_EPOCH_DESCRIPTION",_displayText
	];
};

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_ITEMINFO) ctrlSetStructuredText parseText _formattedText;
