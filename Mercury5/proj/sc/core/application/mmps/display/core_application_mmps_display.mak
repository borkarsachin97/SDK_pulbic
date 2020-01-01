#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
    $(PATH_core_application_mmps_display)/src\

PATH_H +=\
		$(PATH_core_application_component)/inc\
		$(PATH_core_application_mmps_audio)/inc\
		$(PATH_core_application_mmps_fs)/inc\
		$(PATH_core_application_mmpd_audio)/inc\
		$(PATH_core_application_mmps_display)/inc\
		$(PATH_core_application_mmpd_display)/inc\
		$(PATH_core_application_mmpd_vid_play)/inc\
		$(PATH_core_application_mmps_system)/inc\
		$(PATH_core_application_mmps_dsc)/inc\
		$(PATH_core_application_mmps_vid_recd)/inc\
		$(PATH_core_application_mmps_vid_play)/inc\
		$(PATH_core_application_mmpd_system)/inc\
		$(PATH_core_application_mmpd_img_pipe)/inc\
		$(PATH_core_application_mmpd_fs)/inc\
		$(PATH_core_include_display)/\
		$(PATH_core_include_misc)/\
		$(PATH_core_include_img_pipe)\
		$(PATH_core_include_application)/\
		$(PATH_project_Dvr_CarDV_SDK_cfg_comp)/inc\
		$(PATH_project_Dvr_CarDV_SDK_cfg_core)/inc\
		$(PATH_project_Dvr_CarDV_SDK_cfg_fs)/inc\
		$(PATH_project_Dvr_CarDV_SDK_cfg_snr)/inc\
		$(PATH_core_driver_bsp)/inc\
		$(PATH_core_driver_common)/inc\
		$(PATH_core_driver_display)/inc\
		$(PATH_core_driver_img_pipe)/inc\
		$(PATH_core_system_comp_ctl)/inc\
		$(PATH_core_system_net_api)/inc\
		$(PATH_core_system_os)/inc\
		$(PATH_core_system_host_if)/inc\
		$(PATH_core_system_vid_play)/inc/parser\
		$(PATH_core_driver_ccir)/inc\
		$(PATH_core_application_mmps_fs)/inc\
		$(PATH_core_system_vid_play)/inc\
		$(PATH_core_utility)/inc\
		$(PATH_core_lib_fs)/inc\
		$(PATH_core_lib_gui_inc_Core)\
		$(PATH_core_system_fs)/inc\
		$(PATH_core_system_sensor)/inc\
#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST +=\
		mmps_display.c