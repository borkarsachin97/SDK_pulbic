#------------------------------------------------------------------------------
#	Description des variables propre � la biblioth�que
#	Description of some variables owned by the library
#------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS		= lib
PATH_C +=\
    $(PATH_abb_mdl)/src
    
PATH_H+=\
$(PATH_abb_mdl)/inc\
$(PATH_adc)/pub\
$(PATH_abb_mdl)/pub\
$(PATH_audio_drv)/pub

#------------------------------------------------------------------------------
#	Liste des fichiers sources de la biblioth�que ou de l'�xecutable � g�n�rer
#	List of source files of the library or executable to generate
#------------------------------------------------------------------------------

SRC_C_LIST = \
    abi_headers_abb_mdl.c \
    mdl_abb_task.c



