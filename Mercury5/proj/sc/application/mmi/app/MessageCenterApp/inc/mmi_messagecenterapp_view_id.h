#ifndef __MMI_MESSAGECENTERAPP_VIEW_ID_H__
#define __MMI_MESSAGECENTERAPP_VIEW_ID_H__

#include "mmi_view_id_range.h"
#include "mmi_phbsrv_def.h"

#include "mmi_common_thmid.h"

#define MCA_VOICEMAIL_MAX_CHAR 30
#define MCA_VOICEMAIL_MAX_BYTELEN MCA_VOICEMAIL_MAX_CHAR*sizeof(MAE_WChar)

enum
{
/* View ID start */
	MCA_MAIN_MENU_VIEW =  MMI_VIEW_ID_AP_BEGIN,
	MCA_BOX_NORMAL_VIEW,
	MCA_BOX_TAB_VIEW,
	MCA_DUAL_SIM_BOX_TAB_VIEW,
	MCA_ONE_SIM_BOX_TAB_VIEW,
	MCA_BOX_DUAL_SIM_TAB_VIEW,
	MCA_SIM_ONE_SIM_TAB_VIEW,
	MCA_SETTING_VIEW,
	MCA_CREATE_NEW_MENU_VIEW,
	MCA_TEMPLATE_MENU_VIEW,
	MCA_MSG_DETAIL_VIEW,
	MCA_MSG_MEMORY_STATUS_VIEW,
    MCA_MSG_DUALSIM_MENU_VIEW,
    MCA_BOX_OPTION_MENU_L1_MODEL,
    MCA_BOX_OPTION_L2_NEW_MODEL,
    MCA_BOX_OPTION_L2_REPLY_MODEL,
    MCA_BOX_OPTION_L2_MARK_MODEL,
    MCA_BOX_OPTION_L2_COPY_TO_SIM,
    MCA_BOX_OPTION_MARK_MENU_MODEL,
#ifdef __3D_MESSAGE_BOX__
    MCA_BOX_3D_TAB_VIEW,
#endif

    MCA_SMS_CHAT_VIEW,    
    MCA_CHAT_OPTION_MENU_L1_MODEL,
    MCA_SMS_CHAT_ITEM_VIEW,
    MCA_CHATITEM_OPTION_MENU_L1_MODEL
/* View ID end */
};

enum
{
/* Widget ID start */
    MCA_MAIN_TITLE = 1,
	MCA_MAIN_MENU,
	MCA_BOX_TITLE,
	MCA_BOX_TAB,

	MCA_BOX_MSG_MENU,
	MCA_BOX_INBOX_MENU,
	MCA_BOX_DRAFT_MENU,
	MCA_BOX_OUTBOX_MENU,
	MCA_BOX_SENT_MENU,
	MCA_BOX_SIM1_MENU,
	MCA_BOX_SIM2_MENU,
	MCA_BOX_OPTION_MENU,
	MCA_SETTINT_TITLE,
	MCA_SETTINT_MENU,

	MCA_DETAIL_TITLE,
	MCA_DETAIL_SCROLLBAR_WDG,
	MCA_DETAIL_VIEWPORT_WDG,
	MCA_DETAIL_CONTAINER,
	MCA_DETAIL_SUBJECT_TXT_WDG,
	MCA_DETAIL_TYPE_TXT_WDG,
	MCA_DETAIL_DATE_TXT_WDG,
	MCA_DETAIL_TIME_TXT_WDG,
	MCA_DETAIL_SIZE_TXT_WDG,
	MCA_DETAIL_FROM_TXT_WDG,
	MCA_DETAIL_TO_TXT_WDG,
	MCA_DETAIL_CC_TXT_WDG,
	MCA_DETAIL_BCC_TXT_WDG,

	MCA_MEMORY_TITLE,
	MCA_MEMORY_SCROLLBAR_WDG,
	MCA_MEMORY_VIEWPORT_WDG,
	MCA_MEMORY_MAIN_CONTAINER,
    MCA_MEMORY_PHONE_MESSAGE_TXT_WDG,
    MCA_MEMORY_PHONE_MESSAGE_SMS_TXT_WDG,
    MCA_MEMORY_PHONE_MESSAGE_MMS_TXT_WDG,
    MCA_MEMORY_PHONE_MESSAGE_CB_TXT_WDG,
    MCA_MEMORY_PHONE_MESSAGE_WAP_TXT_WDG,
    MCA_MEMORY_SIM_MESSAGE_TXT_WDG,
    MCA_MEMORY_SIM_MESSAGE_SINGLE_TXT_WDG,
    MCA_MEMORY_SIM_MESSAGE_MASTER_TXT_WDG,
    MCA_MEMORY_SIM_MESSAGE_SLAVE_TXT_WDG,
    MCA_MEMORY_MOBILE_MEM_TXT_WDG,
    MCA_MEMORY_MOBILE_USED_TXT_WDG,
    MCA_MEMORY_MOBILE_AVAILABLE_TXT_WDG,
    MCA_MEMORY_MOBILE_TOTAL_TXT_WDG,

	MCA_DUALSIM_MENU_TITLE,
	MCA_DUALSIM_MENU_MENUWIDGET,
#ifdef __3D_MESSAGE_BOX__
    MCA_BOX_3D_CONTAINER,
    MCA_BOX_3D_MSG_MENU,
#endif
/* Widget ID end */
};

enum e_BOX_OPTION
{
/* Binary ID start */
    /*e_BOX_OPTION_L1*/
    MCA_BOX_OPTION_READ=0,  //for Inbox, sent box, out box
    MCA_BOX_OPTION_EDIT,    //for Draft
    MCA_BOX_OPTION_NEW,     //new SMS/MMS
    MCA_BOX_OPTION_REPLY,   //for Phone Inbox, SIM1/2 Inbox message
    MCA_BOX_OPTION_DELETE,
    MCA_BOX_OPTION_DELETE_ALL,
    MCA_BOX_OPTION_COPY_TO_PHONE,
    MCA_BOX_OPTION_COPY_TO_SIM,
    MCA_BOX_OPTION_SEND,    		// for outbox, resend,  V1.04
    MCA_BOX_OPTION_MOVE_TO_DRAFT, 	// for oubbox,V1.04
    MCA_BOX_OPTION_MARK,    //Not in outbox, private out box
    MCA_BOX_OPTION_SORTBY,
    MCA_BOX_OPTION_DETAILS,
#if defined( __MMI_SMS_SEARCH__ ) && defined (__SMS_MMI_SIM_MESSAGE_BOX_SUPPORT__)
    MCA_BOX_OPTION_SMS_SEARCH,
    #endif
#ifdef __MMI_SMS_EXPORT__
    MCA_BOX_OPTION_EXPORT_SMS,
#endif

#ifdef __MMI_SMS_CHAT__
    MCA_BOX_OPTION_FORWARD, //for sms chat item menu
    MCA_BOX_OPTION_CALL_SENDER,
    MCA_BOX_OPTION_CALL_RECIPIENT,
    MCA_BOX_OPTION_IP_CALL,
    MCA_BOX_OPTION_SAVE_SENDER,
    MCA_BOX_OPTION_SAVE_RECIPIENT,
	MCA_BOX_OPTION_CALL,
	MCA_BOX_OPTION_CONTACT_INFO,
	MCA_BOX_OPTION_EDIT_IN_CHAT,
#endif

    /*e_BOX_OPTION_L2*/
    MCA_BOX_OPTION_SUB_NEW_SMS,
    MCA_BOX_OPTION_SUB_NEW_MMS,
    MCA_BOX_OPTION_SUB_REPLY_SMS,
    MCA_BOX_OPTION_SUB_REPLY_MMS,
    MCA_BOX_OPTION_SUB_MARK_MARK,
    MCA_BOX_OPTION_SUB_MARK_ALL,
    MCA_BOX_OPTION_SUB_DATE,
    MCA_BOX_OPTION_SUB_SENDER,
    MCA_BOX_OPTION_SUB_RECIPIENT,
    MCA_BOX_OPTION_SUB_SUBJECT,
    MCA_BOX_OPTION_SUB_TYPE,
    MCA_BOX_OPTION_SUB_STORAGE,
    MCA_BOX_OPTION_SUB_COPY_SIM1,
    MCA_BOX_OPTION_SUB_COPY_SIM2,

#ifdef __MMI_SMS_EXPORT__
    //export sms
    MCA_BOX_OPTION_SUB_EXPORT_SMS_PHONE,
    MCA_BOX_OPTION_SUB_EXPORT_SMS_SD,
#if defined(__DUAL_CARD__)
    MCA_BOX_OPTION_SUB_EXPORT_SMS_SD2,
#endif
#endif
    /*e_MARK_OPTION*/
    MCA_MARK_OPTION_MARK,   //for unmark item
    MCA_MARK_OPTION_UNMARK, //for mark item
    MCA_MARK_OPTION_MARK_ALL,
    MCA_MARK_OPTION_UNMARK_ALL,
    MCA_MARK_OPTION_DELETE,
#ifdef __MMI_SMS_EXPORT__
    MCA_MARK_OPTION_EXPORT_SMS,
#endif
    MCA_MARK_OPTION_COPY_TO_PHONE
/* Binary ID end */
};
/* */
enum e_DualSIM_MenuItem
{
    MCA_MNU_MASTERSIM =0,
    MCA_MNU_SLAVESIM
};

/*
enum e_Setting_VoiceMail_Item
{
    MCA_SETTING_VOICEMAIL_START=0,
    MCA_SETTING_VOICEMAIL_SET_NUMBER_L1=MCA_SETTING_VOICEMAIL_START,
    MCA_SETTING_VOICEMAIL_SET_NUMBER_L2,
    MCA_SETTING_VOICEMAIL_NOTIFICATION,
    MCA_SETTING_VOICEMAIL_TOTAL
};

enum e_Setting_VoiceMail_Notification_Item
{
    MCA_SETTING_VOICEMAIL_NOTIFICATION_START=0,
    MCA_SETTING_VOICEMAIL_NOTIFICATION_ON,
    MCA_SETTING_VOICEMAIL_NOTIFICATION_OFF,
    MCA_SETTING_VOICEMAIL_NOTIFICATION_TOTAL
};
*/
#endif /* __MMI_MESSAGECENTERAPP_VIEW_ID_H__ */
