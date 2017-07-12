#define COMPONENT curator
#define COMPONENT_BEAUTIFIED Curator
#include "\u\uksf\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#include "\u\uksf\addons\main\script_macros.hpp"

#define CURATOR_ICON "\A3\Ui_F_Curator\Data\Logos\arma3_zeus_icon_ca.paa"

#define MULTIPLAYER_ADMIN isMultiplayer && (ADMIN_OR_HOST)
#define CONDITION_LOGIN ((ADMIN_OR_HOST) || {!GVAR(curatorsLocked)}) && {isNull (getAssignedCuratorLogic player)} && {({isNull (getAssignedCuratorUnit _x)} count GVAR(curatorObjects)) > 0}
#define CONDITION_LOGOUT ((ADMIN_OR_HOST) || {!GVAR(curatorsLocked)}) && {!isNull (getAssignedCuratorLogic player)} && {(getAssignedCuratorLogic player) in GVAR(curatorObjects)}
#define CONDITION_LOCK MULTIPLAYER_ADMIN && {!GVAR(curatorsLocked)}
#define CONDITION_UNLOCK MULTIPLAYER_ADMIN && {GVAR(curatorsLocked)}
#define CONDITION_KICKALL MULTIPLAYER_ADMIN && {({!(isNull (getAssignedCuratorUnit _x))} count GVAR(curatorObjects)) > 1}
