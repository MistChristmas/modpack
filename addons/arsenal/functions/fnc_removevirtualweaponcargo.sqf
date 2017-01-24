/*
    Author: 
        Karel Moricky, edited by Tim Beswick for UKSF usage

    Description:
        Remove virtual weapons from an object (e.g., ammo box).
        Virtual items can be selected in the Arsenal.

    Parameter(s):
        0: OBJECT - objct from which weapons will be removed
        1: STRING or ARRAY of STRINGs - weapon class(es) to be removed
        2 (Optional): BOOL - true to remove weapons globally (default: false)

    Returns:
        ARRAY of ARRAYs - all virtual items within the object's space in format [<items>,<weapons>,<magazines>,<backpacks>]
*/
#include "script_component.hpp"

private ["_object","_classes","_isGlobal"];
_object = _this param [0,missionnamespace,[missionnamespace,objnull]];
_classes = _this param [1,[],["",true,[]]];
_isGlobal = _this param [2,false,[false]];
[_object,_classes,_isGlobal,true,-1,1] call FUNC(addVirtualItemCargo);