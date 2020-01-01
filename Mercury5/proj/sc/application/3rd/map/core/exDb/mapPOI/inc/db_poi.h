/*-----------------------------------------------------------------------------
 *                                                                           
 * Copyright (c) 2009 MStar Semiconductor, Inc.  All rights reserved.
 *                                                                          
 *-----------------------------------------------------------------------------
 * FILE
 *      db_poi.h
 *
 * DESCRIPTION
 *      This file provides the interfaces to traverse, query, search POI information.
 *
 * HISTORY
 *      2009.05.07       Wolloh Chou       Version 1.0                                     
 *----------------------------------------------------------------------------- 
 */
#ifndef DB_POI_H
#define DB_POI_H

/*------------------------------------------------------------------------------
    Include Files
-------------------------------------------------------------------------------*/
#include "fw_std.h"

/*------------------------------------------------------------------------------
    EXTERN definition
-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
    Constant
-------------------------------------------------------------------------------*/
#define DBPOI_INVALID_POIID     0xFFFFFFFF /* defines invalid POI id */
#define DB_POI_NEARBY_RESULT_MNUM           30             /* defines the max number for nearby search */
#define DB_POI_MAX_KEYWORD_RESULT           50   /* max number of the search result */
/*------------------------------------------------------------------------------
    Data Type
-------------------------------------------------------------------------------*/

/* POI district enum*/
typedef enum POIDistrict_e
{
    E_POI_DISTRICT_UNKNOWN = -1,
    E_POI_DISTRICT_ANHUISHENG = 0,                    /* �w���� */
    E_POI_DISTRICT_BEILJINGSHI,                       /* �_�ʥ� */
    E_POI_DISTRICT_GANSUSHENG,                        /* �̵¬� */
    E_POI_DISTRICT_HEBEISHENG,                        /* �e�_�� */
    E_POI_DISTRICT_HENANSHENG,                        /* �e�n�� */
    E_POI_DISTRICT_HUBEISHENG,                        /* ��_�� */
    E_POI_DISTRICT_HUNANSHENG,                        /* ��n�� */
    E_POI_DISTRICT_JILINSHENG,                        /* �N�L�� */
    E_POI_DISTRICT_TIANJINSHI,                        /* �Ѭz�� */
    E_POI_DISTRICT_FUJIANSHENG,                       /* �֫ج� */
    E_POI_DISTRICT_HAINANSHENG,                       /* ���n��(10) */
    E_POI_DISTRICT_SHANGHAISHI,                       /* �W���� */
    E_POI_DISTRICT_SHANXISHENG,                       /* �s��� */
    E_POI_DISTRICT_YUNNANSHENG,                       /* ���n�� */
    E_POI_DISTRICT_CHONGQINGSHI,                      /* ���y�� */
    E_POI_DISTRICT_GUIZHOUSHENG,                      /* �Q�{�� */
    E_POI_DISTRICT_JIANGSUSHENG,                      /* ��Ĭ�� */
    E_POI_DISTRICT_JIANGXISHENG,                      /* ����� */
    E_POI_DISTRICT_QINGHAISHENG,                      /* �C���� */
    E_POI_DISTRICT_SHANNXISHENG,                      /* ����� */
    E_POI_DISTRICT_SICHUANSHENG,                      /* �|�t��(20) */
    E_POI_DISTRICT_LIAONINGSHENG,                     /* ���� */
    E_POI_DISTRICT_SHANDONGSHENG,                     /* �s�F�� */
    E_POI_DISTRICT_XIZANGZIZHIQU,                     /* ���æ۪v�� */
    E_POI_DISTRICT_ZHEJIANGSHENG,                     /* ������ */
    E_POI_DISTRICT_GUANGDONGSHENG,                    /* �s�F�� */
    E_POI_DISTRICT_NEIMENGGUZIZHIQU,                  /* ���X�j�۪v�� */
    E_POI_DISTRICT_HEILONGJIANGSHENG,                 /* ���s���� */
    E_POI_DISTRICT_NINGXIAHUIZUZIZHIQU,               /* ��L�^�ڦ۪v�� */
    E_POI_DISTRICT_AOMENTEBIEXINGZHENGQU,             /* �D���S�O��F�� */

    E_POI_DISTRICT_GUANGXIZHUANGZUZIZHIQU,            /* �s�觧�ڦ۪v��(30) */
    E_POI_DISTRICT_XINJIANGWEIWUERZIZHIQU,            /* �sæ���^���۪v�� */
    E_POI_DISTRICT_XIANGGANGTEBIEXINGZHENGQU,         /* ����S�O��F�� */
    E_POI_NUM_OF_DISTRICT,                                  /* (33) */
    E_POI_DISTRICT_ALL
} POIDistrict_et;

/*POI group enum*/
typedef enum POIGroup_e
{
    E_POI_GROUP_UNKNOWN = -1,
    E_POI_GROUP_LANDMARK = 0,                         /* �a�W���� */
    E_POI_GROUP_GOVERNMENT_INDUSTRY,                  /* ���~�F������ */
    E_POI_GROUP_CULTURE_EDUCATION,                    /* ��ƱШ| */
    E_POI_GROUP_TRAFFIC_CAR,                          /* ��q�T�� */
    E_POI_GROUP_FINANCE,                              /* ���� */
    E_POI_GROUP_FOOD,                                 /* �\�U */
    E_POI_GROUP_SHOPPING,                             /* �ʪ� */
    E_POI_GROUP_HEALTH_MEDICINE,                      /* ���d���� */
    E_POI_GROUP_TOUR,                                 /* �ȹC */
    E_POI_GROUP_LEISURE_ENTERTAINMENT_SPORT,          /* �𶢮T�ֹB�� */
    E_POI_GROUP_ACCOMMODATION,                        /* ��J */
    E_POI_GROUP_PUBLIC_SERVICE,                       /* ���@�A�� */
    E_POI_NUM_OF_GROUP,                               /* (12)*/
    E_POI_GROUP_ALL

} POIGroup_et;

/*POI type enum*/
typedef enum POIType_e
{
    E_POI_TYPE_UNKNOWN = -1,
    /* E_POI_GROUP_LANDMARK */
    E_POI_TYPE_PLACE_NAME_CAPITAL = 0,                /* ��a���� */
    E_POI_TYPE_PLACE_NAME_PROVINCIAL,                 /* �ٯŦ�F���� */
    E_POI_TYPE_PLACE_NAME_PREFECTURE,                 /* ���Ŧ�F���� */
    E_POI_TYPE_PLACE_NAME_COUNTY,                     /* �Ͽ��Ŧ�F���� */
    E_POI_TYPE_PLACE_NAME_TOWN,                       /* �m��Ŧ�F���� */
    E_POI_TYPE_PLACE_NAME_VILLAGE,                    /* ���Ŧ�F���� */
    E_POI_TYPE_PLACE_NAME_SPECIFIC_AREA,              /* �S�w�ϰ� */
    E_POI_TYPE_OTHER_LANDMARK,                        /* ��L�a�� */
    E_POI_TYPE_MANSION,                               /* �j�H */
    E_POI_TYPE_RESIDENCE_COMMINITY,                   /* ��v�p�� */

    /* E_POI_GROUP_GOVERMENT_INDUSTRY */
    E_POI_TYPE_GOBERNMENT_AGENCIES,                   /* �F������(10) */
    E_POI_TYPE_FIRE_SERVICE_DEPARTMENT,               /* �������� */
    E_POI_TYPE_JUDICIAL_AUTHORITY,                    /* �q�k���� */
    E_POI_TYPE_NOTARY_AGENCY,                         /* �������� */
    E_POI_TYPE_CUSTOM,                                /* ���� */
    E_POI_TYPE_FOREIGN_AFFAIRS_INSTITUTION,           /* �A�~���� */
    E_POI_TYPE_RESIDENT_AGENCY,                       /* �n�~����(16) */
    E_POI_TYPE_SOCIAL_ORGANIZATION,                   /* ���|���� */
    E_POI_TYPE_COMPANY,                               /* ���q���~ */

    /* E_POI_GROUP_CULTURE_EDUCATION */
    E_POI_TYPE_LIBRARY,                               /* �Ϯ��](19) */
    E_POI_TYPE_MUSEUM,                                /* �ժ��] */
    E_POI_TYPE_CULTURE_PLACE,                         /* ��Ƴ]�I */
    E_POI_TYPE_CULTURE_CENTER,                        /* ��Ƥ��� */
    E_POI_TYPE_SCHOOL,                                /* �Ǯ� */
    E_POI_TYPE_OTHER_CULTURE_PLACE,                   /* ��L�Ƴ]�I */

    /* E_POI_GROUP_TRAFFIC_CAR */
    E_POI_TYPE_AIRPORT,                               /* ����(25) */
    E_POI_TYPE_TRAIN_STATION,                         /* ������ */
    E_POI_TYPE_STATION,                               /* ���� */
    E_POI_TYPE_PORT_AND_WHARF,                        /* ��f�X�Y */
    E_POI_TYPE_TICKET_OFFICE,                         /* �Ⲽ�B */
    E_POI_TYPE_SERVICE_AREA,                          /* �A�Ȱ� */
    E_POI_TYPE_TOLL_STATION,                          /* ���O�� */
    E_POI_TYPE_PARKING_LOT,                           /* ������(32)  */
    E_POI_TYPE_GAS_STATION,                           /* �[�o�� */
    E_POI_TYPE_TRAFFIC_SERVICE_AGENCY,                /* ��q�A�Ⱦ��c */
    E_POI_TYPE_4S_SHOP,                               /* �T��4S�� */
    E_POI_TYPE_AUTOMOBILE_SALES,                      /* �T���P�� */
    E_POI_TYPE_AUTO_REPAIR,                           /* �T������ */
    E_POI_TYPE_AUTO_INSPECTION,                       /* �T���˴� */
    E_POI_TYPE_OTHER_VEHICLE_SERVICE,                 /* ��L�T���A�� */

    /* E_POI_GROUP_FINANCE */
    E_POI_TYPE_BANK,                                  /* �Ȧ�(40) */
    E_POI_TYPE_ATM,                                   /* ATM */
    E_POI_TYPE_CREDIT_COOPERATIVE,                    /* �H�Ϊ� */
    E_POI_TYPE_SECURITIES,                            /* ���� */
    E_POI_TYPE_INSURANCE,                             /* �O�I */
    E_POI_TYPE_OTHER_FINANCE_UNIT,                    /* �䥦���ĳ�� */

    /* E_POI_GROUP_FOOD */
    E_POI_TYPE_CHINESE_FOOD,                          /* �����\�U(46) */
    E_POI_TYPE_INTERNATIONAL_CUISINE,                 /* �����\�U */
    E_POI_TYPE_CHAFING_DISH,                          /* ���竰  */
    E_POI_TYPE_RESTAURANT,                            /* ���q�\�U */
    E_POI_TYPE_CAFETERIA,                             /* �ۧU�\�U */
    E_POI_TYPE_NOSHERY,                               /* ���\�� */

    /* E_POI_GROUP_SHOPPING */
    E_POI_TYPE_DEPARTMENT_STORE,                      /* �ʳf�ӳ�(52) */
    E_POI_TYPE_SUPERMARKET,                           /* �W�� */
    E_POI_TYPE_CONVENIENT_STORE,                      /* �K�Q�� */
    E_POI_TYPE_SPECIALTY_MARKET,                      /* �M�祫�� */

    /* E_POI_GROUP_HEALTH_MEDICINE */
    E_POI_TYPE_GENERAL_HOSPITAL,                      /* ��X��|(56) */
    E_POI_TYPE_SPECIAL_HOSPITAL,                      /* �M����| */
    E_POI_TYPE_URGENT_CARE_CENTER,                    /* ��Ϥ��� */
    E_POI_TYPE_CLINIQURE,                             /* �E�� */
    E_POI_TYPE_PHARMACY,                              /* �ĩ�  */
    E_POI_TYPE_REHABILITATIVE_SANATORIUM,             /* �d�_���i�| */
    E_POI_TYPE_PHYSICAL_EXAMINATION,                  /* ����/���̯� */
    E_POI_TYPE_BLOOD_CENTER,                          /* ��G���� */
    E_POI_TYPE_ANIMAL_HOSPITAL,                       /* �ʪ���| */

    /* E_POI_GROUP_TOUR */
    E_POI_TYPE_PARK,                                  /* ����(65) */
    E_POI_TYPE_ZOO,                                   /* �ʪ��� */
    E_POI_TYPE_BOTANICAL_GARDEN,                      /* �Ӫ��� */
    E_POI_TYPE_AQUARIUM_AND_OCEAN_PARK,               /* �����]/���v�] */
    E_POI_TYPE_NATURAL_LANDSCAPE,                     /* �۵M���[ */
    E_POI_TYPE_CEMETERY_OF_REVOLUTIONARY_MARTYR,      /* �P�h���� */
    E_POI_TYPE_HISTORICAL_RELIC,                      /* ���v��ƿ�} */
    E_POI_TYPE_TEMPLE_AND_CHURCH,                     /* �q�t/�а� */
    E_POI_TYPE_URBAN_LANDMARK_BUILDING,               /* �����лx�ؿv/�лx */
    E_POI_TYPE_SPECIAL_STREET,                        /* �S���D */

    /* E_POI_GROUP_LEISURE_ENTERTAINMENT_SPORT */
    E_POI_TYPE_BOWLING_ALLEY,                         /* �O�ֲy��(75) */
    E_POI_TYPE_WATER_SPORT,                           /* ���W�B�� */
    E_POI_TYPE_ICE_SPORT,                             /* �B�W�B�� */
    E_POI_TYPE_FOOTBALL_FILED,                        /* ���y�� */
    E_POI_TYPE_BASEBALL_FILED,                        /* �βy�� */
    E_POI_TYPE_OTHER_BALL_GAME_PLACE,                 /* ��L�y���B�ʳ]�I */
    E_POI_TYPE_OTHER_SPORT_PLACE,                     /* ��L�B�ʳ]�I */
    E_POI_TYPE_GOLF_COURSE,                           /* �����Ҳy�� */
    E_POI_TYPE_FITNESS_CENTER,                        /* �������� */
    E_POI_TYPE_THEATER_AND_CONCERT_HALL,              /* �v�@�|/�����U */
    E_POI_TYPE_AMUSEMENT_PARK,                        /* �C�ֳ� */
    E_POI_TYPE_LEISURE_AND_ENTERTAINMENT_PLACE,       /* �𶢮T�ֳ��� */

    /* E_POI_GROUP_ACCOMMODATION */
    E_POI_TYPE_FIVE_STAR_HOTEL,                       /* ���P�Ż��]�s��(87) */
    E_POI_TYPE_FOUR_STAR_HOTEL,                       /* �|�P�Ż��]�s�� */
    E_POI_TYPE_THREE_STAR_HOTEL,                      /* �T�P�Ż��]�s�� */
    E_POI_TYPE_ORDINARY_HOTEL,                        /* �@�뻫�]�s�� */
    E_POI_TYPE_HOTEL_CHAIN,                           /* �s��s�� */
    E_POI_TYPE_REST_HOUSE,                            /* �۫ݩ� */
    E_POI_TYPE_RESORT,                                /* �װ��� */

    /* E_POI_GROUP_PUBLIC_SERVICE */
    E_POI_TYPE_TELECOM,                               /* �q�H(94) */
    E_POI_TYPE_POST,                                  /* �l�F */
    E_POI_TYPE_TELECAST,                              /* �s���q��  */
    E_POI_TYPE_PRESS_AND_PUBLISHING,                  /* �s�D�X��  */
    E_POI_TYPE_WELFARE_AGENCY,                        /* �֧Q���c  */
    E_POI_TYPE_OFFICE,                                /* �ưȩ� */
    E_POI_TYPE_PUBLIC_TOILET,                         /* ���@�Z�� */
    E_POI_TYPE_OTHER_SERVICE_UNIT,                    /* �䥦�M�~�A�� */
    E_POI_NUM_OF_TYPE,                                /* (102)*/
    E_POI_TYPE_ALL

} POIType_et;

/*This data structure is for query detail POI information*/
typedef struct POI_Info_s
{
    S32                         s32X; /*X-coordinate*/
    S32                         s32Y; /*Y-coordinate*/
    PU16                       pwszName; /* POI name */
    PU16                       pwszTel;/* POI tel */
    PU16                       pwszAddres;/*POI address */
    POIType_et             eType;     /* POI type */
} POI_Info_st, *pPOI_Info_st;

/*
 *  Syntax:
 *      MBOOL (*POIFilter_pfn)(PMVOID pvClientData, POIGroup_et eGroup, POIType_et eType);
 *
 *  Purpose:
 *      Defines the callback function to filter POI.
 *
 *  Parameters:
 *      pvClientData
 *          [in] The caller's client data.
 *      eGroup
 *          [in] Specifie the POI group.
 *      eType
 *          [in] Specifie the POI type.
 *
 *  Return Values:
 *      MBOOL_TRUE: reserves this POI.
 *      MBOOL_FALSE: discards this POI.
 */
typedef MBOOL (*POIFilter_pfn)(PMVOID pvClientData, POIGroup_et eGroup, POIType_et eType);

/*
 *  Syntax:
 *      MBOOL (*POITraverseHandler_pfn)(PMVOID pvClientData, U32 u32POIID, S32 s32X, S32 s32Y, POIType_et eType);
 *
 *  Purpose:
 *      Defines the callback function to handle the result of travering POIs by the quadrangle/bounding.
 *
 *  Parameters:
 *      pvClientData
 *          [in] The caller's client data.
 *      u32POIID
 *          [in] Specifie the POI id.
 *      s32X
 *          [in] The longitude position of POI.
 *      s32Y
 *          [in] The latitude position of POI.
 *      eType
 *          [in] Specifie the POI type.
 *
 *  Return Values:
 *      MBOOL_TRUE: continues to travese POI.
 *      MBOOL_FALSE: stops to traverse POI.
 */
typedef MBOOL (*POITraverseHandler_pfn)(PMVOID pvClientData, U32 u32POIID, S32 s32X, S32 s32Y, POIType_et eType);

/*
 *  Syntax:
 *      MBOOL (*POISearchHandler_pfn)(PMVOID pvClientData, U32 u32POIID, PU16 pwszName);
 *
 *  Purpose:
 *      Defines the callback function to handle the result of keyword search/phone numner serach.
 *
 *  Parameters:
 *      pvClientData
 *          [in] The caller's client data.
 *      u32POIID
 *          [in] Specifie the POI id.
 *
 *  Return Values:
 *      MBOOL_TRUE: continues to travese POI.
 *      MBOOL_FALSE: stops to traverse POI.
 */
typedef MBOOL (*POISearchHandler_pfn)(PMVOID pvClientData, U32 u32POIID);

/*
 *  Syntax:
 *      MBOOL (*POINearbySearchHandler_pfn)(PMVOID pvClientData, U32 u32POIID, PU16 pwszName, S32 s32Distance);
 *
 *  Purpose:
 *      Defines the callback function to handle the result of nearby search.
 *
 *  Parameters:
 *      pvClientData
 *          [in] The caller's client data.
 *      u32POIID
 *          [in] Specifie the POI id.
 *      s32Distance
 *          [in] Specifie the distance betwwen the POI and the given location.
 *
 *  Return Values:
 *      MBOOL_TRUE: continues to travese POI.
 *      MBOOL_FALSE: stops to traverse POI.
 */
typedef MBOOL (*POINearbySearchHandler_pfn)(PMVOID pvClientData, U32 u32POIID, S32 s32Distance);

/*------------------------------------------------------------------------------
    Variable
-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
    Macro
-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
    Global Function
-------------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


 /*
 *  Syntax:
 *      MBOOL  dbPOIOpenGroup(POIGroup_et eGroup);
 * 
 *  Purpose:
 *     Open on map group
 *
 *  Parameters:
 *      eGroup
 *          [in] on map group
 *
 *  Return Values
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.
 */
MBOOL  dbPOIOpenGroup(POIGroup_et eGroup);

/*
 *  Syntax:
 *      MBOOL  dbPOICloseGroup(POIGroup_et eGroup);
 * 
 *  Purpose:
 *     close on map group
 *
 *  Parameters:
 *      eGroup
 *          [in] the group to be closed
 *
 *  Return Values
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.
 */
MBOOL  dbPOICloseGroup(POIGroup_et eGroup);

/*
 *  Syntax:
 *      MBOOL dbPOIInit(const PU16 pwszRootDirName, U32 u32Lod, PS8 ps8Mem, U32 u32MemSize);
 * 
 *  Purpose:
 *      Initialize the POI database.
 *
 *  Parameters:
 *      pszRootDirName
 *          [in] Root directory name of the database.
 *      u32Lod
 *          [in] LOD 
 *       ps8Mem  
 *          [in] memory
 *       u32Memsize
 *          [in] memory size 
 *
 *  Return Values
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.
 */
#ifdef USE_STATIC_MEMORY
    MBOOL dbPOIInit(const PU16 pwszRootDirName, U32 u32Lod, PS8 ps8Mem, U32 u32MemSize);
#else
    MBOOL dbPOIInit(const PU16 pwszRootDirName, U32 u32Lod, PS8 ps8Mem, U32 u32MemSize, PU8 pu8ExtMem);
#endif

/*
 *  Syntax:
 *      MVOID dbPOIFinal(MVOID);
 * 
 *  Purpose:
 *      Final the POI database.
 *
 *  Parameters:
 *      None.
 *
 *  Return Values
 *      None.
 */
    MVOID dbPOIFinal(MVOID);


/* 
 *  Syntax:
 *      U32 dbPOIGetByBounding(S32 s32Left, S32 s32Bottom, S32 s32Right, S32 s32Top, POITraverseHandler_pfn pfnHandler, POIFilter_pfn pfnFilter, PMVOID pvClientData);
 *
 *  Purpose:
 *      Traverse POIs by the bounding.
 *
 *  Parameters:
 *      s32Left
 *          [in] Specifie the left of bounding box.
 *      s32Bottom
 *          [in] Specifie the bottom of bounding box.
 *      s32Right
 *          [in] Specifie the right of bounding box.
 *      s32Top
 *          [in] Specifie the top of bounding box.
 *      pfnHandler
 *          [in] Specifie the callback function for traversing result.
 *      pfnFilter
 *          [in] Specifie the callback function for POI filter.
 *               If filter is not needed, passes NULL.
 *      u32Lod
 *          [in] Specify the LOD
 *      pvClientData
 *          [in] Specifie the caller's client data.
 *
 *  Return Values:
 *      Return the POI count of traversing result.
 */
    U32 dbPOIGetByBounding(S32 s32Left, S32 s32Bottom, S32 s32Rigtht, S32 s32Top, 
                                       POITraverseHandler_pfn pfnHandler, POIFilter_pfn pfnFilter, 
                                       U32 u32Lod, PMVOID pvClientData);

  /* 
 *  Syntax:
 *      MBOOL dbPOIGetLoc(U32 u32POIID, PS32 ps32X, PS32 ps32Y);
 *
 *  Purpose:
 *      Get POI location.      
 *
 *  Parameters:
 *      u32POIID
 *          [in] Specifie the POI id.
 *      ps32X
 *          [out] The longitude position of POI
 *      ps32Y
 *          [out] The latitude position of POI
 *
 *  Return Values:
 *      If succeeds, returns MBOOL_TRUE.
 *      If fails, returns MBOOL_FALSE.
 */
    MBOOL dbPOIGetLoc(U32 u32POIID, PS32 ps32X, PS32 ps32Y);

/* 
 *  Syntax:
 *      PU16 dbPOIGetName(U32 u32POIID);
 *
 *  Purpose:
 *      Get POI name.      
 *
 *  Parameters:
 *      u32POIID
 *          [in] Specifie the POI id.
 *
 *  Return Values:
 *      If succeeds, returns the POI name.
 *      If fails, returns NULL.
 */
    PU16 dbPOIGetName(U32 u32POIID);

/* 
 *  Syntax:
 *      PU16  dbPOIGetAddress(U32 u32POIID);
 *
 *  Purpose:
 *      Get POI address.      
 *
 *  Parameters:
 *      u32POIID
 *          [in] Specifie the POI id.
 *
 *  Return Values:
 *      If succeeds, returns the POI address.
 *      If fails, returns NULL.
 */
    PU16 dbPOIGetAddress(U32 u32POIID);

/* 
 *  Syntax:
 *      PU16 dbPOIGetTel(U32 u32POIID);
 *
 *  Purpose:
 *      Get POI telephone.      
 *
 *  Parameters:
 *      u32POIID
 *          [in] Specifie the POI id.
 *
 *  Return Values:
 *      If succeeds, returns the telephone number.
 *      If fails, returns NULL.
 */
    PU16 dbPOIGetTel(U32 u32POIID);

/* 
 *  Syntax:
 *      POIType_et dbPOIGetType(U32 u32POIID);
 *
 *  Purpose:
 *      Get POI type.      
 *
 *  Parameters:
 *      u32POIID
 *          [in] Specifie the POI id.
 *
 *  Return Values:
 *      If succeeds, returns POI type.
 *      If fails, returns E_POI_TYPE_UNKNOWN.
 */
    POIType_et dbPOIGetType(U32 u32POIID);

 /* 
 *  Syntax:
 *      PU16 dbPOIGetInfo(U32 u32POIID);
 *
 *  Purpose:
 *      Get POI Information.      
 *
 *  Parameters:
 *      u32POIID
 *          [in] Specify the POI id.
 *
 *  Return Values:
 *      If succeeds, returns the whole POI information.
 *      If fails, returns NULL.
 */
 pPOI_Info_st dbPOIGetInfo(U32 u32POIID);

 /*
 *  Syntax:
 *      MBOOL dbPOIEnableNearby()
 *
 *  Purpose:
 *      Enable nearby searching 
 *
 *  Parameters:
 *      
 *  Return Values
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.    
 */
 MBOOL dbPOIEnableNearby(MVOID);
 
 /*
 *  Syntax:
 *      MBOOL dbPOIEnableNearby()
 *
 *  Purpose:
 *      Enable nearby searching 
 *
 *  Parameters:
 *      
 *  Return Values
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.    
 */
 MBOOL dbPOIDisableNearby(MVOID);

/* 
 *  Syntax:
 *      U32 dbPOINearbySearch(S32 s32LocX, S32 s32LocY, S32 s32Range, POIType_et eType, POIGroup_et eGroup, 
                                      POINearbySearchHandler_pfn pfnHandler, PMVOID pvClientData);
 *
 *  Purpose:
 *      Search the nearby POIs by the location and radius range.
 *
 *  Parameters:
 *      s32LocX
 *          [in] Specifie the longitude position of location.
 *      s32LocY
 *          [in] Specifie the latitude position of location.
 *      u32Range
 *          [in] Specifie the radius range.
 *      eType
 *          [in] Specifie the POI type
 *      eGroup
 *          [in] Specifie the POI group
 *      pfnHandler
 *          [in] Specifie the callback function for searching result.
 *      pvClientData
 *          [in] Specifie the caller's client data.
 *
 *  Return Values:
 *      Return the POI count of searching result.
 */
    U32 dbPOINearbySearch(S32 s32LocX, S32 s32LocY, U32 u32Range, POIType_et eType, POIGroup_et eGroup, 
                                      POINearbySearchHandler_pfn pfnHandler, PMVOID pvClientData);

    
  /* 
 *  Syntax:
 *      MBOOL dbPOIEnableSearching(PU8 pu8Mem, U32 u32Size);
 *
 *  Purpose:
 *      Init keyword searching
 *
 *  Parameters:
 *      pu8Mem
 *          [in] memory
 *      u32Size
 *          [in] memory size
 *
 *  Return Values:
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.
 */

    MBOOL dbPOIEnableSearching(PU8 pu8Mem, U32 u32Size);

    
    /*
 *  Syntax:
 *      MBOOL dbPOIDisableSearching(MVOID);
 *
 *  Purpose:
 *      disable keyword searching 
 *
 *  Parameters:
 *      
 *  Return Values
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.    
 */
    MBOOL dbPOIDisableSearching(MVOID);

 /* 
 *  Syntax:
 *      MBOOL dbPOISetKeywordDistrict(POIDistrict_et eDistrict);
 *
 *  Purpose:
 *      Set the district which want which want to search by keyword
 *
 *  Parameters:
 *      eDistrict
 *          [in] Specifie the district.
 *
 *  Return Values:
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.
 */
MBOOL dbPOISetKeywordDistrict(POIDistrict_et eDistrict);

/* 
 *  Syntax:
 *      MBOOL dbPOISetKeywordGroup(POIGroup_et eGroup);
 *
 *  Purpose:
 *      Set the group which want which want to search by keyword
 *
 *  Parameters:
 *      eGroup
 *          [in] Specifie the group.
 *
 *  Return Values:
 *      MBOOL_TRUE: success.
 *      MBOOL_FALSE: fail.
 */
MBOOL dbPOISetKeywordGroup(POIGroup_et eGroup);

/* 
 *  Syntax:
 *      U32 dbPOIKeywordSearch(PU16 pwszKeyword, POISearchHandler_pfn pfnHandler,  PMVOID pvClientData);
 *
 *  Purpose:
 *      Search the POIs by the keyword.
 *
 *  Parameters:
 *      pwszKeyword
 *          [in] Specifie the keyword.
 *      pfnHandler
 *          [in] Specifie the callback function for searching result.
 *      pvClientData
 *          [in] Specifie the caller's client data.
 *
 *  Return Values:
 *      Return the POI count of searching result.
 */
    U32 dbPOIKeywordSearch(PU16 pwszKeyword, POISearchHandler_pfn pfnHandler,  PMVOID pvClientData);

 
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* DB_POI_H */
