#include "script_component.hpp"

if (hasInterface) then {
    [] call FUNC(setChannelNames);
};

// Air
INIT_RACKS("UKSF_Apache_AH1",CHANNELS_SQN_656,[]);
INIT_RACKS("CUP_C130J_Base",CHANNELS_SQN_617,[]);
INIT_RACKS("USAF_F35A",CHANNELS_SQN_617,[]);
INIT_RACKS("CUP_CH47F_base",CHANNELS_SQN_7,[]);
INIT_RACKS("UK3CB_BAF_Merlin_Base",CHANNELS_SQN_7,[]);
INIT_RACKS("UK3CB_BAF_Wildcat_Base",CHANNELS_SQN_7,[ARR_2("UK3CB_BAF_Wildcat_AH1_CAS_6A","UK3CB_BAF_Wildcat_AH1_CAS_8A")]);
INIT_RACKS("UK3CB_BAF_Wildcat_AH1_CAS_6A",CHANNELS_SQN_656,[]);
INIT_RACKS("UK3CB_BAF_Wildcat_AH1_CAS_8A",CHANNELS_SQN_656,[]);
INIT_RACKS("UKSF_Hemtt_Ammo",[ARR_2(40,48)],[]);
INIT_RACKS("UKSF_Hemtt_Fuel",[ARR_2(40,48)],[]);
INIT_RACKS("UKSF_Hemtt_Repair",[ARR_2(40,48)],[]);

// Ground
