#ifdef __cplusplus
extern "C"    {
#endif

#ifdef HZRECOG_EXPORTS
	#define	HZRECOGAPI __declspec( dllexport )
#else
	#define	HZRECOGAPI /*__declspec( dllimport )*/
#endif

#define HZ_VOID void
#define HZ_INT8 char
#define HZ_UINT8 unsigned char
#define HZ_INT16 short
#define HZ_UINT16 unsigned short
#define HZ_INT32 long				
#define HZ_UINT32 unsigned long		

#define HZ_BOOL HZ_INT32
#define HZ_BYTE HZ_UINT8			
#define HZ_WORD HZ_UINT16			
#define HZ_DWORD HZ_UINT32			

// Recognition Kernel Initialization
// call this function before using other functions in handwritting recognition kernel
// the pointer is ROM address for placing HZRecog.dat or is file name string
// Return value :	TRUE	success
//					FALSE	fail
HZRECOGAPI HZ_BOOL  HZInitCharacterRecognition(HZ_VOID* pPointer);

// Recognition Kernel Exit
// call this function before using other functions handwritting recognition kernel no more
// Return value :	TRUE	success
//					FALSE	fail
HZRECOGAPI HZ_BOOL  HZExitCharacterRecognition(HZ_VOID);

// Main Recognition Function
// Return value is recognition result number, its valid value are [-1, MAX_CANDIDATE_NUM]
// pnStrokeBuffer is handwritting buffer of Chinese character.
// (x, y) make up one point, and x and y are short type, their valid value are from -1 to 32767.
// (-1, 0) is end flag of stroke, (-1, -1) is end flag of character.
// pwResultBuffer is recognition result buffer, we recommend its size are MAX_CANDIDATE_NUM+1
// uMatchRange is one of four kinds of match_range or combination of them. Note: it is not null(zero)
// moreover, uMatchRange may include ADAPTATION_MATCH_RANGE only after calling 'HZInitAdaptation'
HZRECOGAPI HZ_INT32  HZCharacterRecognize(HZ_INT16* pnStrokeBuffer, HZ_WORD* pwResult);

#define RECOG_RANGE_NUMBER			0x00000001		// �Ʀr�A0~9�Q�ӼƦr
#define RECOG_RANGE_UPPERCASE		0x00000002		// �j�g�r���A26��
#define RECOG_RANGE_LOWERCASE		0x00000004		// �p�g�r���A26��
#define RECOG_RANGE_INTERPUNCTION	0x00000008		// ���I�Ÿ��A43��
#define RECOG_RANGE_GESTURE			0x00000010		// ���ղŸ��A36��
///// �H�U�o�ǩw�q���n�ϥ�
#define RECOG_RANGE_GB1_ONLY		0x00000100
#define RECOG_RANGE_GB1_BIG51		0x00000200
#define RECOG_RANGE_GB1_BIG52		0x00000400
#define RECOG_RANGE_GB2_ONLY		0x00000800
#define RECOG_RANGE_GB2_BIG51		0x00001000
#define RECOG_RANGE_GB2_BIG52		0x00002000
#define RECOG_RANGE_BIG51_ONLY		0x00004000
#define RECOG_RANGE_BIG52_ONLY		0x00008000
#define RECOG_RANGE_GBK_ONLY		0x00010000
#define RECOG_RANGE_GB2_RADICAL		0x00020000
///// �H�W�o�ǩw�q���n�ϥ�
#define RECOG_RANGE_ADAPTATION		0x10000000		// �۾ǲߦr

// ��Ф@�ź~�r�A�`�@3755�Ӻ~�r
#define RECOG_RANGE_GB1				(RECOG_RANGE_GB1_ONLY | RECOG_RANGE_GB1_BIG51 | RECOG_RANGE_GB1_BIG52)
// ��ФG�ź~�r�A�`�@3008�Ӻ~�r
#define RECOG_RANGE_GB2				(RECOG_RANGE_GB2_ONLY | RECOG_RANGE_GB2_BIG51 | RECOG_RANGE_GB2_BIG52)
// Big5�`�κ~�r�A�`�@5401�Ӻ~�r
#define RECOG_RANGE_BIG51			(RECOG_RANGE_GB1_BIG51 | RECOG_RANGE_GB2_BIG51 | RECOG_RANGE_BIG51_ONLY)
// Big5�D�`�κ~�r�A�`�@7659�Ӻ~�r
#define RECOG_RANGE_BIG52			(RECOG_RANGE_GB1_BIG52 | RECOG_RANGE_GB2_BIG52 | RECOG_RANGE_BIG52_ONLY)

// �r���Ÿ��A�`�@52�Ӥj�p�g�r��
#define RECOG_RANGE_SYMBOL			(RECOG_RANGE_UPPERCASE | RECOG_RANGE_LOWERCASE)
// ��Ф@�G�ź~�r�A�`�@6763�Ӻ~�r
#define RECOG_RANGE_GB				(RECOG_RANGE_GB1 | RECOG_RANGE_GB2)
// Big5�~�r�A�`�@13060�Ӻ~�r
#define RECOG_RANGE_BIG5			(RECOG_RANGE_BIG51 | RECOG_RANGE_BIG52)
// GBK�����~�r(�]�A���ǳ���)�A�`�@21003�Ӻ~�r
#define RECOG_RANGE_GBK				(RECOG_RANGE_GB | RECOG_RANGE_BIG5 | RECOG_RANGE_GBK_ONLY | RECOG_RANGE_GB2_RADICAL)
#define RECOG_RANGE_ALL				(RECOG_RANGE_NUMBER | RECOG_RANGE_SYMBOL | RECOG_RANGE_INTERPUNCTION | RECOG_RANGE_GESTURE | RECOG_RANGE_GBK | RECOG_RANGE_ADAPTATION)

// DisplayPage
#define DP_NOCHANGE			0		// ²�c�餣���ܤ�
#define DP_TOSIMPLIFIED		1		// �g�c�o²
#define DP_TOTRADITIONAL	2		// �g²�o�c

// Full or Half Character
#define FH_FULL				0		// �����r��
#define FH_HALF				1		// �b���r��

// Define Gesture
#define DG_GESTURE_NUM		36 
#define DG_ZERO				0x0000	// �L����
#define DG_SPACE			0x0020	// �Ů�(0x0020)
#define DG_ENTER			0x000D	// �^��(0x000D)
#define DG_BACKSPACE		0x0008	// �^�R(0x0008)
#define DG_DELETE			0x001E	// �R��(0x001E)

typedef enum 
{
	PARAM_CANDNUMB,			// 1~100�A���˨ϥ�10�A�ʬ٬O10
	PARAM_RECORANG,			// RECOG_RANGE_xxx�A�ʬ٬OGB
	PARAM_DISPCODE,			// DP_xxx,�ʬ٬O����
	PARAM_FULLHALF,			// FH_xxx�A�ʬ٬O����
	PARAM_DEFGESTURE,		// �ǤJ36���V�q�]36��WORD�^�A��36�Ӽg�k�i�浧�թw�q
	PARAM_SPEEDUP,			// �i�H��o��֪��t��,��ĳ���n�]�m���Ѽ�,�ʬ٬O���]�m
} HZPARAM;

HZRECOGAPI HZ_VOID HZSetParam(HZPARAM nParam, HZ_UINT32 dwValue);
HZRECOGAPI HZ_UINT32 HZGetParam(HZPARAM nParam);

#ifdef __cplusplus
}
#endif 

