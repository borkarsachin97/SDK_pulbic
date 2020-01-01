#ifndef __MMI_MESSAGEEDITORAPP_ID_H__
#define __MMI_MESSAGEEDITORAPP_ID_H__
#define MAX_RECIPIENTS_LENGTH_BYTE_RS      20*2 // (SMI_MAX_ADDR_LEN) *2
typedef enum SeaWndId_e_
{
    SEA_WND_SMS_EDITOR_VIEW = WND_ID_APP_BASE,
    SEA_WND_SMS_EDITOROPTION_VIEW,
    SEA_WND_MMS_EDITOR_VIEW,
    SEA_WND_MMS_EDITOROPTION_VIEW,
    SEA_WND_MMS_SLIDELIST_VIEW,
    SEA_WND_MMS_OBJECTLIST_VIEW,
    SEA_WND_MMS_OBJECTLIST_OPTION_VIEW,
    SEA_WND_MMS_FULLEDITOR_VIEW,
    SEA_WND_MMS_FULLEDITOR_OPTION_VIEW,
    SEA_WND_RECIPIENT_VIEW,
    SEA_WND_RECIPIENT_OPTION_VIEW,
    SEA_WND_DUALSIM_MENU_VIEW,
#ifdef __SMS_MMI_SIM_MESSAGE_BOX_SUPPORT__
	SEA_WND_SMS_SELECTSIMMSG_MENU_VIEW,
#endif
}SeaWndId_e;

enum //MMS_EDITOR_VIEW_enum
{
    eMMS_TITLEAREA_TITLEWIDGET = APP_WDG_START ,
    eMMS_TITLEAREA_SIZE_TEXTWIDGET,
    eMMS_TITLEAREA_PAGESWITCH_PICKCONTAINER,
    eMMS_PAGESWITCH_LEFT_ARROW_BUTTONWDG,
    eMMS_PAGESWITCH_PAGE_TEXTWDG,
    eMMS_PAGESWITCH_RIGHT_ARROW_BUTTONWDG,
    eMMS_TITLEAREA_ATTACHMENT_ICON_IMAGEWDG,

    eMMS_EDITORAREA_SCROLLBARWDG,
    eMMS_EDITORAREA_VIEWPOINTWDG,
    eMMS_EDITORAREA_PROPCONTAINER,
    eMMS_EDITORAREA_TO_DISPLAY_WDG,  // start  order can not change
    eMMS_EDITORAREA_CC_DISPLAY_WDG,
    eMMS_EDITORAREA_BCC_DISPLAY_WDG,
    eMMS_EDITORAREA_SUBJECT_DISPLAY_WDG, // end
    eMMS_EDITORAREA_ICONLIST_PROPCONTAINER,
    eMMS_EDITORAREA_AUDIO_ICON_IMAGEWDG,
    eMMS_EDITORAREA_VIDEO_ICON_IMAGEWDG,
    eMMS_EDITORAREA_INPUTWIDGET,
    eMMS_EDITORAREA_IMAGE_CONTNR,
    eMMS_EDITORAREA_IMAGE_IMGWDG,

    MMS_EDITOR_VIEW_End
}; //MMS_EDITOR_VIEW_enum
typedef u16 MMSWidgetID;

enum
{
    eRECIPIENT_PROPCONTAINER = APP_WDG_START,
	eRECIPIENT_MENUWIDGET,
	eRECIPIENT_EDITOR_ABSCONTAINER,
	eRECIPIENT_EDITOR_BGIMGWDG,
	eRECIPIENT_EDITOR_BUTTONWDG,
	eRECIPIENT_INPUTWIDGET,
};
typedef u16 SEA_RecipientWdgId;

typedef enum
{

	MNU_SEA_EDITOR = 0,
	MNU_SEA_SEND,
	MNU_SEA_EDIT,
	MNU_SEA_OBJECTLIST,
	MNU_SEA_PREVIEW,
	MNU_SEA_SAVE,
	MNU_SEA_ADD_RECIPIENT,
	MNU_SEA_RECIPIENT_SEND,
	MNU_SEA_ADD_FROM_PB,
	MNU_SEA_RECIPIENT_DEL,
	MNU_SEA_RECIPIENT_DEL_ALL,
	MNU_SEA_ADD_FROM_MEMORISE_LIST,
	MNU_SEA_SAVE_TO_DRAFT,
	MNU_SEA_CONVERT_TO_MMS,
	MNU_SEA_CONVERT_TO_SMS,
	MNU_SEA_INSERT,
	MNU_SEA_INSERT_TEMPLATE,
	MNU_SEA_INSERT_VCARD,
	MNU_SEA_INSERT_VCALENDAR,
	MNU_SEA_INSERT_OBJECT,
	MNU_SEA_INSERT_PICTURE,
	MNU_SEA_INSERT_AUDIO,
#ifdef __MMS_SUPPORT_PLAY_VIDEO__
	MNU_SEA_INSERT_VIDEO,
#endif
	MNU_SEA_INSERT_FILE,
	MNU_SEA_INSERT_SLIDE,
	MNU_SEA_INSERT_AFTER,
	MNU_SEA_INSERT_BEFORE,
	MNU_SEA_INPUT_MENU,
	MNU_SEA_JUMP_TO,
	MNU_SEA_CHANGE_ORDER,
	MNU_SEA_REMOVE,
	MNU_SEA_REMOVE_PICTURE,
	MNU_SEA_REMOVE_AUDIO,
	MNU_SEA_REMOVE_VIDEO,
	MNU_SEA_DELETE_SLIDE,
	MNU_SEA_SETTINGS,
	MNU_SEA_DURATION,
	MNU_SEA_IMAGE_SIZE,
	MNU_SEA_TEXT,
	MNU_SEA_SEND_OPTIONS,
	MNU_SEA_SIM_MASTER,
	MNU_SEA_SIM_SLAVE,
	MNU_SEA_STATUS_REPORT,
	MNU_SEA_VAILD_PERIOD,
	MNU_SEA_OPEN,
	MNU_SEA_ADD_RECIPIENT_OPTION_MENU_2,
	MNU_SEA_RECIPIENT_TO,
	MNU_SEA_RECIPIENT_CC,
	MNU_SEA_RECIPIENT_BCC,
#ifdef __SMS_MMI_SIM_MESSAGE_BOX_SUPPORT__
	MNU_SEA_MSG_SELECT_MASTER_SIM,
	MNU_SEA_MSG_SELECT_SLAVE_SIM,
#endif
}SEAMenuId_e;

#endif //__MMI_MESSAGEEDITORAPP_ID_H__
