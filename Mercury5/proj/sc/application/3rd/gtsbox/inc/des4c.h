#ifndef __DES4C_H__
#define __DES4C_H__
#include "encryption.h"

/*!
* @brief		ʹ��DES����
* @param Out	���������
* @param In		���뻺����
* @param inlen	���뻺��������
* @param Key	��Կ(64bit) ÿ8λ����żУ��
* @param keylen	��Կ����
* @param Type	��������(ENCRYPT(0)���ܣ�DECRYPT(1)����)
* @return		�ɹ�����TRUE�����򷵻�FALSE
* @note			Out ���� >= ((inlen+7)/8)*8,����inlen�������8�ı�������С������
* @note			��keylen>8ʱ�Զ�ʹ��3��DES��/����,����ʹ�ñ�׼DES��/����.����16�ֽں�ֻȡǰ16�ֽ�
* @sa			OPERATION
*/
BIT8 Des_Ex(BIT8 *Out,BIT8 *In,BIT64 inlen,const BIT8 *Key,BIT32 keylen,OPERATION Type);

#endif