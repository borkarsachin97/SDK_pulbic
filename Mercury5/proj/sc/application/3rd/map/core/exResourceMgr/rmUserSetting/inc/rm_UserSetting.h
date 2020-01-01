/*-----------------------------------------------------------------------------
 *                                                                           
 * Copyright (c) 2009 MStar Semiconductor, Inc.  All rights reserved.
 *                                                                          
 *-----------------------------------------------------------------------------
 * FILE
 *      rm_UserSetting.h
 *
 * DESCRIPTION
 *      This file provides the local functions to store user configurations
 *      If you want to add a new field in user setting,
 *      Please search keywork ADD_NEW_SETTING and following steps.
 *
 * HISTORY
 *      2009.03.01       Donald Hung     Initial Version
 *----------------------------------------------------------------------------- 
 */

#ifndef _rmUserSetting_h_
#define _rmUserSetting_h_

/*------------------------------------------------------------------------------
    Include Files
-------------------------------------------------------------------------------*/
#include "fw_std.h"
#include "fw_util.h"
//#include "rt_api.h"

/**
 * define of setting->city name
 */
typedef enum
{
    T_SETTING_CITY_NAME_BEIJING = 0,  // �_��
    T_SETTING_CITY_NAME_TIANJIN,      // �Ѭz
    T_SETTING_CITY_NAME_HEBEI,        // �e�_
    T_SETTING_CITY_NAME_SHANXI,       // �s��
    T_SETTING_CITY_NAME_NEIMONGOL,    // ���X�j
    T_SETTING_CITY_NAME_LIAONING,     // ���
    T_SETTING_CITY_NAME_JILIN,        // �N�L
    T_SETTING_CITY_NAME_HEILONGJIANG, // ���s��
    T_SETTING_CITY_NAME_SHANGHAI,     // �W��
    T_SETTING_CITY_NAME_JIANGSU,      // ��Ĭ
    T_SETTING_CITY_NAME_ZHEJIANG,     // ����
    T_SETTING_CITY_NAME_ANHUI,        // �w��
    T_SETTING_CITY_NAME_FUJIAN,       // �֫�
    T_SETTING_CITY_NAME_JIANGXI,      // ����
    T_SETTING_CITY_NAME_SHANDONG,     // �s�F
    T_SETTING_CITY_NAME_HENAN,        // �e�n
    T_SETTING_CITY_NAME_HUBEI,        // ��_
    T_SETTING_CITY_NAME_HUNAN,        // ��n
    T_SETTING_CITY_NAME_GUANGDONG,    // �s�F
    T_SETTING_CITY_NAME_GUANGXI,      // �s��
    T_SETTING_CITY_NAME_HAINAN,       // ���n
    T_SETTING_CITY_NAME_CHONGQING,    // ���y
    T_SETTING_CITY_NAME_SICHUAN,      // �|�t
    T_SETTING_CITY_NAME_GUIZHOU,      // �Q�{
    T_SETTING_CITY_NAME_YUNNAN,       // ���n
    T_SETTING_CITY_NAME_TIBET,        // ����
    T_SETTING_CITY_NAME_SHAANXI,      // �E��
    T_SETTING_CITY_NAME_GANSU,        // �̵�
    T_SETTING_CITY_NAME_QINGHAI,      // �C��
    T_SETTING_CITY_NAME_NINGXIA,      // ��L
    T_SETTING_CITY_NAME_XINJIANG,     // �sæ
    T_SETTING_CITY_NAME_HONGKONG,     // ����
    T_SETTING_CITY_NAME_MACAU,        // �D��
    T_NUM_OF_CITY_NAME
} T_SETTING_CITY_NAME;


/**
 * define of setting->POI on map
 */
typedef enum
{
    T_SETTING_POIONMAP_CATEGORY_GOVERNMENT = 0,  // �F������
    T_SETTING_POIONMAP_CATEGORY_EDUCATION,       // �ǮձШ|
    T_SETTING_POIONMAP_CATEGORY_HOSPITAL,        // �������@
    T_SETTING_POIONMAP_CATEGORY_RESTAURANT,      // �\�U�Ʋz
    T_SETTING_POIONMAP_CATEGORY_STORE,           // �ө��渹
    T_SETTING_POIONMAP_CATEGORY_ENTERTAINMENT,   // �𶢮T��
    T_SETTING_POIONMAP_CATEGORY_TRAFFIC,         // �B���q
    T_SETTING_POIONMAP_CATEGORY_SPORTS,          // �B�ʳ]�I
    T_SETTING_POIONMAP_CATEGORY_PUBLIC,          // ���@�A��
    T_SETTING_POIONMAP_CATEGORY_BUILDING,        // �j�Ӥp��
    T_NUM_OF_POIONMAP_CATEGORY
} T_SETTING_POIONMAP_CATEGORY;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_CENTRAL = 0,       // �����F��
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_PROVINCE,          // �ٯž��c
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_DISTRICT,          // �ϰ���c
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_POLICE,            // ĵ�
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_FIREDEPARTMENT,    // ������
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_FOREIGNINSTITUTE,  // �~���ƳB
    T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT_OTHER,             // ��L�F������
    T_NUM_OF_POIONMAP_CATEGORY2_GOVERNMENT
} T_SETTING_POIONMAP_CATEGORY2_GOVERNMENT;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_EDUCATION_SCHOOL = 0,         // �����F��
    T_SETTING_POIONMAP_CATEGORY2_EDUCATION_CRAMMINGSCHOOL,     // �ٯž��c
    T_NUM_OF_POIONMAP_CATEGORY2_EDUCATION
} T_SETTING_POIONMAP_CATEGORY2_EDUCATION;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_HOSPITAL_HEALTHCENTER = 0,    // �O������
    T_SETTING_POIONMAP_CATEGORY2_HOSPITAL_CLINIC,              // ��|�E��
    T_SETTING_POIONMAP_CATEGORY2_HOSPITAL_NERSINGCARE,         // ���@
    T_SETTING_POIONMAP_CATEGORY2_HOSPITAL_PHARMACY,            // �ħ�
    T_SETTING_POIONMAP_CATEGORY2_HOSPITAL_ANIMALHOSPITAL,      // �~��|
    T_NUM_OF_POIONMAP_CATEGORY2_HOSPITAL
} T_SETTING_POIONMAP_CATEGORY2_HOSPITAL;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_RESTAURANT_RESTAURANT = 0,    // �\�U
    T_SETTING_POIONMAP_CATEGORY2_RESTAURANT_FAMILYRESTAURANT,  // �a�x�\�U
    T_SETTING_POIONMAP_CATEGORY2_RESTAURANT_FASTFOOD,          // �t����
    T_SETTING_POIONMAP_CATEGORY2_RESTAURANT_SNACKBAR,          // ��a�p�Y
    T_NUM_OF_POIONMAP_CATEGORY2_RESTAURANT
} T_SETTING_POIONMAP_CATEGORY2_RESTAURANT;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_STORE_DEPARTMENTSTORE = 0,    // �ʳf���q
    T_SETTING_POIONMAP_CATEGORY2_STORE_CONVENIENCESTORE,       // �K�Q�ө�
    T_SETTING_POIONMAP_CATEGORY2_STORE_SUPERMARKET,            // �W�ť���
    T_SETTING_POIONMAP_CATEGORY2_STORE_FUNERALHALL,            // �l���]
    T_SETTING_POIONMAP_CATEGORY2_STORE_ESTATEAGENCY,           // �򤶾��c
    T_SETTING_POIONMAP_CATEGORY2_STORE_MARKET,                 // ����/�]��
    T_SETTING_POIONMAP_CATEGORY2_STORE_BOOKSTORE,              // �ѩ�
    T_SETTING_POIONMAP_CATEGORY2_STORE_NEWSPAPER,              // ����
    T_SETTING_POIONMAP_CATEGORY2_STORE_TVSTATION,              // �q���x
    T_SETTING_POIONMAP_CATEGORY2_STORE_PUBLISHCOMPANY,         // �X����
    T_SETTING_POIONMAP_CATEGORY2_STORE_INSURANCECOMPANY,       // �O�I���q
    T_SETTING_POIONMAP_CATEGORY2_STORE_BOUTIQUE,               // ��~��
    T_SETTING_POIONMAP_CATEGORY2_STORE_COFFEESHOP,             // �@���U
    T_SETTING_POIONMAP_CATEGORY2_STORE_FACTORY,                // �u�t
    T_SETTING_POIONMAP_CATEGORY2_STORE_STOCKMARKET,            // ����
    T_SETTING_POIONMAP_CATEGORY2_STORE_OTHERSTORE,             // ��L�ө�
    T_NUM_OF_POIONMAP_CATEGORY2_STORE
} T_SETTING_POIONMAP_CATEGORY2_STORE;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_PARK = 0,       // ����
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_TOURISTFARM,    // �[���A��
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_ZOOBOTANICGARDEN,// �ʪ���/�Ӫ���
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_CEMETERY,       // �Ӷ�
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_OTHERGREENBELT, // ��L��a
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_MESEUM,         // �ժ��]
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_LIBRARY,        // �Ϯ��]
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_CULTURECENTER,  // ��Ƥ���
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_FAMILYTEMPLE,   // �v��
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_TEMPLECHURCH,   // �q/�а�
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_HISTORICALSITE, // �j��
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_AQUARIUM,       // �����]/���v����
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_OTHERCULTURAL,  // ��L��Ƴ]�I
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_SIGHTSEESPOT,   // �[�����I
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_MUSEMENTPLACE,  // �T�ֳ���
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_LOCALPRODUCT,   // ��a�p�Y
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_HOTEL,          // �s��/���]
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_BOWLINGCENTER,  // �O�ֲy�]
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_KARAOKE,        // �d��OK
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_CINEMA,         // �q�v�|
    T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT_OTHERLEISURE,   // ��L�𶢳]�I
    T_NUM_OF_POIONMAP_CATEGORY2_ENTERTAINMENT
} T_SETTING_POIONMAP_CATEGORY2_ENTERTAINMENT;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_GASSTATION = 0,       // �[�o��
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_CARDEALER,            // �T���g�P��
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_CARREPAIR,            // �T������
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_AIRPORT,              // ����
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_FERRYTERMINAL,        // ����X�Y
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_BUSTERMINAL,          // �ڤh��
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_PUBLICSTATION,        // ���毸
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_RAILWAYSTATION,       // ������
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_MRTSTATION,           // �a�K��
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_HIGHWAYRAMP,          // �����`�D
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_HIGHWAYINTERCHANGE,   // ������׳B
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_HIGHWAY,              // ���t����
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_HIGHWAYSERVICEAREA,   // �𮧯�
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_PARKINGLOT,           // ������
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_TOLLGATE,             // ���O��
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_TOWCENTER,            // ��Q����
    T_SETTING_POIONMAP_CATEGORY2_TRAFFIC_OTHERTRANSPORT,       // ��L��q�]�I
    T_NUM_OF_POIONMAP_CATEGORY2_TRAFFIC
} T_SETTING_POIONMAP_CATEGORY2_TRAFFIC;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_SPORTS_BASEBALLFIELD = 0,     // �βy��
    T_SETTING_POIONMAP_CATEGORY2_SPORTS_GYMNASIUM,             // ��|�]
    T_SETTING_POIONMAP_CATEGORY2_SPORTS_SWIMMINGPOOL,          // ��a��
    T_SETTING_POIONMAP_CATEGORY2_SPORTS_GOLFCOURSE,            // �����Ҳy��
    T_SETTING_POIONMAP_CATEGORY2_SPORTS_OTHERSPORT,            // ��L�B�ʳ]�I
    T_NUM_OF_POIONMAP_CATEGORY2_SPORTS
} T_SETTING_POIONMAP_CATEGORY2_SPORTS;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_WATERWORKS = 0,        // �ۨӤ����q
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_POWERCOMPANY,          // �q�O���q
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_GASCOMPANY,            // �ѵM�𤽥q
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_TELECOMCOMPANY,        // �q�H���q
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_BANK,                  // �Ȧ�
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_ATM,                   // ATM
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_POSTOFFICE,            // �l��
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_TOILET,                // ���Z
    T_SETTING_POIONMAP_CATEGORY2_PUBLIC_OTHER,                 // ��L
    T_NUM_OF_POIONMAP_CATEGORY2_PUBLIC
} T_SETTING_POIONMAP_CATEGORY2_PUBLIC;


typedef enum
{
    T_SETTING_POIONMAP_CATEGORY2_BUILDING_BUILDING = 0,        // �j��
    T_SETTING_POIONMAP_CATEGORY2_BUILDING_HOUSE,               // ��v�p��
    T_NUM_OF_POIONMAP_CATEGORY2_BUILDING
} T_SETTING_POIONMAP_CATEGORY2_BUILDING;


/**
 * define of setting->map color
 */
typedef enum
{
    T_SETTING_MAP_COLOR_LIGHT = 0,    // light
    T_SETTING_MAP_COLOR_DARK,         // dark
    T_NUM_OF_MAP_COLOR
} T_SETTING_MAP_COLOR;


/**
 * define of setting->GPS setting
 */
typedef enum
{
    T_SETTING_GPS_SETTING_START = 0,  // turn on when start
    T_SETTING_GPS_SETTING_NEED,       // turn on when need
    T_NUM_OF_GPS_SETTING
} T_SETTING_GPS_SETTING;


/**
 * define of My Favorite
 */
#define NUM_FAVORITE_NAME     32
#define NUM_FAVORITE_PHONE    16
#define NUM_FAVORITE_ADDRESS  64
#define NUM_FAVORITE_NOTE     128

typedef enum
{
    T_FAVORITE_CATEGORY_MYFAMILY = 0, // My family
    T_FAVORITE_CATEGORY_MYFRIENDS,    // My friends
    T_FAVORITE_CATEGORY_RESTAURANT,   // Restaurant
    T_FAVORITE_CATEGORY_TRAFFIC,      // Traffic
    T_FAVORITE_CATEGORY_ENTERTAINMENT,// Entertainment
    T_FAVORITE_CATEGORY_SHOPPING,     // Shopping
    T_FAVORITE_CATEGORY_SIGHT,        // Sight
    T_FAVORITE_CATEGORY_OTHER,        // Other
    T_NUM_OF_FAVORITE_CATEGORY
} T_FAVORITE_CATEGORY;

typedef struct  Location_s
{
    Vertex_st           vertex;
    PU16                pName;
    PU16                pPhone;
    PU16                pAddress;
    PU16                pNote;
    MBOOL             bPOI;                                      
    S32                  s32POIID;                             
    U8                    bPOIType;
} Location_st, *pLocation_st;


/**
 * define of History
 */
 

/**
 * define of section
 */
typedef enum
{
    eSettingSecNameNotDef = -1,
    eSettingSecNameSettings = 0,
    eSettingSecNameMyFamily = 1,
    eSettingSecNameMyFriends,
    eSettingSecNameRestaurant,
    eSettingSecNameTraffic,
    eSettingSecNameEntertainment,
    eSettingSecNameShopping,
    eSettingSecNameSight,
    eSettingSecNameOther,
    eSettingSecNameMyLocationHistory,
    eSettingSecNamePOIHistory,
    eNumOfSettingSectionName
} SettingSectionName_t;


/**
 * Definition of LBS cookies
 */
typedef struct LBSCookies_URLHistory_TAG
{
    boolean     bLBSURL_IsReDirected;
    PU16        pLBSURL;
    PU16        pLBSURL_Redirected;
    U32         u32ExpTimeInSec_UTC;
}LBSCookies_URLHistory_st, *pLBSCookies_URLHistory_st;

typedef struct LBSCookies_CacheFileMang_TAG
{
    PU16    pCacheFileURL;
    PU16    pCacheFileXmlAssoc;
}LBSCookies_CacheFileMang_st, *pLBSCookies_CacheFileMang_st;
typedef enum
{
    eLBSCookiesSecNameNotDef = -1,
    eLBSCookiesSecNameUrlHisoty = 0,
    eLBSCookiesSecNameCacheFileMang = 1,
    eNumOfLBSCookiesSectionName
}LBSCookiesSectionName_t;

/**
 * define of exported functions
 */
#ifdef __cplusplus
extern "C"
{
#endif

MBOOL rmUserSettingInit(PU16 pLBSCachePath, const PS8 pLBSFileFormat);
MVOID rmUserSettingEnd(MVOID);
MVOID rmUserSettingSave(MVOID);
MVOID rmUserSettingRestoreDefault(MVOID);

MBOOL rmUserSettingLoadConf(MVOID);
MVOID rmUserSettingSaveConf(MVOID);
MVOID rmUserSettingRestoreDefaultConf(MVOID);
MBOOL rmUserSettingLoadFavorite(SettingSectionName_t eSecName);
MVOID rmUserSettingSaveFavorite(MVOID);
MVOID rmUserSettingRestoreDefaultFavorite(SettingSectionName_t eSecName);
MBOOL rmUserSettingLoadHistory(SettingSectionName_t eSecName);
MVOID rmUserSettingSaveHistory(MVOID);
MVOID rmUserSettingRestoreDefaultHistory(SettingSectionName_t eSecName);

MBOOL rmUserSettingAddFavorite(SettingSectionName_t eSecName, Vertex_st vertex, PU16 sName, PU16 sPhone, PU16 sAddress, PU16 sNote, MBOOL bPOI, S32 s32POIID);
MBOOL rmUserSettingDelFavorite(SettingSectionName_t eSecName, S32 s32Index);
MBOOL rmUserSettingEditFavoriteByIndex(SettingSectionName_t eSecName, S32 s32Index, Vertex_st vertex, PU16 sName, PU16 sPhone, PU16 sAddress, PU16 sNote);
S32 rmUserSettingGetFavorites(SettingSectionName_t eSecName, pLocation_st *pArray);
pLocation_st rmUserSettingGetFavoriteByIndex(SettingSectionName_t eSecName, S32 s32Index);
MBOOL rmUserSettingSetFavoriteByIndex(SettingSectionName_t eSecName, S32 s32Index, pVertex_st pVertex, PU16 sName, PU16 sPhone, PU16 sAddress, PU16 sNote);

MBOOL rmUserSettingAddHistory(SettingSectionName_t eSecName, Vertex_st vertex, PU16 sName, PU16 sPhone, PU16 sAddress, PU16 sNote, MBOOL bPOI, S32 s32POIID);
MBOOL rmUserSettingDelHistory(SettingSectionName_t eSecName, S32 s32Index);
S32 rmUserSettingGetHistory(SettingSectionName_t eSecName, pLocation_st *pArray);
pLocation_st rmUserSettingGetHistoryByIndex(SettingSectionName_t eSecName, S32 s32Index);

T_SETTING_CITY_NAME rmUserSettingGetCityName(MVOID);
MVOID rmUserSettingSetCityName(T_SETTING_CITY_NAME tCityName);

U32 rmUserSettingGetPOIOnMap(MVOID);
MVOID rmUserSettingSetPOIOnMap(U32 U32SettingPOIOnMap);

T_SETTING_MAP_COLOR rmUserSettingGetMapColor(MVOID);
MVOID rmUserSettingSetMapColor(T_SETTING_MAP_COLOR tSettingMapColor);

T_SETTING_GPS_SETTING rmUserSettingGetGPSSetting(MVOID);
MVOID rmUserSettingSetGPSSetting(T_SETTING_GPS_SETTING tSettingGPSSetting);

MVOID rmUserSettingSetLastLocation(S32 s32X, S32 s32Y);
Vertex_st rmUserSettingGetLastLocation(MVOID);

MBOOL rmLBSCookiesInit(MVOID);
MVOID rmLBSCookiesSave(MVOID);
MVOID rmLBSCookiesEnd(MVOID);
MBOOL rmLBSCookiesAddUrlHistory(boolean bIsReDirected, PU16 sURL, PU16 sURL_ReDirected, U32 u32ExpTimeInSec_UTC);
MBOOL rmLBSCookiesDelUrlHistoryByIndex(U32 u32Index);
MBOOL rmLBSCookiesDelUrlHistoryByUrl(PU16 sUrl);
pLBSCookies_URLHistory_st rmLBSCookiesGetUrlHistoryByIndex(U32 u32Index);
pLBSCookies_URLHistory_st rmLBSCookiesGetUrlHistoryByUrl(PU16 sUrl, U32 *u32Index);
MVOID rmLBSCookiesCleanUpUrlHistoryByTime(U32 u32CurrTimeInSec_UTC);
MBOOL rmLBSCookiesAddCacheFileMang(PU16 pCacheFileURL, PU16 pCacheFileXmlAssoc);
MBOOL rmLBSCookiesDelCacheFileByIndex(U32 u32Index);
pLBSCookies_CacheFileMang_st rmLBSCookiesGetCacheFileIndexByUrl(PU16 pUrl, U32 *u32Index);
pLBSCookies_CacheFileMang_st rmLBSCookiesGetCacheFileIndexByXmlAssoc(PU16 pXmlAssocUrl, U32 *u32Index);
#ifdef __cplusplus
}
#endif


#endif //_rmUserSetting_h_
