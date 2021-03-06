ApBegin(RS,CLSID_CALLSETTINGAPP)
#ifdef __IP_CALL_MMI__
    WndBegin(CALLSETTING_WND_IP_CALL_LIST)
        WdgBegin(CLSID_VTMMENU,ListMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LTL_N_IP_NUMBER,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,ListMenu)
    WndEnd(CALLSETTING_WND_IP_CALL_LIST)

    WndBegin(CALLSETTING_WND_IP_CALL_DETAIL)
        WdgBegin(CLSID_VTMMENU,DetailMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LTL_N_IP_NUMBER,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,2,0,0})
        WdgEnd(CLSID_VTMMENU,DetailMenu)
    WndEnd(CALLSETTING_WND_IP_CALL_DETAIL)

    WndBegin(CALLSETTING_WND_IP_CALL_OPTION_MENU)
        WdgBegin(CLSID_VTMOPTIONMENU,CallOpt)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,3})
            VtmCreateOptionMenuDataRC(3,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_LO_EDIT},TXT_OIL1_N_EDIT},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_LO_ADD},TXT_OIL1_N_ADD},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_LO_DELETE},TXT_OIL1_N_DELETE}})
        WdgEnd(CLSID_VTMOPTIONMENU,CallOpt)
    WndEnd(CALLSETTING_WND_IP_CALL_OPTION_MENU)

    WndBegin(CALLSETTING_WND_IP_CALL_NAME_INPUT_OPTION_MENU)
        WdgBegin(CLSID_VTMOPTIONMENU,InputOpt)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
			VtmCreateOptionMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_LO_SAVE},TXT_OIL1_N_SAVE},	{{MENUMODEL_ITEM_VISABLE|MENUMODEL_ITEM_HAS_CHILD,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_COMMON_TEXT_INPUT_MENU},TXT_OIL1_N_INPUT_MENU}})
        WdgEnd(CLSID_VTMOPTIONMENU,InputOpt)
    WndEnd(CALLSETTING_WND_IP_CALL_NAME_INPUT_OPTION_MENU)

    WndBegin(CALLSETTING_WND_IP_CALL_NAME_INPUT)
        WndSetAllSoftkeyRC( {SK_OPTION, SK_OK, SK_BACK} )
        WdgBegin(CLSID_VTMINPUT,NameInput)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LIL_N_COMMON_NAME,0,FALSE})
         	VTMWdgBegin (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmIpName)
             	WdgInputSetMaxByteLengthRC(IPCALL_MAX_NAME_LEN_RS*2)
        	VTMWdgEnd (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmIpName)
        WdgEnd(CLSID_VTMINPUT,NameInput)
    WndEnd(CALLSETTING_WND_IP_CALL_NAME_INPUT)

    WndBegin(CALLSETTING_WND_IP_CALL_NUMBER_INPUT_POPUP)
        WndSetAllSoftkeyRC( {SK_SELECT, SK_OK, SK_BACK} )
        WdgBegin(CLSID_VTMPOPUPINPUT,NumberInput)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LIL_N_IP_NUMBER_NUM,MAE_INPUTMODE_DIALING})
         	VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmNumInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_DIALING)
                WdgInputSetMaxByteLengthRC(IPCALL_MAX_NUM_LEN_RS*2)
                WdgInputSetDisableSwitchInputModeRC(TRUE)
        	VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmNumInput)
        WdgEnd(CLSID_VTMPOPUPINPUT,NumberInput)
    WndEnd(CALLSETTING_WND_IP_CALL_NUMBER_INPUT_POPUP)
#endif
    WndBegin(CALLSETTING_WND_DIVERT_TO_NUMBER_INPUT_POPUP)
        WdgBegin(CLSID_VTMPOPUPINPUT,DivertNumber)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_N_LIL_PHONE_NUMBER,MAE_INPUTMODE_DIALING})
         	VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmDivertInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_DIALING)
                WdgInputSetMaxByteLengthRC(MAX_SS_NUMBER_LEN_RS*2)
                WdgInputSetShowBorderWhenLoseFocusRC(TRUE)
	        VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmDivertInput)
        WdgEnd(CLSID_VTMPOPUPINPUT,DivertNumber)
    WndEnd(CALLSETTING_WND_DIVERT_TO_NUMBER_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_BARRING_CHECK_PASSWORD_INPUT_POPUP)
        WndSetAllSoftkeyRC( {SK_OK_TEXT, SK_OK, SK_CANCEL} )
        WdgBegin(CLSID_VTMPOPUPINPUT,ChkPwd)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LTL_N_ENTER_PASSWORD,MAE_INPUTMODE_NUMERIC})
         	VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmChkInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
                WdgInputSetMaxByteLengthRC(MAX_SS_CB_PWD_LEN_RS)
                WdgInputSetPasswordStyleRC(TRUE)
                WdgInputSetShowBorderWhenLoseFocusRC(TRUE)
	        VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmChkInput)
        WdgEnd(CLSID_VTMPOPUPINPUT,ChkPwd)
    WndEnd(CALLSETTING_WND_BARRING_CHECK_PASSWORD_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_BARRING_CHANGE_PASSWORD_INPUT_POPUP)
        WndSetAllSoftkeyRC( {SK_OK_TEXT, SK_OK, SK_CANCEL} )
        WdgBegin(CLSID_VTMPOPUPINPUT,ChgPwd)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LTL_N_ENTER_OLD_PASSWORD,MAE_INPUTMODE_NUMERIC})
         	VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmChgInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
                WdgInputSetMaxByteLengthRC(MAX_SS_CB_PWD_LEN_RS)
                WdgInputSetPasswordStyleRC(TRUE)
                WdgInputSetShowBorderWhenLoseFocusRC(TRUE)
     	    VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmChgInput)
        WdgEnd(CLSID_VTMPOPUPINPUT,ChgPwd)
    WndEnd(CALLSETTING_WND_BARRING_CHANGE_PASSWORD_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_MINUTE_REMINDER_INPUT_POPUP)
        WndSetAllSoftkeyRC( {SK_OK_TEXT, SK_OK, SK_CANCEL} )
        WdgBegin(CLSID_VTMPOPUPINPUT,ReminderInput)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LIL_N_USER_DEFINED_VALUE_UNIT,MAE_INPUTMODE_NUMERIC})
         	VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmRemindInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
                WdgInputSetMaxByteLengthRC(CALLSETTING_MAX_TIMER_SIZE)
                WdgInputSetDisableSymbolTableRC(TRUE)
        	VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmRemindInput)
        WdgEnd(CLSID_VTMPOPUPINPUT,ReminderInput)
    WndEnd(CALLSETTING_WND_MINUTE_REMINDER_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_USER_GROUP_SET_INDEX_INPUT_POPUP)
        WndSetAllSoftkeyRC( {SK_OK_TEXT, SK_OK, SK_CANCEL} )
        WdgBegin(CLSID_VTMPOPUPINPUT,SetIndex)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LIL_N_GROUP_INDEX,MAE_INPUTMODE_NUMERIC})
            VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmSetIndxInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
                WdgInputSetMaxByteLengthRC(CALLSETTING_MAX_CUG_INDEX_SIZE)
                WdgInputSetDisableSymbolTableRC(TRUE)
        	VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmSetIndxInput)
        WdgEnd(CLSID_VTMPOPUPINPUT,SetIndex)
    WndEnd(CALLSETTING_WND_USER_GROUP_SET_INDEX_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_SELECT_DUALSIM)
        WdgBegin(CLSID_VTMSIMSELECTION,SimSelect)
            VtmCreateSimSelectionRC({IMG_NULL_ID,TXT_LIL_N_CALL_SETTINGS})
        WdgEnd(CLSID_VTMSIMSELECTION,SimSelect)
    WndEnd(CALLSETTING_WND_SELECT_DUALSIM)

#ifdef __HALL_SWITCH_MMI__
    WndBegin(CALLSETTING_WND_MAIN_LIST)
        WdgBegin(CLSID_VTMMENU,MainList)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_CALL_SETTINGS,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,19,0,0})
            VtmCreateMenuDataRC(19,{
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_DIVERT},{TXT_LIL_N_CALL_DIVERT,TXT_LIL_N_MORE}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_BARRING},{TXT_LIL_N_CALL_BARRING,TXT_LIL_N_MORE}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_SPEED_DIAL},{TXT_LIL_N_SPEED_DIAL,TXT_LIL_N_MORE}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_WAITING},{TXT_LIL_N_CALL_WAITING,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_CALLER_IDENTITY},{TXT_LIL_N_CALLER_IDENTITY,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_ANY_KEY_ANSWER},{TXT_LIL_N_ANY_KEY_ANSWER,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_SLIDE_SETTINGS},{TXT_LIL_N_SLIDE_SETTINGS,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_MINUTE_REMINDER},{TXT_LIL_N_MINUTE_REMINDER,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_AUTO_REDIAL},{TXT_LIL_N_AUTO_REDIAL,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_ANSWER_INDICATOR},{TXT_LIL_N_CALL_ANSWER_INDICATOR,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_COST},{TXT_LIL_N_CALL_COST_SETTING,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_IP_NUMBER},{TXT_LIL_N_IP_NUMBER,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_USER_GROUP},{TXT_LIL_N_USER_GROUP,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_REJECT_MT_OFF},{TXT_LIL_N_CALLSETTINGAPP_REJECT_MT,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_DISTORTED_VOICE},{TXT_LIL_N_DISTORTED_VOICE,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_ANSWERING_MACHINE},{TXT_LIL_N_ANSWERING_MACHINE,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_CALL_BACKGROUND_SOUND},{TXT_LIL_N_CALL_BACKGROUND_SOUND,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_FIREWALL},{TXT_LIL_N_CALL_FIREWALL,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_AUTO_RECORDING},{TXT_LIL_N_AUTO_RECORDING,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,MainList)
    WndEnd(CALLSETTING_WND_MAIN_LIST)
#elif defined(__APP_VIDEO_TELEPHONY__)
    WndBegin(CALLSETTING_WND_MAIN_LIST)
        WdgBegin(CLSID_VTMMENU,MainList)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_CALL_SETTINGS,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,19,0,0})
            VtmCreateMenuDataRC(19,{
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_DIVERT},{TXT_LIL_N_CALL_DIVERT,TXT_LIL_N_MORE}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_BARRING},{TXT_LIL_N_CALL_BARRING,TXT_LIL_N_MORE}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_SPEED_DIAL},{TXT_LIL_N_SPEED_DIAL,TXT_LIL_N_MORE}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_WAITING},{TXT_LIL_N_CALL_WAITING,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_CALLER_IDENTITY},{TXT_LIL_N_CALLER_IDENTITY,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_ANY_KEY_ANSWER},{TXT_LIL_N_ANY_KEY_ANSWER,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_MINUTE_REMINDER},{TXT_LIL_N_MINUTE_REMINDER,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_AUTO_REDIAL},{TXT_LIL_N_AUTO_REDIAL,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_ANSWER_INDICATOR},{TXT_LIL_N_CALL_ANSWER_INDICATOR,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_COST},{TXT_LIL_N_CALL_COST_SETTING,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_IP_NUMBER},{TXT_LIL_N_IP_NUMBER,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_USER_GROUP},{TXT_LIL_N_USER_GROUP,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_VIDEO_CALL},{TXT_OIL1_N_VIDEO_CALL,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_REJECT_MT_OFF},{TXT_LIL_N_CALLSETTINGAPP_REJECT_MT,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_DISTORTED_VOICE},{TXT_LIL_N_DISTORTED_VOICE,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_ANSWERING_MACHINE},{TXT_LIL_N_ANSWERING_MACHINE,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_CALL_BACKGROUND_SOUND},{TXT_LIL_N_CALL_BACKGROUND_SOUND,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_FIREWALL},{TXT_LIL_N_CALL_FIREWALL,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_AUTO_RECORDING},{TXT_LIL_N_AUTO_RECORDING,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,MainList)
    WndEnd(CALLSETTING_WND_MAIN_LIST)
#else
	WndBegin(CALLSETTING_WND_MAIN_LIST)
		WdgBegin(CLSID_VTMMENU,MainList)
			VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_CALL_SETTINGS,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,18,0,0})
			VtmCreateMenuDataRC(18,{
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_DIVERT},{TXT_LIL_N_CALL_DIVERT,TXT_LIL_N_MORE}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_BARRING},{TXT_LIL_N_CALL_BARRING,TXT_LIL_N_MORE}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_SPEED_DIAL},{TXT_LIL_N_SPEED_DIAL,TXT_LIL_N_MORE}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_WAITING},{TXT_LIL_N_CALL_WAITING,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_CALLER_IDENTITY},{TXT_LIL_N_CALLER_IDENTITY,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_ANY_KEY_ANSWER},{TXT_LIL_N_ANY_KEY_ANSWER,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_MINUTE_REMINDER},{TXT_LIL_N_MINUTE_REMINDER,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_AUTO_REDIAL},{TXT_LIL_N_AUTO_REDIAL,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_ANSWER_INDICATOR},{TXT_LIL_N_CALL_ANSWER_INDICATOR,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_CALL_COST},{TXT_LIL_N_CALL_COST_SETTING,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_IP_NUMBER},{TXT_LIL_N_IP_NUMBER,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_USER_GROUP},{TXT_LIL_N_USER_GROUP,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_REJECT_MT_OFF},{TXT_LIL_N_CALLSETTINGAPP_REJECT_MT,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CS_DISTORTED_VOICE},{TXT_LIL_N_DISTORTED_VOICE,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_ANSWERING_MACHINE},{TXT_LIL_N_ANSWERING_MACHINE,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_CALL_BACKGROUND_SOUND},{TXT_LIL_N_CALL_BACKGROUND_SOUND,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_FIREWALL},{TXT_LIL_N_CALL_FIREWALL,TXT_NULL_ID}},
                {{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_AUTO_RECORDING},{TXT_LIL_N_AUTO_RECORDING,TXT_NULL_ID}}})
		WdgEnd(CLSID_VTMMENU,MainList)
	WndEnd(CALLSETTING_WND_MAIN_LIST)
#endif

    WndBegin(CALLSETTING_WND_CLASS_LIST)
        WdgBegin(CLSID_VTMMENU,ClassList)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,5,0,0})
            VtmCreateMenuDataRC(5,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_ALL},{TXT_TTL_N_ALL,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_VOICE},{TXT_LIL_N_VOICE,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_DATA},{TXT_LIL_N_DATA,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_FAX},{TXT_LIL_N_FAX,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_SMS},{TXT_LIL_N_SHORT_MESSAGE,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,ClassList)
    WndEnd(CALLSETTING_WND_CLASS_LIST)

#ifdef __APP_VIDEO_TELEPHONY__
    WndBegin(CALLSETTING_WND_CLASS_LIST_VT)
        WdgBegin(CLSID_VTMMENU,ClassListVt)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,5,0,0})
            VtmCreateMenuDataRC(5,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_ALL},{TXT_TTL_N_ALL,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_VOICE},{TXT_LIL_N_VOICE,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_DATA},{TXT_LIL_N_DATA_VIDEO_CALL,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_FAX},{TXT_LIL_N_FAX,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CLASS_SMS},{TXT_LIL_N_SHORT_MESSAGE,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,ClassListVt)
    WndEnd(CALLSETTING_WND_CLASS_LIST_VT)
#endif

    WndBegin(CALLSETTING_WND_DIVERT_LIST)
        WdgBegin(CLSID_VTMMENU,DivertList)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,5,0,0})
            VtmCreateMenuDataRC(5,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_UNCONDITIONAL},{TXT_LIL_N_CS_UNCONDITIONAL,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_ON_BUSY},{TXT_LIL_N_CS_ON_BUSY,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_NO_REPLY},{TXT_LIL_N_CS_NO_REPLY,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_UNREACHABLE},{TXT_LIL_N_CS_UNREACHABLE,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_DEACTIVATE_ALL_DIVERT},{TXT_LIL_N_CS_DEACTIVATE_ALL,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,DivertList)
    WndEnd(CALLSETTING_WND_DIVERT_LIST)

    WndBegin(CALLSETTING_WND_DIVERT_SELECT_TYPE_LIST)
        WdgBegin(CLSID_VTMMENU,DivertSelect)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,2,0,0})
            VtmCreateMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_PHONE_NUMBER},{TXT_N_LIL_PHONE_NUMBER,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_VOICE_MAIL_NUMBER},{TXT_LIL_N_VOICE_MAIL_NUMBER,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,DivertSelect)
    WndEnd(CALLSETTING_WND_DIVERT_SELECT_TYPE_LIST)

    WndBegin(CALLSETTING_WND_BARRING_LIST)
        WdgBegin(CLSID_VTMMENU,BarringList)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,7,0,0})
            VtmCreateMenuDataRC(7,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_ALL_OUTGOING},{TXT_LIL_N_CS_ALL_OUTGOING,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_OUTGOING_INT},{TXT_LIL_N_CS_OUTGOING_INT,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_OUT_INT_AND_HOME},{TXT_LIL_N_CS_OUT_INT_AND_HOME,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_ALL_INCOMING},{TXT_LIL_N_CS_ALL_INCOMING,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_IN_WHEN_ROAMING},{TXT_LIL_N_CS_WHEN_ROAMING,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_DEACTIVATE_ALL_BARRING},{TXT_LIL_N_CS_DEACTIVATE_ALL_BARRING,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CHANGE_PASSWORD},{TXT_LIL_N_CHANGE_PASSWORD,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,BarringList)
    WndEnd(CALLSETTING_WND_BARRING_LIST)

    WndBegin(CALLSETTING_WND_USER_GROUP_LIST)
        WdgBegin(CLSID_VTMMENU,UserGroup)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_USER_GROUP,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,3,0,0})
        WdgEnd(CLSID_VTMMENU,UserGroup)
    WndEnd(CALLSETTING_WND_USER_GROUP_LIST)

#ifdef __HALL_SWITCH_MMI__
    WndBegin(CALLSETTING_WND_SLIDE_SETTINGS)
        WdgBegin(CLSID_VTMMENU,SlideSetting)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_SLIDE_SETTINGS,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,2,0,0})
            VtmCreateMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT, SK_OK, SK_BACK},MNU_CALLSETTING_SLIDE_COLSE_HANGUP_CALL},{TXT_LIL_N_SLIDE_CLOSE_HANGUP_CALL,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{SK_SELECT, SK_OK, SK_BACK},MNU_CALLSETTING_SLIDE_OPEN_ACCEPT_CALL},{TXT_LIL_N_SLIDE_OPEN_ACCETP_CALL,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,SlideSetting)
    WndEnd(CALLSETTING_WND_SLIDE_SETTINGS)
#endif

    WndBegin(CALLSETTING_WND_ANSWER_MODE_MENU)
        WdgBegin(CLSID_VTMMENU,AnswerMode)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_ANY_KEY_ANSWER,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
            VtmCreateMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_ANY_KEY_ANSWER_ON},TXT_LIL_N_ANY_KEY},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_ANY_KEY_ANSWER_OFF},TXT_LIL_N_SEND_KEY}})
        WdgEnd(CLSID_VTMMENU,AnswerMode)
    WndEnd(CALLSETTING_WND_ANSWER_MODE_MENU)

    WndBegin(CALLSETTING_WND_OPERATION_LIST)
        WdgBegin(CLSID_VTMMENU,OperationList)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,3,0,0})
            VtmCreateMenuDataRC(3,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_ACTIVATE},{TXT_LIL_N_ACTIVATE,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_DEACTIVATE},{TXT_LIL_N_DEACTIVATE,TXT_NULL_ID}},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CS_CHECK_STATUS},{TXT_LIL_N_CS_CHECK_STATUS,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,OperationList)
    WndEnd(CALLSETTING_WND_OPERATION_LIST)

    WndBegin(CALLSETTING_WND_CALLER_IDENTITY_MENU_POPUP)
        WdgBegin(CLSID_VTMPOPUPSELECT,IndentityMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            VtmCreatePopUpSelectDataRC(3,{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_CALLER_ID_DEFAULT},TXT_LIL_N_SET_BY_NETWORK},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_CALLER_ID_ON},TXT_LIL_N_ON},	{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_CALLER_ID_OFF},TXT_LIL_N_OFF}})
        WdgEnd(CLSID_VTMPOPUPSELECT,IndentityMenu)
    WndEnd(CALLSETTING_WND_CALLER_IDENTITY_MENU_POPUP)

    WndBegin(CALLSETTING_WND_ANSWER_INDICATOR_MENU_POPUP)
        WdgBegin(CLSID_VTMPOPUPSELECT,AnsInd)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,0,0})
            VtmCreatePopUpSelectDataRC(4,{{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_ANSWER_INDICATOR_OFF},TXT_LIL_N_OFF},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_ANSWER_INDICATOR_RINGTONE},TXT_LIL_N_RINGTONE},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_ANSWER_INDICATOR_VIBRATE},TXT_LIL_N_VIBRATE},{{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_CALLSETTING_ANSWER_INDICATOR_SCREEN_BLINKING},TXT_LIL_N_SCREEN_BLINKING}})
        WdgEnd(CLSID_VTMPOPUPSELECT,AnsInd)
    WndEnd(CALLSETTING_WND_ANSWER_INDICATOR_MENU_POPUP)

#ifdef __APP_VIDEO_TELEPHONY__
    WndBegin(CALLSETTING_WND_VIDEO_TELEPHONY_MENU)
        WdgBegin(CLSID_VTMMENU,VideoTelephony)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_OIL1_N_VIDEO_CALL,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,2,0,0})
            VtmCreateMenuDataRC(2,
            	{{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_VIDEO_CALL_REDIAL},{TXT_LIL_N_REDIAL_BY_VOICE_CALL,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_VIDEO_CALL_STORAGE},{TXT_OIL1_N_STORAGE,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,VideoTelephony)
    WndEnd(CALLSETTING_WND_VIDEO_TELEPHONY_MENU)
    WndBegin(CALLSETTING_WND_VIDEO_CALL_MENU_POPUP)
        WdgBegin(CLSID_VTMPOPUPSELECT,VideoCallMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
        WdgEnd(CLSID_VTMPOPUPSELECT,VideoCallMenu)
    WndEnd(CALLSETTING_WND_VIDEO_CALL_MENU_POPUP)
#endif

    WndBegin(CALLSETTING_WND_MINUTE_REMINDER_MENU_POPUP)
        WdgBegin(CLSID_VTMPOPUPSELECT,MinuteMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,5,0,0})
        WdgEnd(CLSID_VTMPOPUPSELECT,MinuteMenu)
    WndEnd(CALLSETTING_WND_MINUTE_REMINDER_MENU_POPUP)

    WndBegin(CALLSETTING_WND_NEW_RESULT_SCREEN_POPUP)
        WndSetAllSoftkeyRC( {SK_NONE, SK_NONE, SK_CLOSE} )
        WdgBegin(CLSID_VTMPOPUPINFO,ResultScreen)
            VtmCreatePopUpInfoRC({IMG_NULL_ID,TXT_LIL_N_CALL_DIVERT})
            VTMWdgBegin (CLSID_TEXTWIDGET, POP_UP_INFO_THM_TXT_WDG, VtmResultTxt)
                WdgCommonSetAlignmentRC((WdgAlignment_e)(ALIGN_H_START|ALIGN_V_TOP))
         	VTMWdgEnd (CLSID_TEXTWIDGET, POP_UP_INFO_THM_TXT_WDG, VtmResultTxt)
        WdgEnd(CLSID_VTMPOPUPINFO,ResultScreen)
    WndEnd(CALLSETTING_WND_NEW_RESULT_SCREEN_POPUP)

    WndBegin(CALLSETTING_WND_DISTORTED_VOICE_MENU)
        WdgBegin(CLSID_VTMMENU,DistortedVoice)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_DISTORTED_VOICE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,2,0,0})
            VtmCreateMenuDataRC(2,
            	{{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_DISTORTED_VOICE_STATUS},{TXT_LIL_N_STATUS,TXT_NULL_ID}},
				{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CS_DISTORTED_VOICE_EFFECT},{TXT_LIL_N_DISTORTED_EFFECT,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,DistortedVoice)
    WndEnd(CALLSETTING_WND_DISTORTED_VOICE_MENU)

    WndBegin(CALLSETTING_WND_DISTORTED_VOICE_EFFECT_POPUP)
        WdgBegin(CLSID_VTMPOPUPSELECT,DistortedEffect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,6,0,0})
            VtmCreatePopUpSelectDataRC(6,
            	{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_DISTORTED_VOICE_EFFECT_KID},TXT_LIL_N_DISTORTED_EFFECT_KID},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_DISTORTED_VOICE_EFFECT_GIRL},TXT_LIL_N_DISTORTED_EFFECT_GIRL},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_DISTORTED_VOICE_EFFECT_WOMAN},TXT_LIL_N_DISTORTED_EFFECT_WOMAN},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_DISTORTED_VOICE_EFFECT_YOUNGMAN},TXT_LIL_N_DISTORTED_EFFECT_YOUNGMAN},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_DISTORTED_VOICE_EFFECT_MAN},TXT_LIL_N_DISTORTED_EFFECT_MAN},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CS_DISTORTED_VOICE_EFFECT_BASS},TXT_LIL_N_DISTORTED_EFFECT_BASS}})
        WdgEnd(CLSID_VTMPOPUPSELECT,DistortedEffect)
    WndEnd(CALLSETTING_WND_DISTORTED_VOICE_EFFECT_POPUP)

    WndBegin(CALLSETTING_WND_ANSWERING_MACHINE_MAIN_LIST)
        WdgBegin(CLSID_VTMMENU,AnsweringMachine)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_ANSWERING_MACHINE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,5,0,0})
            VtmCreateMenuDataRC(5,{{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_AM_STATUS},{TXT_LIL_N_USER_GROUP_STATUS,TXT_NULL_ID}},
            					{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_AM_ANSWER_GREETING_VOICE},{TXT_LIL_N_ANSWER_GREETING_VOICE,TXT_NULL_ID}},
            					{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_AM_AUTO_ANSWER_AFTER_RING},{TXT_LIL_N_AUTO_ANSWER_AFTER_RING,TXT_NULL_ID}},
								{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_AM_VOICE_BOX},{TXT_LIL_N_VOICE_BOX,TXT_NULL_ID}},
								{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_AM_STORAGE},{TXT_OIL1_N_STORAGE,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,AnsweringMachine)
    WndEnd(CALLSETTING_WND_ANSWERING_MACHINE_MAIN_LIST)

    WndBegin(CALLSETTINGAPP_WND_AM_GREETING_POPUPMENU)
        WdgBegin(CLSID_VTMMENU,AMGreeting)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            WdgStaticMenuItemRC(3,{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_USE_DEFAULT, TXT_OIL1_N_USE_DEFAULT},
                              	{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_SELECT_FILE, TXT_LIL_N_SELECT_FILE},
							  	{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_VOICE_MEMO, TXT_LIL_N_VOICE_MEMO}})
        WdgEnd(CLSID_VTMMENU,AMGreeting)
	WndEnd(CALLSETTINGAPP_WND_AM_GREETING_POPUPMENU)

    WndBegin(CALLSETTINGAPP_WND_AM_AFTER_RING_POPUPMENU)
        WdgBegin(CLSID_VTMMENU,AMAfterRing)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,5,0,0})
            WdgStaticMenuItemRC(4,{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_IMMEDIATE, TXT_LIL_N_IMMEDIATE},
                              	{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_5_SECONDS, TXT_LIL_N_5_SECONDS},
							  	{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_15_SECONDS, TXT_LIL_N_15_SECONDS},
								{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_AM_30_SECONDS, TXT_LIL_N_30_SECONDS}})
        WdgEnd(CLSID_VTMMENU,AMAfterRing)
	WndEnd(CALLSETTINGAPP_WND_AM_AFTER_RING_POPUPMENU)

    WndBegin(CALLSETTING_WND_AM_USER_DEFINED_INPUT_POPUP)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
        WdgBegin(CLSID_VTMPOPUPINPUT,VtmPopupInput)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LIL_N_AUTO_ANSWER_AFTER_RING,MAE_INPUTMODE_NUMERIC})
            VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, InputWidget)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
                WdgInputSetMaxByteLengthRC(CALLSETTING_MAX_CUG_INDEX_SIZE)
                WdgInputSetDisableSymbolTableRC(TRUE)
        	VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, InputWidget)
        WdgEnd(CLSID_VTMPOPUPINPUT,VtmPopupInput)
    WndEnd(CALLSETTING_WND_AM_USER_DEFINED_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_AM_VOICE_BOX_LIST)
        WdgBegin(CLSID_VTMMENU,VoiceBoxMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_VOICE_BOX,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_IMAGETEXT_SPACETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,VoiceBoxMenu)
    WndEnd(CALLSETTING_WND_AM_VOICE_BOX_LIST)

    WndBegin(CALLSETTING_WND_AM_VOICE_BOX_OPTION)
		WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_CANCEL})
        WdgBegin(CLSID_VTMOPTIONMENU,VoiceBoxOption)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,5})
            VtmCreateOptionMenuDataRC(5,{{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_AM_VOICEBOX_PLAY}, TXT_OIL1_N_PLAY},
                    {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_AM_VOICEBOX_SEND}, TXT_OIL1_N_SEND},
                    {{MENUMODEL_ITEM_VISABLE|MENUMODEL_ITEM_HAS_CHILD, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_AM_SET_AS}, TXT_OIL1_N_SET_AS},
                    {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_AM_DELETE}, TXT_OIL1_N_DELETE},
                    {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_AM_DELETE_ALL}, TXT_OIL1_N_DELETE_ALL}})
        WdgEnd(CLSID_VTMOPTIONMENU,VoiceBoxOption)
    WndEnd(CALLSETTING_WND_AM_VOICE_BOX_OPTION)

#ifdef __APP_MMI_CALL_BACKGROUND_SOUND__
    WndBegin(CALLSETTING_WND_CALL_BACKGROUND_SOUND_LIST)
        WdgBegin(CLSID_VTMMENU,CallBgSnd)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_CALL_BACKGROUND_SOUND,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,4,0,0})
            VtmCreateMenuDataRC(4,{{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_CBS_STATUS},{TXT_LIL_N_STATUS,TXT_NULL_ID}},
            					{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_CBS_EFFECT_SOUND},{TXT_LIL_N_EFFECT_SOUND,TXT_NULL_ID}},
								{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_CBS_VOLUME},{TXT_LIL_N_VOLUME,TXT_NULL_ID}},
								{{MENUMODEL_ITEM_VISABLE,{SK_CHANGE,SK_OK,SK_BACK},MNU_CALLSETTING_CBS_PLAY_TYPE},{TXT_LIL_N_PLAY_TYPE,TXT_NULL_ID}}})
        WdgEnd(CLSID_VTMMENU,CallBgSnd)
    WndEnd(CALLSETTING_WND_CALL_BACKGROUND_SOUND_LIST)

    WndBegin(CALLSETTING_WND_CBS_PLAY_TYPE_MENU)
        WdgBegin(CLSID_VTMMENU,CBSPlayType)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            WdgStaticMenuItemRC(3,{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_CBS_PLAY_ONCE, TXT_LIL_N_ONCE},
                              	{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_CBS_PLAY_REPEAT, TXT_LIL_N_REPEAT},
							  	{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_CALLSETTING_CBS_PLAY_INTERVAL, TXT_NULL_ID}})
        WdgEnd(CLSID_VTMMENU,CBSPlayType)
	WndEnd(CALLSETTING_WND_CBS_PLAY_TYPE_MENU)

	WndBegin(CALLSETTING_WND_CBS_INTERVAL_INPUT_POPUP)
		WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
		WdgBegin(CLSID_VTMPOPUPINPUT,IntervalPopupInput)
			VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_LIL_N_INTERVAL,MAE_INPUTMODE_NUMERIC})
			VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, IntervalInputWidget)
				WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_NUMERIC)
				WdgInputSetMaxByteLengthRC(CALLSETTING_MAX_CUG_INDEX_SIZE)
				WdgInputSetDisableSymbolTableRC(TRUE)
			VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, IntervalInputWidget)
		WdgEnd(CLSID_VTMPOPUPINPUT,IntervalPopupInput)
	WndEnd(CALLSETTING_WND_CBS_INTERVAL_INPUT_POPUP)

    WndBegin(CALLSETTING_WND_CBS_EFFECT_SOUND_LIST)
        WdgBegin(CLSID_VTMMENU,EffectSoundMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_EFFECT_SOUND,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,CHECK_RADIO_STYLE_RADIO,0,0,0})
        WdgEnd(CLSID_VTMMENU,EffectSoundMenu)
    WndEnd(CALLSETTING_WND_CBS_EFFECT_SOUND_LIST)

	WndBegin(CALLSETTING_WND_CBS_EFFECT_SOUND_OPTION)
		WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_CANCEL})
		WdgBegin(CLSID_VTMOPTIONMENU,EffectSoundOption)
			VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,4})
			VtmCreateOptionMenuDataRC(4,
					{{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_CBS_EFFECT_SELECT}, TXT_LSK_N_SELECT},
					{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_CBS_EFFECT_PLAY}, TXT_OIL1_N_PLAY},
					{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_CBS_EFFECT_STOP}, TXT_OIL1_N_STOP},
					{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK, DEFAULT_SK, DEFAULT_SK}, MNU_CALLSETTING_CBS_EFFECT_EDIT}, TXT_OIL1_N_EDIT}})
		WdgEnd(CLSID_VTMOPTIONMENU,EffectSoundOption)
	WndEnd(CALLSETTING_WND_CBS_EFFECT_SOUND_OPTION)

    WndBegin(CALLSETTING_WND_CBS_VOLUME)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
        WndSetTitleRC({IMG_NULL_ID, TXT_LIL_N_VOLUME})
    WndEnd(CALLSETTING_WND_CBS_VOLUME)
#endif
    
#ifdef __MMI_CALL_FIREWALL__
	WndBegin(CALLSETTING_WND_CALL_FIREWALL)
		WdgBegin(CLSID_VTMMENU,FirewallMenu)
			VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_CALL_FIREWALL,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,3,0,0})
			VtmCreateMenuDataRC(3,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_FIREWALL_STATUS},{TXT_LIL_N_STATUS,TXT_NULL_ID}},
								{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_FIREWALL_FILTER},{TXT_LIL_N_FILTER,TXT_NULL_ID}},
								{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_BACK},MNU_CALLSETTING_FIREWALL_ANSWERING},{TXT_LIL_N_ANSWERING_SOUND,TXT_NULL_ID}}})
		WdgEnd(CLSID_VTMMENU,FirewallMenu)
	WndEnd(CALLSETTING_WND_CALL_FIREWALL)

	WndBegin(CALLSETTING_WND_CALL_FIREWALL_FILTER)
		WdgBegin(CLSID_VTMPOPUPSELECT,FilterType)
			VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,5,0,0})
			VtmCreatePopUpSelectDataRC(3,
				{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_FILTER_DENY_BLACKLIST_ONLY},TXT_LIL_N_FIREWALL_FILTER_BLACKLIST_ONLY},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_FILTER_ALLOW_CONTACTS},TXT_LIL_N_FIREWALL_ALLOW_CONTACTS},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_FILTER_DENY_ALL},TXT_LIL_N_FIREWALL_FILTER_ALL_CALLS}})
		WdgEnd(CLSID_VTMPOPUPSELECT,FilterType)
	WndEnd(CALLSETTING_WND_CALL_FIREWALL_FILTER)

	WndBegin(CALLSETTING_WND_CALL_FIREWALL_ANSWERING)
		WdgBegin(CLSID_VTMPOPUPSELECT,AnsweringType)
			VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,5,0,0})
			VtmCreatePopUpSelectDataRC(5,
				{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_ANSWERING_DEFAULT},TXT_LIL_N_DEFAULT},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_ANSWERING_BUSY},TXT_LIL_N_LINE_BUSY},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_ANSWERING_INEXISTENCE},TXT_LIL_N_INEXISTENT_NUMBER},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_ANSWERING_POWEROFF},TXT_MID_N_POWER_OFF},
				{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_CALLSETTING_FIREWALL_ANSWERING_OUTOFSERVICE},TXT_LIL_N_OUT_OF_SERVICE}})
		WdgEnd(CLSID_VTMPOPUPSELECT,AnsweringType)
	WndEnd(CALLSETTING_WND_CALL_FIREWALL_ANSWERING)
#endif /* __MMI_CALL_FIREWALL__ */
    
ApEnd(RS,CLSID_CALLSETTINGAPP)

