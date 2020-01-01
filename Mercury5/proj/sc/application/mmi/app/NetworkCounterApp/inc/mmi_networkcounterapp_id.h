#ifndef __MMI_NETWORKCOUNTERAPP_ID_H__
#define __MMI_NETWORKCOUNTERAPP_ID_H__

typedef enum NETWORKCOUNTERWndId_e_
{
    NETWORKCOUNTER_WND_COUNTERLIST = WND_ID_APP_BASE,
    NETWORKCOUNTER_WND_DUAL_SIM,
    NETWORKCOUNTER_WND_COUNTER,
} NETWORKCOUNTERWndId_e;

typedef enum
{
    NETWORKCOUNTER_VIEW_BEGIN = APP_WDG_START,
    NETWORKCOUNTER_VIEW_END
}NETWORKCOUNTERView_e;

typedef enum
{
    MNU_NETWORKCOUNTER_CELL_COUNTER = 0,
    MNU_NETWORKCOUNTER_WLAN_COUNTER,
    MNU_NETWORKCOUNTER_LAST_SENT,
    MNU_NETWORKCOUNTER_LAST_RECEIVED,
    MNU_NETWORKCOUNTER_ALL_SENT,
    MNU_NETWORKCOUNTER_ALL_RECEIVED,
    MNU_NETWORKCOUNTER_RESET_ALL,
}NETWORKCOUNTERMenuId_e;

#endif //__MMI_NETWORKCOUNTERAPP_ID_H__
