/*
    Author:
        Tim Beswick

    Description:
        Deploy land rover net.

    Parameter(s):
        0: Rover <OBJECT>
        1: Unit <OBJECT>
        2: Net <STRING>

    Return Value:
        None
*/
#include "script_component.hpp"

params ["_rover", "_unit", "_netType"];


if(count (nearestObjects [(position _rover), ["CamoNet_BLUFOR_big_F", "Land_CamoNetB_NATO_EP1"], 20]) > 0) exitWith {
    hint "There's already a net nearby! Use that one!"
};

success = {
    params ["_args"];
    _args params ["_rover", "_unit", "_netType"];
    _net = createVehicle [_netType, position _rover, [], 0, "CAN_COLLIDE"];
    _direction = direction _rover;
    _net setDir _direction + 180;
    _net allowDamage false;
    _rover setVariable [QGVAR(deployed), true, true];
    _rover setVariable [QGVAR(netObj), _net, true];
    [_unit, "", 2] call ace_common_fnc_doAnimation;
};

fail = {
    params ["_args"];
    _args params ["_rover", "_unit"];
    hint "Could not deploy net";
    [_unit, "", 2] call ace_common_fnc_doAnimation;
};

[_unit, "Acts_carFixingWheel", 1] call ace_common_fnc_doAnimation;
[15, [_rover, _unit, _netType], {call success}, {call fail}, "Deploying Net"] call ace_common_fnc_progressBar;
