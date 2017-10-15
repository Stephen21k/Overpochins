publicVariable "owner_B1";
publicVariable "owner_B2";
publicVariable "owner_B3";
publicVariable "owner_H1";
publicVariable "owner_H2";
publicVariable "owner_H3";
publicVariable "owner_SG";
publicVariable "owner_LG";
publicVariable "owner_KING";
publicVariable "owner_SH";
/*
_query = format["SELECT id, classname FROM garage WHERE PlayerUID='%1'",_playerUID];
_result = [_query, 2, true] call fn_asyncCall;
PVDZE_queryGarageVehicleResult = _result;
*/


_query1 = format["SELECT owner_H1 FROM origins"];
_query2 = format["SELECT owner_H2 FROM origins"];
_query3 = format["SELECT owner_H3 FROM origins"];
_query4 = format["SELECT owner_B1 FROM origins"];
_query5 = format["SELECT owner_B2 FROM origins"];
_query6 = format["SELECT owner_B3 FROM origins"];
_query7 = format["SELECT owner_SG FROM origins"];
_query8 = format["SELECT owner_LG FROM origins"];
_query9 = format["SELECT owner_KING FROM origins"];
_query10 = format["SELECT owner_SH FROM origins"];

owner_H1 = [_query1, 2, true] call fn_asyncCall2;
owner_H2 = [_query2, 2, true] call fn_asyncCall2;
owner_H3 = [_query3, 2, true] call fn_asyncCall2;
owner_B1 = [_query4, 2, true] call fn_asyncCall2;
owner_B2 = [_query5, 2, true] call fn_asyncCall2;
owner_B3 = [_query6, 2, true] call fn_asyncCall2;
owner_SG = [_query7, 2, true] call fn_asyncCall2;
owner_LG = [_query8, 2, true] call fn_asyncCall2;
owner_KING = [_query9, 2, true] call fn_asyncCall2;
owner_SH = [_query10, 2, true] call fn_asyncCall2;


diag_log (format["HOUSE SERVER: Owners Are: B1 %1 B2 %2 B3 %3 H1 %4 H2 %5 H3 %6 SG %7 LG %8 KING %9 SH %10", owner_B1, owner_B2, owner_B3, owner_H1, owner_H2, owner_H3, owner_SG, owner_LG, owner_KING,owner_SH]);
"OriginsLockUnlock" addPublicVariableEventHandler 
{
	originsObject = _this select 1 select 0;
	originsObjectType = _this select 1 select 1;
	originsState = _this select 1 select 2;
	originsPlayerUid = _this select 1 select 3;
	originsCombination = _this select 1 select 4;
	[originsObject,originsObjectType,originsState,originsPlayerUid,originsCombination] execVM "\z\addons\dayz_server\origins\server_LockUnlockOrigins.sqf";
};