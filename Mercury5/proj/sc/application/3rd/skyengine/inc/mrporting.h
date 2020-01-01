
#ifndef mrporting_h
#define mrporting_h

/*����ֻ�ƽ̨û�ж�����������ͣ���#if ����ڵĶ�����Ч*/
#if 1
typedef  unsigned short     uint16;      /* Unsigned 16 bit value */
typedef  unsigned long int  uint32;      /* Unsigned 32 bit value */
typedef  long int  int32;      /* signed 32 bit value */
typedef  unsigned char        uint8;        /* Signed 8  bit value */
typedef  signed char        int8;        /* Signed 8  bit value */
typedef  signed short       int16;       /* Signed 16 bit value */
typedef unsigned char kal_uint8;
typedef unsigned short kal_uint16;
#endif


enum {
   MR_KEY_0,               //���� 0
   MR_KEY_1,               //���� 1
   MR_KEY_2,               //���� 2
   MR_KEY_3,               //���� 3
   MR_KEY_4,               //���� 4
   MR_KEY_5,               //���� 5
   MR_KEY_6,               //���� 6
   MR_KEY_7,               //���� 7
   MR_KEY_8,               //���� 8
   MR_KEY_9,               //���� 9
   MR_KEY_STAR,            //���� *
   MR_KEY_POUND,           //���� #
   MR_KEY_UP,              //���� ��
   MR_KEY_DOWN,            //���� ��
   MR_KEY_LEFT,            //���� ��
   MR_KEY_RIGHT,           //���� ��
   MR_KEY_POWER,           //���� �һ���
   MR_KEY_SOFTLEFT,        //���� �����
   MR_KEY_SOFTRIGHT,       //���� �����
   MR_KEY_SEND,            //���� ������
   MR_KEY_SELECT,          //���� ȷ��/ѡ����������м���ȷ�ϼ���������Ϊ�ü���
   MR_KEY_VOLUME_UP,          //���� �����
   MR_KEY_VOLUME_DOWN,          //���� �����
   MR_KEY_CLEAR,
   MR_KEY_A,                          //��Ϸģ����A��
   MR_KEY_B,                         //��Ϸģ����B��
   MR_KEY_CAPTURE,            //���ռ�
   MR_KEY_NONE             //���� ����
};

enum {
   MR_NET_ID_MOBILE,                  //�ƶ�
   MR_NET_ID_CN,          // ��ͨgsm
   MR_NET_ID_CDMA,       //��ͨCDMA
   MR_NET_ID_NONE,       //δ�忨
   MR_NET_ID_OTHER     /*��������*/
};

enum {
   MR_EDIT_ANY,                  //�κ��ַ�
   MR_EDIT_NUMERIC,          // ����
   MR_EDIT_PASSWORD,       //���룬��"*"��ʾ
   MR_EDIT_ALPHA
};

enum {
   MR_SIM_NEW,     //���ֻ���һ�β���SIM��
   MR_SIM_CHANGE, //�û�����SIM��
   MR_SIM_SAME    //δ���л�������
};

enum {
   MR_DIALOG_OK,                   //�Ի�����"ȷ��"����
   MR_DIALOG_OK_CANCEL,
   MR_DIALOG_CANCEL,
   MR_DIALOG_NONE =100
};

enum {
   MR_DIALOG_KEY_OK,
   MR_DIALOG_KEY_CANCEL
};

enum {
   MR_LOCALUI_KEY_OK,
   MR_LOCALUI_KEY_CANCEL,
   MR_LOCALUI_ACTIVE
};

enum {
   MR_KEY_PRESS,             /*0*/
   MR_KEY_RELEASE,         /*1*/
   MR_MOUSE_DOWN,        /*2*/
   MR_MOUSE_UP,              /*3*/
   MR_MENU_SELECT,        /*4*/
   MR_MENU_RETURN,        /*5*/
   MR_DIALOG_EVENT,       /*6*/
   MR_SMS_INDICATION,   /*7*/
   MR_EVENT_EXIT,           /*8*/
   MR_SMS_RESULT,          /*9*/
   MR_LOCALUI_EVENT,    /*10*/
   MR_OSD_EVENT,            /*11*/
   MR_MOUSE_MOVE,          /*12*/
   MR_ERROR_EVENT,         /*13ִ���쳣ͨ������¼���֪ͨ*/
   MR_PHB_EVENT,
   MR_SMS_OP_EVENT,
   MR_SMS_GET_SC,
   MR_DATA_ACCOUNT_EVENT,
   MR_MOTION_EVENT,
};

enum
{
	MR_DATA_ACCOUNT_OP_GET,
	MR_DATA_ACCOUNT_OP_SET,
};

enum
{
	DSM_ERROR_NO_ERROR =0,
	DSM_ERROR_UNKNOW,
	DSM_ERROR_NO_SPACE,
	DSM_ERROR_TERMINATED

};
enum
{
	MR_SMS_OP_GET_ME_SIZE,
	MR_SMS_OP_GET_SIM_SIZE,
	MR_SMS_OP_DELETE,
	MR_SMS_OP_GET_MSG_CONTENT
};

typedef enum
{
   MR_SOUND_MIDI,
   MR_SOUND_WAV,
   MR_SOUND_MP3,
   MR_SOUND_PCM, //8K
   MR_SOUND_M4A,
   MR_SOUND_AMR,
   MR_SOUND_AMR_WB
}MR_SOUND_TYPE;

typedef enum
{
   MR_FONT_SMALL,
   MR_FONT_MEDIUM,
   MR_FONT_BIG
}MR_FONT_TYPE;

enum
{
   MR_SEEK_SET,
   MR_SEEK_CUR,
   MR_SEEK_END
};

enum
{
   MR_SOCK_STREAM,
   MR_SOCK_DGRAM
};

enum
{
   MR_IPPROTO_TCP,
   MR_IPPROTO_UDP
};

enum
{
   MR_ENCODE_ASCII,
   MR_ENCODE_UNICODE
};

enum
{
	MRSOCK_OPENED,
	MRSOCK_CONNECTING,
	MRSOCK_CONNECTED,
	MRSOCK_CLOSED,
	MRSOCK_ERR
};

typedef enum
{
   IMG_BMP,    //BMP ͼƬ
   IMG_JPG,    //jpg ͼƬ
   IMG_PNG,    //png ͼƬ
   IMG_GIF    //gif ͼƬ
}IMG_TYPE;

typedef enum
{
   SRC_NAME,    //������ֲ�ӿ����ļ���
   SRC_STREAM   //������ֲ�ӿڵ���ͼƬ������
}SRC_TYPE;

typedef enum
{
	MR_CALL_RING,
	MR_SMS_RING,
	MR_ALARM_RING
}DSM_RING_TYPE;

typedef enum
{
	MR_SCENE_NORMAL,
	MR_SCENE_MEETING,
	MR_SCENE_INDOOR,
	MR_SCENE_OUTDOOR,
	MR_SCENE_MUTE
}T_DSM_SCENE;

typedef struct
{
	int32 scene;
	int32 type;
	char *path;                   //gb
}T_DSM_RING_SET;

#define DSM_ARTIST_LEN    100

typedef struct
{
	char artist[DSM_ARTIST_LEN+2];  //big endian usc2
	int32 totaltime;//��λΪs
}T_DSM_AUDIO_INFO;

#define   MR_SMS_ENCODE_FLAG   7
#define   MR_SMS_REPORT_FLAG   8

enum {
   MR_SOCKET_BLOCK,          //������ʽ��ͬ����ʽ��
   MR_SOCKET_NONBLOCK       //��������ʽ���첽��ʽ��
};

typedef struct
{
   uint16 year;                 //��
   uint8  month;                //��
   uint8  day;                  //��
   uint8  hour;                 //ʱ��24Сʱ��
   uint8  minute;               //��
   uint8  second;               //��
}mr_datetime;

typedef struct
{
   uint32 width;                  //��Ļ��
   uint32 height;                 //��Ļ��
   uint32 bit;                    //��Ļ������ȣ���λbit
}mr_screeninfo;

typedef struct
{
	uint8       IMEI[16];	      //IMEI len eq 15
	uint8       IMSI[16];	      //IMSI len not more then 15
	char        manufactory[8];  //�����������7���ַ������ֽ���\0
	char        type[8];         //mobile type�����7���ַ������ֽ���\0
	uint32      ver;            //SW ver
	uint8       spare[12];       //����
}mr_userinfo;

typedef struct
{
   int32 socket;
   int32 port;
   int32 ip;
}mr_bind_st;



#ifdef MR_FS_ASYN

typedef int32 (*MR_ASYN_FS_CB)(int32 result, uint32  cb_param);

typedef struct
{
   void* buf;                 //�ļ������ַ
   uint32  buf_len;                //���峤�ȣ���Ҫ��ȡ/д��ĳ���
   uint32  offset;               //�ļ���ȡ/д��ƫ��
   MR_ASYN_FS_CB  cb;      //�ص�����
   uint32  cb_param;               //�ص�����
}mr_asyn_fs_param;
#endif

#define MR_GIF_SUPPORT_NO                                       3


typedef struct
{
	int32 width;                              //ͼƬ�Ŀ��
	int32 height;                            //ͼƬ�ĸ�
	int32 img_type;
}T_DSM_IMG_INFO;

typedef struct
{
	char *src;                              //�ļ�����������������buf�ĵ�ַ��������ļ�������GB��ʽ
	int32 len;                               //src��ָ��buf�Ĵ�С
	int32 src_type;             //ָ��src�д�ŵ����ļ���������������
}T_DSM_GET_IMG_INFO;

typedef struct
{
	char *src;                             //�ļ�����������������buf�ĵ�ַ��������ļ�������GB��ʽ
	int32 len;                              //src��ָ��buf�Ĵ�С
	int32 width;                           //�û�ͼƬ��ʾ������Ŀ��
	int32 height;                         //����ͼƬ��ʾ������ĸ߶�
	int32 src_type;             //ָ��src�д�ŵ����ļ���������������
	char *dest;                           //������ͼƬ���ݴ�ŵ�buf
}T_DSM_IMG_DECODE;

typedef struct T_DSM_FRAME_INFO
{
	int32 fwidth;                            //��֡�Ŀ��
	int32 fheight;                          //��֡�ĸ߶�
	int32 ox;                                  //��֡���Ͻǵ�x����(����߼���Ļ)
	int32 oy;                                  //��֡���Ͻǵ�y����(����߼���Ļ)
	int32 transparent_flag;           //�Ƿ���Ҫ͸����ʾ
	int32 transparent_color;         //͸����ʾ����ɫ
	int32 delay_time;                    //��֡��ʾ��ʱ��
	char *pdata;                            //��ѹ�õ�ͼƬ����
	struct T_DSM_FRAME_INFO *next;       //ָ����һ֡�����ݽṹ
}T_DSM_FRAME_INFO;


typedef struct
{
       int32 id;
	int32 width;                             //gif�Ŀ��
	int32 height;                           //gif�ĸ߶�
	int32 bg_color;                          //gif�ı���ɫ
	int32 frame_count;
	T_DSM_FRAME_INFO *first;      //ָ��gif�ĵ�һ֡�����ݽṹ
}T_DSM_GIF_HEADER;

typedef struct
{
	int32 width;                            //gif�Ŀ��
	int32 height;                           //gif�ĸ߶�
	int bg_color;                          //gif�ı���ɫ
	char *pdata;                           //��ѹ�õ�ͼƬ����
}T_DSM_PNG_HEADER;

typedef struct
{
    int32 id;
}T_DSM_GIF_ID;




#define MR_FILE_RDONLY     1//��ֻ���ķ�ʽ���ļ���
#define MR_FILE_WRONLY     2//��ֻд�ķ�ʽ���ļ���
#define MR_FILE_RDWR       4//�Զ�д�ķ�ʽ���ļ���
#define MR_FILE_CREATE      8//����ļ������ڣ��������ļ���
#define MR_FILE_SHARD       16
#define MR_FILE_COMMITTED   32

#define MR_IS_FILE     1      //�ļ�
#define MR_IS_DIR      2      //Ŀ¼
#define MR_IS_INVALID  8  //��Ч(���ļ�����Ŀ¼)


#define MR_FILE_HANDLE int32
#define MR_SEARCH_HANDLE int32

#define MR_SUCCESS  0    //�ɹ�
#define MR_FAILED   -1    //ʧ��
#define MR_IGNORE   1     //������
#define MR_WAITING   2     //�첽(������)ģʽ
//#define MR_NO_SUPPORT   -2     //��֧��

#define MR_PLAT_VALUE_BASE 1000    //����ĳЩ����ֵ�Ļ���ֵ



/*��ʱ������ʱ���ö�ʱ���¼���Mythroadƽ̨����֮���д���
p��������ʱ��ʱ�����Mythroad��ʱ������*/
extern int32 mr_timer(void);
/*��Mythroadƽ̨�ж԰����¼����д���press	= MR_KEY_PRESS�������£�
= MR_KEY_RELEASE�����ͷţ�key	��Ӧ�İ�������*/
extern int32 mr_event(int16 type, int32 param1, int32 param2);
/*�˳�Mythroad���ͷ������Դ*/
extern int32 mr_stop(void);


/****************�ⲿ�ӿڶ���*********************/




/*������DSMӦ�õ�ʱ��Ӧ�õ���DSM�ĳ�ʼ��������
���Զ�DSMƽ̨���г�ʼ��*/
extern int32 mr_start_dsm(const char* entry);

/*ע��̻�Ӧ��*/
extern int32 mr_registerAPP(uint8 *p, int32 len, int32 index);



/*��ͣӦ��*/
extern int32 mr_pauseApp(void);

/*�ָ�Ӧ��*/
extern int32 mr_resumeApp(void);

/*���ֻ��յ�����Ϣʱ���øú���*/
extern int32 mr_smsIndiaction(uint8 *pContent, int32 nLen, uint8 *pNum, int32 type);
extern int32 mr_smsIndiactionEx(uint8 *pContent, int32 nLen, uint8 *pNum, int32 type);
/*���������ݣ��������ڴ����е�һ�����ص��ļ��������жϣ�
�������ļ���DSM�˵�����DSM����������ļ����б��档ʹ��
������ʱ�������ļ�Ӧ���Ѿ�������ȫ������ȫ�����ݱ�����
�������ڴ��С�*/
extern int32 mr_save_mrp(void *p,uint32 l);

/*����ͬmr_save_mrp�����������һ���򿪵��ļ�������ļ���
�����߹رա��ú���Ŀǰ��δʵ�֣�����Ҫʹ�ã�����ϵouli*/
extern int32 mr_save_mrp_with_handle(MR_FILE_HANDLE f);

/*�û�SIM�����*/
extern int32 mr_newSIMInd(int16  type, uint8* old_IMSI);

/*����mr_initNetworkʹ�õĻص���������*/
typedef void (*MR_INIT_NETWORK_CB)(int32 result);

/*����mr_initNetworkʹ�õĻص���������*/
typedef int32 (*MR_CONNECT_CB)(int32 result);

/*����mr_getHostByNameʹ�õĻص���������*/
typedef int32 (*MR_GET_HOST_CB)(int32 ip);


/****************�ⲿ�ӿڶ���*********************/







/*********************�����ǳ���ӿڶ���******************************/





/*���Դ�ӡ*/
extern void mr_printf(const char *format,...);
extern void mrc_printf(const char *format,...);



/*�ڴ�����*/
extern int32 mr_mem_get (char** mem_base, uint32* mem_len);
/*�ڴ��ͷ�*/
extern int32 mr_mem_free(char* mem, uint32 mem_len);


/*******************************************************************/
/*��ʹ�ñ�����Ļ����ʱʹ�õĽӿ�*/
/*����Ļ�ϻ�BMP*/
extern void mr_drawBitmap(uint16* bmp, int16 x, int16 y, uint16 w, uint16 h);
/*ȡ�û�ȡunicode��chָ�������ĵ�����Ϣ������֮
������Ŀ�͸ߣ���ȡ���ĵ�����Ϣÿһ��bit��ʾ
�����һ�����أ�����ÿ�е����ر��밴�ֽڶ��䣬
Ҳ����˵���һ�������Ϊ12������Ҫ�������ֽ�
����ʾ����Ϣ���ڶ����ֽڵĺ��ĸ�bitΪ0���ӵ���
���ֽڿ�ʼ�ű�ʾ��һ�еĵ�������*/
extern const char *mr_getCharBitmap(uint16 ch, uint16 fontSize, int *width, int *height);
/*******************************************************************/




/*������ʱ��*/
extern int32 mr_timerStart(uint16 t);
/*ֹͣ��ʱ����*/
extern int32 mr_timerStop(void);
/*ȡ��ʱ�䣬��λms*/
extern uint32 mr_getTime(void);
/*��ȡϵͳ����ʱ�䡣*/
extern int32 mr_getDatetime(mr_datetime* datetime);
/*ȡ���ֻ������Ϣ��*/
extern int32 mr_getUserInfo(mr_userinfo* info);
/*����˯�ߣ���λms*/
extern int32 mr_sleep(uint32 ms);
/*ƽ̨��չ�ӿ�*/
extern int32 mr_plat(int32 code, int32 param);
/*��ǿ��ƽ̨��չ�ӿ�*/
typedef void (*MR_PLAT_EX_CB)(uint8* output, int32 output_len);
extern int32 mr_platEx(int32 code, uint8* input, int32 input_len, uint8** output, int32* output_len, MR_PLAT_EX_CB *cb);


/*�ļ���Ŀ¼����*/
extern int32 mr_ferrno(void);
extern MR_FILE_HANDLE mr_open(const char* filename,  uint32 mode);
extern int32 mr_close(MR_FILE_HANDLE f);
extern int32 mr_info(const char* filename);
extern int32 mr_write(MR_FILE_HANDLE f,void *p,uint32 l);
extern int32 mr_read(MR_FILE_HANDLE f,void *p,uint32 l);
extern int32 mr_seek(MR_FILE_HANDLE f, int32 pos, int method);
extern int32 mr_getLen(const char* filename);
extern int32 mr_remove(const char* filename);
extern int32 mr_rename(const char* oldname, const char* newname);
extern int32 mr_mkDir(const char* name);
extern int32 mr_rmDir(const char* name);
int32 mr_ftell(MR_FILE_HANDLE f);


/*�첽�ļ���д�ӿ�*/
#ifdef MR_FS_ASYN
extern int32 mr_asyn_read(MR_FILE_HANDLE f, mr_asyn_fs_param *param);
extern int32 mr_asyn_write(MR_FILE_HANDLE f, mr_asyn_fs_param *param);
#endif

/*Ŀ¼������ʼ*/
extern MR_SEARCH_HANDLE mr_findStart(const char* name, char* buffer, uint32 len);
/*ȡ��һ��Ŀ¼�������*/
extern int32 mr_findGetNext(MR_SEARCH_HANDLE search_handle, char* buffer, uint32 len);
/*Ŀ¼��������*/
extern int32 mr_findStop(MR_SEARCH_HANDLE search_handle);

/*�˳�ƽ̨*/
extern int32 mr_exit(void);

/*��ʼ�ֻ���*/
extern int32 mr_startShake(int32 ms);
/*�����ֻ���*/
extern int32 mr_stopShake(void);

/*������Ƶ����*/
extern int32 mr_playSound(int type, const void* data, uint32 dataLen, int32 loop);

/*ֹͣ������Ƶ*/
extern int32 mr_stopSound (int type);
extern void mr_closeSound(void); //alpha added
/*����һ������Ϣ*/
extern int32 mr_sendSms(char* pNumber, char*pContent, int32 encode);
/*����绰*/
extern void mr_call(char *number);
/*ȡ������ID��0 �ƶ���1 ��ͨ*/
extern int32 mr_getNetworkID(void);
/*����WAP*/
extern void mr_connectWAP(char* wap);


/*GUI �ӿ�*/
extern int32 mr_menuCreate(const char* title, int16 num);
extern int32 mr_menuSetItem(int32 menu, const char *text, int32 index);
extern int32 mr_menuShow(int32 menu);
/*����ѡ����Ŀ������*/
extern int32 mr_menuSetFocus(int32 menu, int32 index);
extern int32 mr_menuRelease(int32 menu);
extern int32 mr_menuRefresh(int32 menu);


extern int32 mr_sleep(uint32 ms);
extern int32 mr_dialogCreate(const char * title, const char * text, int32 type);
extern int32 mr_dialogRelease(int32 dialog);
extern int32 mr_dialogRefresh(int32 dialog, const char * title, const char * text, int32 type);

extern int32 mr_textCreate(const char * title, const char * text, int32 type);
extern int32 mr_textRelease(int32 text);
extern int32 mr_textRefresh(int32 handle, const char * title, const char * text);

extern int32 mr_editCreate(const char * title, const char * text, int32 type, int32 max_size);
extern int32 mr_editRelease(int32 edit);
extern const char* mr_editGetText(int32 edit);

extern int32 mr_winCreate(void);
extern int32 mr_winRelease(int32 win);

extern int32 mr_getScreenInfo(mr_screeninfo * screeninfo);


/*Socket�ӿ�*/
extern int32 mr_initNetwork(MR_INIT_NETWORK_CB cb, const char *mode);
extern int32 mr_closeNetwork(void);
extern int32 mr_getHostByName(const char *name, MR_GET_HOST_CB cb);
extern int32 mr_socket(int32 type, int32 protocol);
extern int32 mr_connect(int32 s, int32 ip, uint16 port, int32 type);
extern int32 mr_closeSocket(int32 s);
extern int32 mr_recv(int32 s, char *buf, int len);
extern int32 mr_recvfrom(int32 s, char *buf, int len, int32 *ip, uint16 *port);
extern int32 mr_send(int32 s, const char *buf, int len);
extern int32 mr_sendto(int32 s, const char *buf, int len, int32 ip, uint16 port);


extern void returnToIdleDsm(int flag);


#define MR_MEDIA_INIT                  		201
#define MR_MEDIA_BUF_LOAD            		203
#define MR_MEDIA_FILE_LOAD           		202
#define MR_MEDIA_PLAY_CUR_REQ    		204
#define MR_MEDIA_PAUSE_REQ          		205
#define MR_MEDIA_RESUME_REQ        		206
#define MR_MEDIA_STOP_REQ            		207
#define MR_MEDIA_CLOSE                   		208
#define MR_MEDIA_GET_STATUS        		209
#define MR_MEDIA_SETPOS                 		210
#define MR_MEDIA_GETTIME               		211
#define MR_MEDIA_GET_TOTAL_TIME  		212
#define MR_MEDIA_GET_CURTIME        		213
#define MR_MEDIA_GET_CURTIME_MSEC      215
#define MR_MEDIA_FREE         				216
#define MR_MEDIA_ALLOC_INRAM         		220
#define MR_MEDIA_FREE_INRAM			221

#define MR_MEDIA_OPEN_MUTICHANNEL     222
#define MR_MEDIA_PLAY_MUTICHANNEL      223
#define MR_MEDIA_STOP_MUTICHANNEL      224
#define MR_MEDIA_CLOSE_MUTICHANNEL    225


typedef struct
{
	int32 index;
	int8 type;
}T_DSM_GET_SMS_INFO_REQ;

typedef struct
{
	int32 index;
	int8 type;
}T_DSM_DELETE_SMS_REQ;
typedef enum
{
    MR_SMS_NOBOX ,
    MR_SMS_UNREAD,
    MR_SMS_INBOX,
    MR_SMS_OUTBOX,
    MR_SMS_DRAFTS,
    MR_SMS_AWAITS,
    MR_SMS_DATA,
    MR_SMS_UNSENT,
    MR_SMS_READED,
    MR_SMS_SENT
}MR_MSG_STATUS;

typedef enum
{
	MR_SMS_STORAGE_SIM,
	MR_SMS_STORAGE_ME
}MR_SMS_STORAGE;

typedef enum
{
	MR_SMS_NOT_READY = MR_PLAT_VALUE_BASE,
	MR_SMS_READY
}MR_SMS_STATUS;
typedef enum
{
	MR_NORMAL_SCREEN = MR_PLAT_VALUE_BASE,
	MR_TOUCH_SCREEN
}MR_SCREEN_TYPE;

typedef enum
{
	MR_CHINESE = MR_PLAT_VALUE_BASE,
	MR_ENGLISH,
	MR_TCHINESE,//����
	MR_SPANISH,//������
	MR_DANISH,//������
	MR_POLISH,//����
	MR_FRENCH,//����
	MR_GERMAN,//�¹�
	MR_ITALIAN,//�����
	MR_THAI,//̩��
	MR_RUSSIAN,// ����˹
	MR_BULGARIAN,//��������
	MR_UKRAINIAN,//�ڿ���
	MR_PORTUGUESE,//������
	MR_TURKISH,//������
	MR_VIETNAMESE,//Խ��
	MR_INDONESIAN,//ӡ��������
	MR_CZECH,//�ݿ�
	MR_MALAY,//��������
	MR_FINNISH,//������
	MR_HUNGARIAN,//������
	MR_SLOVAK,//˹�工��
	MR_DUTCH,//����
	MR_NORWEGIAN,//Ų��
	MR_SWEDISH,//���
	MR_CROATIAN,//���޵���
	MR_ROMANIAN,//��������
	MR_SLOVENIAN,//˹��������
	MR_GREEK,//ϣ����
	MR_HEBREW,//ϣ����
	MR_ARABIC,//������
	MR_PERSIAN,//��˹
	MR_URDU,//�ڶ�����
	MR_HINDI,//��ӡ��
	MR_MARATHI,//��������(��ӡŷ��ϵӡ������)
	MR_TAMIL,//̩�׶���
	MR_BENGALI,//�ϼ�����(��
	MR_PUNJABI,//ӡ����������һ�ط�
	MR_TELUGU//̩¬����(ӡ�ȶ�������ά������)
}MR_LANGUAGE;

typedef enum
{
	MR_IDLE_BG_PAPER,        /*����*/
	MR_IDLE_SAVER_PAPER		 /*����*/
}MR_IDLE_PAPER_TYPE;

typedef enum
{
	MR_SMS_ACTION_SAVE = MR_PLAT_VALUE_BASE+1,
	MR_SMS_ACTION_DELETE
}MR_SMS_ACTION_TYPE;

enum
{
	MR_MSDC_NOT_EXIST = MR_PLAT_VALUE_BASE,
	MR_MSDC_OK,
	MR_MSDC_NOT_USEFULL /*������usbģʽ�����޷�����t��*/
};


#define ACI_MIDI_DEVICE                   		1
#define ACI_WAVE_DEVICE                  		2
#define ACI_MP3_DEVICE                     		3
#define ACI_AMR_DEVICE                     		4
#define ACI_PCM_DEVICE			     		5
#define ACI_M4A_DEVICE                     		6
#define ACI_AMR_WB_DEVICE                     	7

#define MR_MEDIA_IDLE                       		1
#define MR_MEDIA_INITED                   		2
#define MR_MEDIA_LOADED                  		3
#define MR_MEDIA_PLAYING                 		4
#define MR_MEDIA_PAUSED                  		5
#define MR_MEDIA_SUSPENDED            		6
#define MR_MEDIA_SUSPENDING          		7

#define DSM_MAX_FILE_LEN                         	128
#define DSM_MAX_NAME_LEN                       64


#define MR_PHB_NONE 					0
#define MR_PHB_SIM 						1  /*��sim ������*/
#define MR_PHB_NVM 						2  /* ��nvm���� */
#define MR_PHB_BOTH 					3

#define MR_PHB_BY_NAME 				1
#define MR_PHB_BY_NUMBER 				2

//�绰����������ֵ

#define MR_PHB_SUCCESS 				(0+MR_PLAT_VALUE_BASE)
#define MR_PHB_ERROR 					(1+MR_PLAT_VALUE_BASE)
#define MR_PHB_READY 					(2+MR_PLAT_VALUE_BASE)
#define MR_PHB_NOT_SUPPORT 			(3+MR_PLAT_VALUE_BASE)
#define MR_PHB_NOT_READY 				(4+MR_PLAT_VALUE_BASE)
#define MR_PHB_NOT_FOUND 				(5+MR_PLAT_VALUE_BASE)
#define MR_PHB_STORAGE_FULL 			(6+MR_PLAT_VALUE_BASE)
#define MR_PHB_NUMBER_TOO_LONG 		(7+MR_PLAT_VALUE_BASE)
#define MR_PHB_OUT_OF_INDEX 			(8+MR_PLAT_VALUE_BASE)

#define MR_PHB_MAX_NAME 				(36*2) //��ʱ��λ24���ֽ�,12������.
#define MR_PHB_MAX_NUMBER 			(48*2)//��ʱ��λ������40���ֽ�.40������
#define MR_PHB_MAX_SEARCH_PATTERN 	(60*2)


#define MR_LCD_ROTATE_NORMAL			0
#define MR_LCD_ROTATE_90				1
#define MR_LCD_ROTATE_180				2
#define MR_LCD_ROTATE_270				3
#define MR_LCD_MIRROR					4
#define MR_LCD_MIRROR_ROTATE_90		5
#define MR_LCD_MIRROR_ROTATE_180		6
#define MR_LCD_MIRROR_ROTATE_270		7


#define   MR_FMGR_TYPE_ALL 				1
#define 	MR_FMGR_TYPE_FOLDER 			2
#define   MR_FMGR_TYPE_FOLDER_DOT 	3
#define   MR_FMGR_TYPE_UNKNOW 		4

/* image */
#define 	MR_FMGR_TYPE_BMP 				5
#define 	MR_FMGR_TYPE_JPG 				6
#define 	MR_FMGR_TYPE_JPEG 			7
#define 	MR_FMGR_TYPE_GIF 				8
#define 	MR_FMGR_TYPE_PNG 				9
#define 	MR_FMGR_TYPE_EMS 				10
#define 	MR_FMGR_TYPE_ANM 			11
#define 	MR_FMGR_TYPE_WBMP 			12
#define 	MR_FMGR_TYPE_WBM 			13

	/* audio */
#define   MR_FMGR_TYPE_IMY 				14
#define   MR_FMGR_TYPE_MID 				15
#define   MR_FMGR_TYPE_MIDI 			16
#define   MR_FMGR_TYPE_WAV 			17
#define   MR_FMGR_TYPE_AMR 			18
#define   MR_FMGR_TYPE_AAC 				19
#define   MR_FMGR_TYPE_DAF 				20
#define   MR_FMGR_TYPE_VM 				21
#define   MR_FMGR_TYPE_AWB 			22
#define   MR_FMGR_TYPE_AIF 				23
#define   MR_FMGR_TYPE_AIFF 			24
#define   MR_FMGR_TYPE_AIFC 			25
#define   MR_FMGR_TYPE_AU 				26
#define   MR_FMGR_TYPE_SND 				27
#define   MR_FMGR_TYPE_M4A 			28
#define   MR_FMGR_TYPE_MMF  			29
#define   MR_FMGR_TYPE_WMA 			30
	/* video */
#define   MR_FMGR_TYPE_3GP 				31
#define   MR_FMGR_TYPE_MP4 				32
#define   MR_FMGR_TYPE_AVI 				33
	/* others */
#define   MR_FMGR_TYPE_JAD 				34
#define   MR_FMGR_TYPE_JAR 				35
#define   MR_FMGR_TYPE_VCF 				36
#define   MR_FMGR_TYPE_VCS 				37
#define   MR_FMGR_TYPE_THEME 			38
#define 	MR_FMGR_TYPE_MRP 				39
#define 	MR_FMGR_TYPE_NES 				40
#define 	MR_FMGR_TYPE_ZIP 				41
#define   MR_FMGR_TYPE_ZPK                       42


typedef struct  _mr_nes_keys_st
{
	uint8 k_up;
	uint8 k_down;
	uint8 k_left;
	uint8 k_right;
	uint8 k_se;
	uint8 k_st;
	uint8 k_a;
	uint8 k_b;
	uint8 auto_a;
	uint8 auto_b;
}mr_nes_keys_st;


typedef struct
{
	U8* src;
	U8* dest;
	U16 src_width;
	U16 src_height;
	U16 src_pitch;
	U16 dest_width;
	U16 dest_height;
	U16 output_clip_x1;
	U16 output_clip_y1;
	U16 output_clip_x2;
	U16 output_clip_y2;
}mr_img_resize_struct;


/*********************nes end**********************/



typedef struct
{
	uint16 lac;
	uint16 cell_id;
	uint8 mnc[2];
	uint8 mcc[3];
	uint8 mnc3[4];
}T_DSM_CELL_INFO;

typedef struct {
	kal_uint8	mcc[3];	//MCC
	kal_uint8	mnc[3];	//MNC
	kal_uint8	lac[2];	//LAC
	kal_uint16	cell_id;	 //cell ID
	kal_uint8	is_present;
}dsm_rr_em_lai_info_t;


typedef struct
{
   uint32 state;  //�ֱ���־��Ŀǰʹ��
//0 bit���ֱ�״̬��0�ֱ�δ���룻
//                 1�ֱ��Ѳ��롣

   uint8 k_up;    //�����ϣ���ֵΪ��0 δ���£� 1 ���£� ��ͬ
   uint8 k_down;  //������
   uint8 k_left;  //������
   uint8 k_right; //������

   uint8 k_select; //���� "ѡ��"
   uint8 k_start;  //���� "��ʼ"
   uint8 k_a;      //���� A
   uint8 k_b;      //���� B

   uint8 k_auto_a; //���� �Զ�A
   uint8 k_auto_b; //���� �Զ�B

   uint8 k_c;      //���� ����������
   uint8 k_d;      //���� ����������

   uint8 k_left_up;    //���� ����
   uint8 k_left_down;  //���� ����
   uint8 k_right_down; //���� ����
   uint8 k_right_up;   //���� ����

   uint8 k_e;          //���� ����������
   uint8 k_f;          //���� ����������
   uint8 k_g;          //���� ����������
   uint8 k_h;          //���� ����������

} mr_nes_joypad_st;

typedef struct
{
	int32   appid;   //app id
	uint8   describe[20];     //Ӧ�ñ�־�� - "ipqq"
	uint8*  param;     //Ԥ����չ��
}mr_backstage_st;

typedef enum
{
	DSM_PIC_DESTID_IDLE_ICON,
	DSM_PIC_DESTID_IDLE_BG
}mr_pic_destId;

 typedef struct
 {
       int32 appid;
       int32 time;
       int32 img_type;
       int32 img_size;
       int32 width;
       int32 height;
       uint16 color;
       uint8 *buff;
	uint8  destId;
}mr_pic_req;


void dialo_test(void);

#endif


