#ifndef __SG_MD5_H__
#define __SG_MD5_H__
typedef unsigned long UINT4;
typedef unsigned char *POINTER;

/* MD5 context. */
typedef struct {
	/* state (ABCD) */   
	/*�ĸ�32bits�������ڴ�����ռ���õ�����ϢժҪ������Ϣ���ȡ�512bitsʱ��Ҳ���ڴ��ÿ��512bits���м���*/ 
	UINT4 state[4];   
	
	/* number of bits, modulo 2^64 (lsb first) */    
	/*�洢ԭʼ��Ϣ��bits������,����������bits���Ϊ 2^64 bits����Ϊ2^64��һ��64λ�������ֵ*/
	UINT4 count[2];
	
	/* input buffer */ 
	/*����������Ϣ�Ļ�������512bits*/
	unsigned char buffer[64];  
} SGMD5_CTX;


// 
typedef void (*pMD5Init)(SGMD5_CTX *);
typedef void (*pMD5Update)(SGMD5_CTX *, unsigned char *, unsigned int);
typedef void (*pMD5Final)(unsigned char [16], SGMD5_CTX *);


void SG_MD5Init (SGMD5_CTX *context);
void SG_MD5Update(SGMD5_CTX *context,unsigned char * input,unsigned int  inputLen);
void SG_MD5Final (unsigned char digest[32],SGMD5_CTX *context);

typedef enum _MD5_FUNCLIST
{
	FUNC_MD5Init=3,
	FUNC_MD5Update,
	FUNC_MD5Final
}MD5_FUNCLIST;


#endif
