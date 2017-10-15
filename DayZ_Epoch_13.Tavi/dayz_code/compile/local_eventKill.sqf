
//[unit, selectionName, damage, source, projectile]
//will only run when local to the created object
//record any key hits to the required selection
private["_killer","_humanity","_coins"];

_array = _this select 0;
_zed = _array select 0;
_killer = _array select 1;
_type = _this select 1;

if (local _zed) then {
	_kills = _killer getVariable[_type,0];
	_killer setVariable[_type,(_kills + 1),true];

	//increase players humanity when zed killed
	_humanity = _killer getVariable["humanity",0];
	_humanity = _humanity + 5;
	_killer setVariable["humanity",_humanity,true];
	
	//add coins to player for zed kills
	_coins = _killer getVariable [Z_moneyVariable,0];
	_coins = _coins + 150;
	_killer setVariable[Z_moneyVariable,_coins,true];
};