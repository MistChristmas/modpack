// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX u
#define PREFIX uksf

#define MAJOR 4
#define MINOR 1
#define PATCHLVL 0

#define VERSION MAJOR.MINOR.PATCHLVL
#define VERSION_AR MAJOR,MINOR,PATCHLVL

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.64
#define REQUIRED_CBA_VERSION {3,1,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(UKSF - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(UKSF - COMPONENT)
#endif
