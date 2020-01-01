# ****************************************************************************
# *  File    : $Workfile:   $       $Revision:  $
# *--------------------------------------------------------------------------*
# *  Scope   :   Description of the library to generate                     *
# *                                                                          *
# *                                                                          *
# ****************************************************************************




#------------------------------------------------------------------------------
#	Description des variables propre ?la biblioth�que
#	Description of some variables owned by the library
#------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS		= lib
PATH_C +=\
  $(PATH_spinand)/src


PATH_H +=\
  $(PATH_spinand)/inc\
  $(PATH_spinand_hal)/inc\
  $(PATH_bdma)/inc\
  $(PATH_bdma)/pub\
  $(PATH_hal)bdma\inc

#------------------------------------------------------------------------------
#	Liste des fichiers sources de la biblioth�que ou de l'�xecutable ?g�n�rer
#	List of source files of the library or executable to generate
#------------------------------------------------------------------------------

SRC_C_LIST =\
  drv_spinand.c