/*
    Author:
        Tim Beswick

    Description:
        Forces server shutdown after saving data

    Parameter(s):
        None

    Return Value:
        None
*/
#include "script_component.hpp"

if (!isServer) exitWith {
    [QGVAR(shutdown)] call CBA_fnc_serverEvent;
};
LOG("Shutdown");

[{
    params ["", "_idPFH"];

    private _players = [] call CBA_fnc_players;
    if (count _players == 0) exitWith {
        [_idPFH] call CBA_fnc_removePerFrameHandler;
        [] call FUNC(saveVehicleData);
        profileNamespace setVariable [GVAR(key), [GVAR(dataNamespace)] call CBA_fnc_serializeNamespace];
        [{
            SERVER_COMMAND serverCommand "#shutdown";
        }, nil, 2] call CBA_fnc_waitAndExecute;
    };
    SERVER_COMMAND serverCommand (format ["#kick %1", _players#0]);
}, 2, []] call CBA_fnc_addPerFrameHandler;