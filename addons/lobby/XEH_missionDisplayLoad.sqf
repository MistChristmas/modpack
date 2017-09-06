// Called from curator XEH_missionDisplayLoad
#include "script_component.hpp"

private _unitNameConfigs = configFile >> "CfgUnitNames";
private _unitConfig = (getArray (_unitNameConfigs >> (roleDescription player)));
private _class = _unitConfig select 2;
private _groupName = _unitConfig select 0;
private _group = (GVAR(unitGroups) select {(groupId _x) isEqualTo _groupName}) select 0;
if (isNil "_group") then {
    _group = createGroup west;
};
private _unit = _group createUnit [_class, [-1000, -1000, 0], [], 0, "CAN_COLLIDE"];
private _oldUnit = player;
startLoadingScreen ["Loading"];
selectPlayer _unit;
deleteVehicle _oldUnit;
forceRespawn player;
[] spawn {
    uiSleep 2;
    endLoadingScreen;
};
