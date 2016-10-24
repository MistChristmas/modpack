#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "UKSF_B_Medic",
			"UKSF_B_ATC",
			"UK3CB_BAF_Soldier_MTP_1para_LongSleeve_base",
			"UK3CB_BAF_Soldier_MTP_1para_ShortSleeve_base",
			"UK3CB_BAF_Soldier_MTP_CSMR_LongSleeve_base",
			"UK3CB_BAF_Soldier_MTP_CSMR_ShortSleeve_base",
			"UK3CB_BAF_Soldier_MTP_Path_LongSleeve_base",
			"UK3CB_BAF_Soldier_MTP_Path_ShortSleeve_base",
			"UK3CB_BAF_Soldier_MTP_Sig_LongSleeve_base",
			"UK3CB_BAF_Soldier_MTP_Sig_ShortSleeve_base",
            "UK3CB_BAF_HeliPilot_RAF_base",
			"UKSF_Soldier_ATC_base",
			"UKSF_S_Empty",
			"UKSF_S_Ammo",
			"UKSF_S_Medic",
			"UKSF_S_AmmoMedic",
			"UKSF_S_Radios",
			"UKSF_Target_Nopopup",
            "GENFOR_B_R",
			"GENFOR_B_RNOMAG",
			"GENFOR_B_Mark",
			"GENFOR_B_Med",
			"GENFOR_B_MG",
			"GENFOR_B_AA",
			"GENFOR_B_AT7",
			"GENFOR_B_AT",
			"GENFOR_B_Sl",
			"GENFOR_B_Radio",
			"GENFOR_B_P_R",
			"GENFOR_B_P_RNOMAG",
			"GENFOR_B_P_B",
			"GENFOR_B_P_MG",
			"GENFOR_B_P_AT",
			"GENFOR_B_P_AA",
			"GENFOR_B_SF_R",
			"GENFOR_B_SF_RNOMAG",
			"GENFOR_B_SF_MG",
			"GENFOR_B_SF_AT",
			"GENFOR_B_SF_P",
			"Inegal_B_F",
			"Inegal_B_C",
			"Inegal_B_Med",
			"Inegal_B_MG",
			"Inegal_B_Mark",
			"Inegal_B_AA",
			"Inegal_B_AT_Eryx",
			"Inegal_B_Sniper",
			"Inegal_B_FAC",
			"Inegal_B_FDF_B",
			"Inegal_B_FDF_A",
			"Inegal_B_D_Specialist",
			"Inegal_B_D_Commander",
			"Inegal_B_D_Surgeon",
			"Inegal_B_D_Brute",
			"Inegal_B_D_Sharpshooter",
			"Inegal_B_D_Arsonist",
			"Inegal_B_D_Sentinel",
			"Inegal_B_D_Assassin",
			"Inegal_B_R_C",
			"Inegal_B_R_L",
			"Inegal_B_R_R",		
			"Laraka_B_PKM",
			"Laraka_B_RPG",
			"Laraka_B_AA"
        };
        weapons[] = {
            "UK3CB_BAF_U_CombatUniform_MTP_1Para",
            "UK3CB_BAF_U_CombatUniform_MTP_1Para_ShortSleeve",
            "UK3CB_BAF_U_CombatUniform_MTP_CSMR",
            "UK3CB_BAF_U_CombatUniform_MTP_CSMR_ShortSleeve",
            "UK3CB_BAF_U_CombatUniform_MTP_Path",
            "UK3CB_BAF_U_CombatUniform_MTP_Path_ShortSleeve",
            "UK3CB_BAF_U_CombatUniform_MTP_Sig",
            "UK3CB_BAF_U_CombatUniform_MTP_Sig_ShortSleeve",
            "UK3CB_BAF_U_HeliPilotCoveralls_RAF",
			"UKSF_U_ATC",
            "UKSF_H_RAFBeret",
            "UKSF_H_AACBeret",
            "UKSF_V_Pilot",
            "UKSF_V_Flight",
			"ACE_NVG_Pilot",
            "rhs_weap_ak74m_camo_npz_acog",
			"rhs_weap_ak74m_gp25_npz_acog",
			"arifle_mas_m4_acog",
			"arifle_mas_m4c_holo",
			"rhs_weap_ak105_npz_acog",
			"rhs_weap_ak103_pso",
			"arifle_mas_m4_gl_acog",
			"arifle_mas_fal",
			"arifle_mas_lee",
			"srifle_DMR_06_camo_F_dms",
			"rhs_weap_ak74m_Base_F",
			"rhs_pkp_base",
			"rhs_weap_rpg7",
			"R3F_Famas_G2_HG_Aimpoint",
			"R3F_Famas_G2_M203_Aimpoint",
			"arifle_SPAR_01_GL_blk_F_erco",
			"R3F_Famas_G2_Aimpoint",
			"R3F_Minimi_762_Aimpoint",
			"R3F_FRF2_DES_Zeiss",
			"R3F_PGM_Hecate_II_DES_Zeiss",
			"R3F_PGM_Hecate_II_POLY_J10",
			"arifle_SPAR_01_blk_F_eotech_lamp_bipod",
			"arifle_SPAR_01_GL_blk_F_eotech",
			"arifle_SPAR_03_blk_F_dms_bipod",
			"arifle_SPAR_01_blk_F_erco_laser_bipod_suppressor",
			"arifle_SPAR_01_GL_blk_F_erco_laser_suppressor",
			"arifle_SPAR_03_blk_F_dms_bipod_suppressor_laser",
			"R3F_PGM_Hecate_II_POLY_Felin",
			"R3F_Famas_F1_M203_Eotech",
			"R3F_Famas_F1_HG_Eotech",
			"R3F_MP5A5_Eotech",
			"SP_Modular2_Black",
			"Inegal_Diablerie_Helmet"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uksf_main", 
            "uksf_common",
            "uk3cb_baf_weapons_SmallArms",
            "UK3CB_BAF_Weapons_Accessories",
            "UK3CB_BAF_Equipment",
            "RKSL_LDS",
            "rhs_c_weapons",
            "mas_weapons_m4",
			"r3f_armes_c",
			"R3F_Acc",
			"R3F_Armes"
        };
        author = QUOTE(UKSF);
        authors[] = {"Beswick.T"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgImprecision.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"