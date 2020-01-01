#ifndef _MMI_MAPAPP_GPLUG_H_
#define _MMI_MAPAPP_GPLUG_H_

/* extern */
#ifdef __cplusplus
extern "C" {
#endif    /* end of #ifdef __cplusplus */

/*
 * 1, wg_flag: ��l���ܼƼлx
 *             �t�Φb�����ե��ഫ�ҲծɡAwg_flag�]�m��0�A����]�w��1�C
 * 2, wg_lng:  GPS�H�������쪺WGS84�g�סC���O1/1024��C
 * 3, wg_ lat: GPS�H�������쪺WGS84�n�סC���O1/1024��C
 * 4, wg_heit: ��e��m�����סC���O���ءC
 * 5, wg_week: ��1980�~1��6��s�ɺ�_�A�ܷ�e�ɶ��֭p���g�ơA�]�YGPS�g�]�C�Ѭ��@�g�^
 * 6, wg_time: �HGPS�g���ǡA�q�@�g�_�l�ɶ��ֿn�ܷ�e�ɶ�����ơA�ӭȨC�g�M�s�C���O1/1000��C
 *
 * Return:
 * 1, china_lng: �ഫ��y�иg�סA���O1/1024��C
 * 2, china_lat: �ഫ��y�нn�סA���O1/1024��C
 *
 * ��ƨϥλ���:
 * 1, �ഫ�Ҳձ����첧�`�ȡA�p�g�׬�0�A�ҲձN��^���~�лx(0xFFFF95FF)�A�B�]�m��^���g�n�׬�0�F
 * 2, �Y�b�i��L�{���A�L�k��oGPS�H���A�N�W�@����o��GPS�u��ȶǤJ�ഫ�ҲաC
 * 3, ���`����: 0x00000000�C
 */
#if (!defined(__MAP_MMI_GPS_PLUGIN_LIB__))||defined(__PC_SIMULATOR__)
/* if the library doesn't exist, gplug_add() has to be implemented here to do decoding of GPS position. */
unsigned int gplug_add(int wg_flag,unsigned int wg_lng,unsigned int wg_lat,int wg_heit,int wg_week,
                       unsigned int wg_time,unsigned int *china_lng,unsigned int *china_lat)
{
    LOG_TRACE(MMI_LEVEL_MAPVIEW,"[GPLUG - gplug_add] flag=%d, height=%d, week=%d, time=%d, long=d, lat=%d",
                                 wg_flag,wg_heit,wg_week,wg_time,wg_lng,wg_lat);
    (*china_lng)=wg_lng;
    (*china_lat)=wg_lat;
    return 0x00000000;    /* succeed; 0xFFFF95FF -> fail */
}
#else
unsigned int gplug_add(int wg_flag,unsigned int wg_lng,unsigned int wg_lat,int wg_heit,int wg_week,
                       unsigned int wg_time,unsigned int *china_lng,unsigned int *china_lat);
#endif

#ifdef __cplusplus
}
#endif    /* end of #ifdef __cplusplus */

#endif    /* end of #ifndef _MMI_MAPAPP_GPLUG_H_ */
