#ifndef ENCRPTY__h__
#define ENCRPTY__h__

#include "publicFunc.h"

#define ENCRPTY_KEY             "6E09C97EB8798EEB"    //��Կ
#define RANDOM_NUM_LEN          5                     //���������
#define CHECKECODE_LEN          10                    //У���볤��
#define USER_ENCRPTY_KEY_LEN    16                    //�û������ܳ׳���

#define M_UPD_HTTP_HEAD_SKINBIN_URL                 "http://input.shouji.sogou.com/SogouServlet?cmd=skinbin&binname=z&compressed=0&filename=skin1bin"//��Ƥ��wxd
#define M_UPD_HTTP_HEAD_PIC_URL                     "http://input.shouji.sogou.com/SogouServlet?cmd=skinpic&picid="
#define M_UPD_HTTP_HEAD_WORDLIB_URL                 "http://input.shouji.sogou.com/SogouServlet?cmd=keyupdate&d="

#define M_UPD_HTTP_HEAD_PIC_FIX                     "&compressed=0"

#define M_UPD_HTTP_HEAD_HTTP_PRO                    " HTTP/1.1\r\n"
#define M_UPD_HTTP_HEAD_HOST_ADDR                   "Host: input.shouji.sogou.com\r\n"
#define M_UPD_HTTP_HEAD_COOKIE                      "S-COOKIE: "
#define M_UPD_HTTP_HEAD_PLATFORM                    "SOGOU_PLATFORM: "
#define M_UPD_HTTP_HEAD_VERSION                     "SOGOU_VERSION: "
#define M_UPD_HTTP_HEAD_BUILDID                     "SOGOU_BIULDID: "
#define M_UPD_HTTP_HEAD_CACHE                       "Cache-Control: no-cache\r\n"
#define M_UPD_HTTP_HEAD_PRAGMA                      "Pragma: no-cache\r\n"
#define M_UPD_HTTP_CONNETION                        "Connection: Keep-Alive\r\n"
#define M_UPD_HTTP_HEAD_POST_CONTENT_TYPE           "Content-Type: application/x-www-form-urlencoded;\r\n"
#define M_UPD_HTTP_HEAD_CONTENT_ZERO                "Content-Length: 0\r\n"
#define M_UPD_HTTP_HEAD_ENTER                       "\r\n"

#define M_XML_CELL_WORD_END                         "</word>"
#define M_XML_CELL_WORD_BEGIN                       "<word "
#define M_XML_CELL_WORD_PY_BEGIN                    "pinyin=\""
#define M_XML_CELL_WORD_PY_END                      "\""
#define M_XML_CELL_WORD_UC_BEGIN                    "\" >"
#define M_XML_CELL_DATE_END                         "</date>"
#define M_XML_CELL_DATE_BEGIN                       "<date>"

#define MAX_NAME_LIST_COUNT                         1024

#define SG_TIMESTAMP_LEN                            15

typedef struct
{
    unsigned char       py[100];
    unsigned char       uc[100];
} S_XML_CELL_WORD_UTF8;

typedef struct
{
    unsigned short      py[100];
    unsigned short      uc[100];
} S_XML_CELL_WORD_UCS2;

typedef struct
{
    S_XML_CELL_WORD_UCS2    ucs2[100];
    S_XML_CELL_WORD_UTF8    utf8[100];
    unsigned short          cnt;
} S_XML_CELL_WORD_UNIT;



typedef struct  {
    char*  sg_ime_sw_ver;           // ���뷨�汾
    char*  sg_ime_bulid_datetime;   // ����ʱ��
    char*  sg_ime_platform;         // ƽ̨
    char*  sg_ime_phone_resolution; // �ֻ�������
    char*  sg_ime_mode_id;          // ���뷨����
    char*  sg_ime_imei_str;         // imei
    char*  sg_ime_imsi_str;         // imsi
    char*  sg_ime_current_time;     // YYYYMMDDMMSS
    char*  sg_ime_random_num;       // 5λ ��Сд��ĸ���ֵ��ִ�
    char*  sg_ime_build_id;
    char*  sg_ime_current_version;
    char   sg_ime_timeStamp[SG_TIMESTAMP_LEN];        //ʱ���
    char*  sg_ime_update_picId;     //����ͼƬ����
}SG_UPDATE_INF;

// ��ô����ı�ͷ: source -- ����Ŀռ�ָ��     cookies -- ��д�õ���Ϣ�ṹ     type -- ��ͷ���� 1-�ʿ� 2-skin.bin 3-ͼƬ
static SG_INT8        sogou_ime_scookie_raw_data_gen(unsigned char* dest, SG_UPDATE_INF* header);
unsigned short        sogou_ime_get_entcrptycode(unsigned char* dest, SG_UPDATE_INF* cookie, int nLen);


// ����XML���õ������õĴʿ�ṹ: buf -- �������صĴʿ�buffer uintx -- �����Ĵʿ�ṹ
char                  sogou_ime_update_getinf(unsigned char* buf, S_XML_CELL_WORD_UNIT* uintx, char *timestamp);
static unsigned short parse_xml_get_wordlen(unsigned char* pIn,unsigned char** ppBeg);
static signed short   parse_xml_get_wordinf(unsigned char* pIn,unsigned char* pOutPY,unsigned short* pLenPY,unsigned char* pOutWord,unsigned short* pLenWord);
static signed short   parse_xml_get_timestamp(unsigned char* pIn,unsigned char* pOutdate);


unsigned char         parse_skinbin_get_count(unsigned short index, unsigned short* startPos, unsigned char *skinNameListBuf);
unsigned char         parse_skinbin_get_type(unsigned short index, unsigned char *skinNameListBuf);
unsigned char         parse_skinbin_get_string(unsigned short index, unsigned short* nameList, unsigned short *name_id, unsigned char *skinNameListBuf);



int                   is_base64chr(unsigned char c);
unsigned short        Base64Filter(unsigned char *source, unsigned char* buf);


#endif
