#ifndef __MMI_PICPREVIEWAPP_ID_H__
#define __MMI_PICPREVIEWAPP_ID_H__

enum
{
    PICPREVIEWAPP_WND_MAIN = WND_ID_APP_BASE,    
};

enum
{
	PICPREVIEW_BGWIDGET=APP_WDG_START,
	PICPREVIEW_BTNBGWIDGET,
	PICPREVIEW_GLFOTOLISTPAGEWIDGET,
	PICPREVIEW_GRIDBUTTONWIDGET,
	PICPREVIEW_CAMVUTTONWIDGET,
	PICPREVIEW_SLIDESHOWBUTTONWIDGET,
	PICPREVIEW_BACKBUTTONWIDGET,
	PICPREVIEW_INFOTEXTWIDGET,
	PICPREVIEW_INFOIMAGEWIDGET,
    PICPREVIEW_LOADINGWIDGET,
 	PICPREVIEW_FADOUT_BG_WIDGET,
 	PICPREVIEW_FILE_NAME_TEXT_WIDGET,
 	PICPREVIEW_FILE_NUM_TEXT_WIDGET,
};

enum
{
	PICPREVIEW_NO_ITEM_MODE,
	PICPREVIEW_3DLOADER_MODE,
};
typedef u16 PicPreviewWndMode;

#endif //__MMI_PICPREVIEWAPP_ID_H__
