ApBegin(RS,CLSID_PROFILEAPP)
    WndBegin(PROFILEAPP_WND_MAINLIST_HEADSETSILENT)
        WdgBegin(CLSID_VTMMENU, HeadSetSilentMenuData)

            VtmCreateMenuRC(IMG_NULL_ID,TXT_LIL_N_PROFILES,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,8,0,0)
            VtmCreateMenuDataRC(8, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_GENERAL}, TXT_LIL_N_GENERAL},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_MEETING}, TXT_LIL_N_MEETING},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_OUTDOOR}, TXT_LIL_N_OUTDOOR},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_SILENT}, TXT_LIL_N_SILENT},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_PERSONAL}, TXT_LIL_N_PERSONAL},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_HEADSET}, TXT_LIL_N_HEADSET},
                              {{MENUMODEL_ITEM_HIDE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_BLUETOOTH}, TXT_LIL_N_BLUETOOTH},
                              {{MENUMODEL_ITEM_HIDE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_POWER_SAVING}, TXT_LIL_N_POWER_SAVING}})
        WdgEnd(CLSID_VTMMENU,HeadSetSilentMenuData)
    WndEnd(PROFILEAPP_WND_MAINLIST_HEADSETSILENT)

	WndBegin(PROFILEAPP_WND_MAINLIST_NORMALSILENT)
        WdgBegin(CLSID_VTMMENU, NormalSilentMenuData)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_PROFILES,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,8,0,0})
            VtmCreateMenuDataRC(8, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_GENERAL}, TXT_LIL_N_GENERAL},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_MEETING}, TXT_LIL_N_MEETING},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_OUTDOOR}, TXT_LIL_N_OUTDOOR},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_SILENT}, TXT_LIL_N_SILENT},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_PERSONAL}, TXT_LIL_N_PERSONAL},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_HEADSET}, TXT_LIL_N_HEADSET},
                              {{MENUMODEL_ITEM_HIDE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_BLUETOOTH}, TXT_LIL_N_BLUETOOTH},
                              {{MENUMODEL_ITEM_HIDE, {SK_OPTION, SK_OK, SK_CANCEL}, MNU_PROFILE_POWER_SAVING}, TXT_LIL_N_POWER_SAVING}})
        WdgEnd(CLSID_VTMMENU, NormalSilentMenuData)
    WndEnd(PROFILEAPP_WND_MAINLIST_NORMALSILENT)

    WndBegin(PROFILEAPP_WND_OPTION)
        WdgBegin(CLSID_VTMOPTIONMENU,vtmOption)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,4})
            VtmCreateOptionMenuDataRC(4, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_SELECT, SK_CANCEL}, MNU_PROFILE_ACTIVATE}, TXT_OIL1_N_ACTIVATE},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_SELECT, SK_CANCEL}, MNU_PROFILE_PERSONALIZE}, TXT_OIL1_N_PERSONALIZE},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_SELECT, SK_CANCEL}, MNU_PROFILE_RESTORE}, TXT_OIL1_N_RESTORE},
                              {{MENUMODEL_ITEM_HIDE, {SK_SELECT, SK_SELECT, SK_CANCEL}, MNU_PROFILE_POWER_SAVING_INFO}, TXT_OIL1_N_HELP}})
        WdgEnd(CLSID_VTMOPTIONMENU,vtmOption)
    WndEnd(PROFILEAPP_WND_OPTION)

    WndBegin(PROFILEAPP_WND_EDITLIST)
        WdgBegin(CLSID_VTMMENU,RingToneMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuWdg)
					WdgMenuItemTextRC(PROFILEAPP_WND_EDITLIST_MENU_CNT, { TXT_LIL_N_VIBRATE, TXT_LIL_N_VOLUME, TXT_LIL_N_VOICE_CALLS,TXT_LIL_N_POWER_ON_TONE ,TXT_LIL_N_POWER_ON_TONE, TXT_LIL_N_POWER_OFF_TONE,TXT_LIL_N_POWER_OFF_TONE, TXT_LIL_N_MESSAGE, TXT_LIL_N_CALENDAR, TXT_LIL_N_ALARM, TXT_LIL_N_MISS_EVENT_REMINDER, TXT_LIL_N_KEYPAD_TONE, TXT_LIL_N_SLIDE_TONE, TXT_LIL_N_AUTO_ANSWER })
					WdgDynamicMenuItemInfRC(PROFILEAPP_WND_EDITLIST_MENU_CNT, {
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VIBRATE_TYPE,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VOLUME,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VOICE_CALLS,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_ON_TONE,0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_ON_SETTING,0},									  
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_OFF_TONE,0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_OFF_SETTING,0},									  
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_MESSAGING,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_CALENDAR,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_ALARM,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_MISS_EVENT_REMINDER,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_KEYPAD_TONE,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_SLIDE_TONE,0},
                                {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_AUTO_ANSWER,0}} )
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuWdg)
        WdgEnd(CLSID_VTMMENU,RingToneMenu)
    WndEnd(PROFILEAPP_WND_EDITLIST)
    WndBegin(PROFILEAPP_WND_POWERON_RINGTONE)
        WdgBegin(CLSID_VTMMENU,vtmPowerOnRingTone)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuOn)
					WdgMenuItemTextRC(2, {TXT_LIL_N_DEFAULT_RINGTONE,TXT_LIL_N_POWER_ON_TONE  })
					WdgDynamicMenuItemInfRC(2, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_ON_RINGTONE,0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_ON_TONE,0}} )
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuOn)
        WdgEnd(CLSID_VTMMENU,vtmPowerOnRingTone)
    WndEnd(PROFILEAPP_WND_POWERON_RINGTONE)

    WndBegin(PROFILEAPP_WND_POWEROFF_RINGTONE)
        WdgBegin(CLSID_VTMMENU,vtmPowerOffRingTone)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuOff)
					WdgMenuItemTextRC(2, {TXT_LIL_N_DEFAULT_RINGTONE,TXT_LIL_N_POWER_OFF_TONE  })
					WdgDynamicMenuItemInfRC(2, {
                    {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_OFF_RINGTONE,0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_POWER_OFF_TONE,0}} )
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuOff)
        WdgEnd(CLSID_VTMMENU,vtmPowerOffRingTone)
    WndEnd(PROFILEAPP_WND_POWEROFF_RINGTONE)

    WndBegin(PROFILEAPP_WND_VIBRATETYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,VibrateMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            VtmCreatePopUpSelectDataRC(3, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_VIBRATE_ON}, TXT_LIL_N_VIBRATE_ON},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_VIBRATE_OFF}, TXT_LIL_N_VIBRATE_OFF},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_VIBRATE_THEN_RING}, TXT_LIL_N_VIBRATE_THEN_RING} })
        WdgEnd(CLSID_VTMPOPUPSELECT,VibrateMenu)
    WndEnd(PROFILEAPP_WND_VIBRATETYPE)

    WndBegin(PROFILEAPP_WND_VOICECALLSRINGINGTYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,VoiceCallsRingMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,0,0})
            VtmCreatePopUpSelectDataRC(4, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_RINGING_TYPE_RINGING}, TXT_LIL_N_RINGING},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_RINGING_TYPE_RING_ONCE}, TXT_LIL_N_RING_ONCE},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_RINGING_TYPE_BEEP_ONCE}, TXT_LIL_N_BEEP},
                              {{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_CANCEL}, MNU_SETTING_RINGING_TYPE_SILENT}, TXT_LIL_N_SILENT} })
        WdgEnd(CLSID_VTMPOPUPSELECT,VoiceCallsRingMenu)
    WndEnd(PROFILEAPP_WND_VOICECALLSRINGINGTYPE)

    WndBegin(PROFILEAPP_WND_MESSAGETONE)
        WdgBegin(CLSID_VTMPOPUPSELECT,MessageToneMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            VtmCreatePopUpSelectDataRC(3, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_ON}, TXT_LIL_N_ON},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_OFF}, TXT_LIL_N_OFF},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_BEEP}, TXT_LIL_N_BEEP} })
        WdgEnd(CLSID_VTMPOPUPSELECT,MessageToneMenu)
    WndEnd(PROFILEAPP_WND_MESSAGETONE)

    WndBegin(PROFILEAPP_WND_CALENDARTONE)
        WdgBegin(CLSID_VTMPOPUPSELECT,CalendarToneMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            VtmCreatePopUpSelectDataRC(3, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_ON}, TXT_LIL_N_ON},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_OFF}, TXT_LIL_N_OFF},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_BEEP}, TXT_LIL_N_BEEP} })
        WdgEnd(CLSID_VTMPOPUPSELECT,CalendarToneMenu)
    WndEnd(PROFILEAPP_WND_CALENDARTONE)

    WndBegin(PROFILEAPP_WND_ALARMTONE)
        WdgBegin(CLSID_VTMPOPUPSELECT,AlarmToneMenu)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0})
            VtmCreatePopUpSelectDataRC(3, {
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_ON}, TXT_LIL_N_ON},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_OFF}, TXT_LIL_N_OFF},
                              {{MENUMODEL_ITEM_VISABLE, {SK_SELECT, SK_OK, SK_BACK}, MNU_COM_ONOFFBEEP_BEEP}, TXT_LIL_N_BEEP} })
        WdgEnd(CLSID_VTMPOPUPSELECT,AlarmToneMenu)
    WndEnd(PROFILEAPP_WND_ALARMTONE)

#ifdef __DUAL_PROFILE_MMI__
    WndBegin(PROFILEAPP_WND_VOICECALLS)
        WdgBegin(CLSID_VTMMENU,vtmVoiceCall)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenu)
					WdgMenuItemTextRC(3, { TXT_LIL_N_SIM1_DEFAULT_RINGTONE,TXT_LIL_N_SIM2_DEFAULT_RINGTONE, TXT_LIL_N_RING_TYPE })
					WdgDynamicMenuItemInfRC(3, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VOICE_CALLS_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_SIM2_VOICE_CALLS_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VOICE_CALLS_RINGING_TYPE, 0} })
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenu)
        WdgEnd(CLSID_VTMMENU,vtmVoiceCall)
    WndEnd(PROFILEAPP_WND_VOICECALLS)

    WndBegin(PROFILEAPP_WND_MESSAGING)
        WdgBegin(CLSID_VTMMENU,vtmMessage)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuMsg)
					WdgMenuItemTextRC(3, { TXT_LIL_N_SIM1_DEFAULT_RINGTONE,TXT_LIL_N_SIM2_DEFAULT_RINGTONE, TXT_LIL_N_MSG_TONE })
					WdgDynamicMenuItemInfRC(3, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_MESSAGE_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_SIM2_MESSAGE_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_MESSAGE_TONE, 0} })
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuMsg)
        WdgEnd(CLSID_VTMMENU,vtmMessage)
    WndEnd(PROFILEAPP_WND_MESSAGING)
#else //!__DUAL_PROFILE_MMI__
    WndBegin(PROFILEAPP_WND_VOICECALLS)
        WdgBegin(CLSID_VTMMENU,vtmVoiceCall)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenu)
					WdgMenuItemTextRC(2, { TXT_LIL_N_DEFAULT_RINGTONE, TXT_LIL_N_RING_TYPE })
					WdgDynamicMenuItemInfRC(2, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VOICE_CALLS_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_VOICE_CALLS_RINGING_TYPE, 0} })
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenu)
        WdgEnd(CLSID_VTMMENU,vtmVoiceCall)
    WndEnd(PROFILEAPP_WND_VOICECALLS)

    WndBegin(PROFILEAPP_WND_MESSAGING)
        WdgBegin(CLSID_VTMMENU,vtmMessage)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuMsg)
					WdgMenuItemTextRC(2, { TXT_LIL_N_DEFAULT_RINGTONE, TXT_LIL_N_MSG_TONE })
					WdgDynamicMenuItemInfRC(2, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_MESSAGE_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_MESSAGE_TONE, 0} })
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuMsg)
        WdgEnd(CLSID_VTMMENU,vtmMessage)
    WndEnd(PROFILEAPP_WND_MESSAGING)
#endif // __DUAL_PROFILE_MMI__

    WndBegin(PROFILEAPP_WND_CALENDAR)
        WdgBegin(CLSID_VTMMENU,vtmCalendar)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuCal)
					WdgMenuItemTextRC(2, { TXT_LIL_N_DEFAULT_RINGTONE, TXT_LIL_N_CAL_TONE })
					WdgDynamicMenuItemInfRC(2, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_CALENDAR_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_CALENDAR_TONE, 0} })
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuCal)
        WdgEnd(CLSID_VTMMENU,vtmCalendar)
    WndEnd(PROFILEAPP_WND_CALENDAR)

	WndBegin(PROFILEAPP_WND_ALARM)
        WdgBegin(CLSID_VTMMENU,vtmAlarm)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_NO_TITLE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
				VTMWdgBegin (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuAlarm)
					WdgMenuItemTextRC(2, { TXT_LIL_N_DEFAULT_RINGTONE, TXT_LIL_N_ALARM_TONE })
					WdgDynamicMenuItemInfRC(2, {
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_ALARM_MELODY, 0},
									  {MENUMODEL_ITEM_VISABLE, {SK_CHANGE, SK_OK, SK_BACK}, MNU_SETTING_ALARM_TONE, 0} })
					WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
				VTMWdgEnd (CLSID_MENUWIDGET, VTM_CREATE_MENU_MENU_WDG, VtmMenuAlarm)
        WdgEnd(CLSID_VTMMENU,vtmAlarm)
    WndEnd(PROFILEAPP_WND_ALARM)

    WndBegin(PROFILEAPP_WND_VOLUME)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CANCEL})
        WndSetTitleRC({IMG_NULL_ID,TXT_LIL_N_VOLUME})
        WndSetBgColorRC(DEF_THM_PROFILEAPP_BG)
        WndSetStatusBarVisibleRC(FALSE)
#ifdef __APP_MMI_SMALLROM__
        WdgBegin(CLSID_IMAGEWIDGET,VolumeBGImageWidget)
            WdgImageCreateForWndRC({{SETTINGAPP_LAYOUT_VOLUME_BGIMAGEWIDGET_POS_X,SETTINGAPP_LAYOUT_VOLUME_BGIMAGEWIDGET_POS_Y},{SETTINGAPP_LAYOUT_VOLUME_BGIMAGEWIDGET_WIDTH,SETTINGAPP_LAYOUT_VOLUME_BGIMAGEWIDGET_HEIGHT},IMAGE_STYLE_COMMON,{TRUE,NOTICE_IMG_BG}})
            WdgImageSetDataByIDRC(NOTICE_IMG_BG)
        WdgEnd(CLSID_IMAGEWIDGET,VolumeBGImageWidget)
#endif
    WndEnd(PROFILEAPP_WND_VOLUME)

    WndBegin(PROFILEAPP_WND_FILEMGR)
        WdgBegin(CLSID_VTMPOPUPSELECT,vtmPopUp)
            VtmCreatePopUpSelectRC( {NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0} )
            VtmCreatePopUpSelectDataRC(2, {{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_SETTING_USE_SYSTEM_FILE},TXT_LIL_N_USE_SYSTEM_FILE},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_SETTING_SELECT_FILE},TXT_LIL_N_SELECT_FILE}} )
        WdgEnd(CLSID_VTMPOPUPSELECT,vtmPopUp)
    WndEnd(PROFILEAPP_WND_FILEMGR)
ApEnd(RS,CLSID_PROFILEAPP)
