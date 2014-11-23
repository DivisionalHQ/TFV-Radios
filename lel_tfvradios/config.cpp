#include "\lel_tfvradios\description.h"

class DefaultEventhandlers;
class CfgPatches
{
	class loberg_tfv_radios
	{
		units[] = {"tfv_tf_rt1523g","tfv_tf_anarc210"};
		weapons[] = {"tfv_tf_anprc152","tfv_tf_rf7800str"};
		requiredVersion = 1.0;
		requiredAddons[] = {"task_force_radio_items"};
		author[] = {"Loberg"};
		version = 0.1;
		versionStr = "0.1";
	};
};

#include "\task_force_radio_items\radio_ids.hpp"
#include "\task_force_radio\CfgFunctions.h"

class CfgVehicles {
	
	class tf_rt1523g;
		
		class tfv_tf_rt1523g: tf_rt1523g
	{
		displayName = "TFV RT-1523G (ASIP)";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		scope = 2;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "lel_rt1523g_radio_dialog";
		maximumLoad = 50;
		mass = 80;
		scopeCurator = 2;
		tf_subtype = "digital_lr";
	};
	
		class tf_anarc210;
		
		class tfv_tf_anarc210: tf_anarc210
	{
		displayName = "TFV AN/ARC-210";
		descriptionShort = "TFV AN/ARC-210 airborne radio 40km";
		scope = 2;
		scopeCurator = 2;
		maximumLoad = 20;
		mass = 160;		
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "lel_anarc210_radio_dialog";
		tf_subtype = "airborne";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
	};
	
	
};	


class CfgWeapons
{
	class tf_anprc152; 

		class tfv_tf_anprc152: tf_anprc152
	{
		displayName = "TFV AN/PRC-152";
		descriptionShort = "AN/PRC-152 5km";
		scope=2;
		scopeCurator = 2;
		icon="iconBackpack";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "lel_anprc152_dialog";
		tf_subtype = "digital";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_prototype = 1;
		tf_range = 5000;
		tf_parent = "tf_anprc152";	
		tf_additional_channel = 1;		
	};
	
	class tf_rf7800str; 

		class tfv_tf_rf7800str: tf_rf7800str
	{
		displayName = "TFV RF-7800S-TR";
		descriptionShort = "RF-7800S-TR rifleman radio 2km";
		scope=2;
		scopeCurator = 2;
		icon="iconBackpack";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "lel_rf7800str_dialog";
		tf_subtype = "digital";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_prototype = 1;
		tf_range = 2000;
		tf_parent = "tf_rf7800str";
		tf_additional_channel = 0;
	};
	
	
TF_RADIO_IDS(tfv_tf_anprc152,TFV AN/PRC-152)
TF_RADIO_IDS(tfv_tf_rf7800str,TFV RF-7800S-TR)
};