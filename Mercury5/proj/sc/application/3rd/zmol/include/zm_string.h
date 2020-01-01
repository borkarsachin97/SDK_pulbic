#ifndef _ZHANGM_STOCK_STRING_H_
#define _ZHANGM_STOCK_STRING_H_

#include "zm_typedef.h"


//#ifdef _DEBUG
//#define _ZHANGM_MEMORY_DEBUG_
//#endif

#ifdef _ZHANGM_MEMORY_DEBUG_
/*
 *	�ڴ����
 */
zm_extern zm_void* zm_malloc_debug(zm_int nSize, const zm_int8* file, zm_int line);

/*
 *	�ͷ��ڴ�
 */
zm_extern zm_void  zm_free_debug(zm_void* pszMemBlock);

/*
 *	�����ڴ�й©
 */
zm_extern zm_void zm_memory_debug_report(zm_void);

/**
 * �ڴ�й©���
 */
#define zm_malloc(a) zm_malloc_debug(a, __FILE__, __LINE__)
#define zm_free(a) zm_free_debug(a)
#else
/*
 *	�ڴ����
 */
zm_extern zm_void* zm_malloc(zm_int nSize);

/*
 *	�ͷ��ڴ�
 */
zm_extern zm_void  zm_free(zm_void* pszMemBlock);
#endif
/*
 *	�ڴ濽��
 */
zm_extern zm_void  zm_memcpy(zm_void* pszDest, const zm_void* pszSrc, zm_int nSize);

/*
 *	�����ڴ�����
 */
zm_extern zm_void  zm_memset(zm_void* pszDest, zm_int nC, zm_int nSize);

/*
 * �ƶ��ڴ�
 */
zm_extern zm_void zm_memmove(zm_void* pszDest, const zm_void* pszSrc, zm_int nSize);

/*
 *	�ڴ�Ƚ�
 */
zm_extern zm_int   zm_memcmp(const zm_void* pBuf1, const zm_void* pBuf2, zm_int nSize);

/*
 *	���ַ�������
 */
zm_extern zm_int   zm_wstrlen(const zm_int8* pszUniStr);

/*
 *	�ַ�������
 */
zm_extern zm_int   zm_strlen(const zm_int8* pszString);

/*
 *	�ַ�������
 */
zm_extern zm_int8* zm_strcpy(zm_int8* pDest, const zm_int8* pstrSource);

/*
 *	�ַ����Ƚ�
 */
zm_extern zm_int   zm_strcmp(zm_int8*pStr1, zm_int8*pStr2);

/*
 *	�����ַ���
 */
zm_extern zm_int8* zm_strcat(zm_int8* pDest, const zm_int8* pstrSource);

/*
 *	�Ӵ�ƥ��
 */
zm_extern zm_int8* zm_strstr(const zm_int8* pString, const zm_int8* pFind);

/*
 *	�ı�����ת���� long
 */
zm_extern zm_int32 zm_atol(const zm_int8* pString);

/*
 *	lvalue ת�����ı� pBuffer ��
 */
zm_extern zm_void  zm_ltoa(zm_int8* pBuffer, zm_int32 lvalue);

/*
 *	���ı�pString�еĸ�����ת���� zm_real64 ����
 */
zm_extern zm_real64 zm_atof(const zm_int8* pString);

/*
 *	fvalue ������ת�����ı� pBuffer ��, nDecimal λ������С��λ��
 */
zm_extern zm_void zm_ftoa(zm_int8* pBuffer, zm_real64 fvalue, zm_int nDecimal);

/*
 *	��ʽ���ַ���
 */
zm_extern zm_void zm_sprintf_int(zm_int8* pBuffer, const zm_int8* pFormat, zm_int lvalue);
/*
 *	��ʽ���ַ���
 */
zm_extern zm_void zm_sprintf_string(zm_int8* pBuffer, const zm_int8*  pFormat, const zm_int8* str);

/**
  * gb2312 ת ucs2
  */
zm_extern zm_void zm_gb_to_ucs2(zm_int8 * src, zm_int8 *dest);

/**
  * ucs2 ת gb2312
  */
zm_extern zm_void zm_ucs2_to_gb(zm_int8 * src, zm_int8 *dest, zm_int  isBigEn);

#endif/*_ZHANGM_STOCK_STRING_H_*/
