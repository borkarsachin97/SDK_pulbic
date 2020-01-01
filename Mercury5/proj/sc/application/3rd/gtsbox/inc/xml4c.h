#ifndef __XML4C_H__
#define __XML4C_H__

#include "xlite_type.h"
#include "xlite_E_type.h"

/************************************************************************/
/*                                                                      */
/*  struct and enum def                                                 */
/*                                                                      */
/************************************************************************/

// Tag�������ֵ
#define TAG_MAX 2048

typedef xl_int32 Token;

// ״̬����״̬
typedef enum
{
	// ��ʼ
	MACHINE_STATE_START = 0x0,
	// ��ǿ�ʼ
	MACHINE_STATE_TAG_START,
	// ��ǽ���
	MACHINE_STATE_TAG_END,
	// ��ǽ���,��ʾҪ���˵�����
	MACHINE_STATE_TAG_FILTER_END,
	//xml����
	MACHINE_STATE_DATA,
	// ������
	MACHINE_STATE_END,
	//��������
	MACHINE_ATTRIBUTE_DATA
}state_machine_state;

// ����������token����
typedef enum
{
	// ��ȡ���ļ����ȳ�����
	TOKEN_TYPE_END = 0x0,
	// ��ʼ���
	TOKEN_TYPE_TAG,
	//����
	TOKEN_TYPE_DATA,
	// �������
	TOKEN_TYPE_END_TAG,
	//���˵�TOKEN����<? xxx ?>,<! xxx>
	TOKEN_TYPE_FLITER_TAG,
	// ��ȡ��'\0'����
	TOKEN_TYPE_OVER
}token_type;

typedef enum
{
	// ��ʼ
	ATTRIBUTE_START = 0x0,
	//������
	ATTRIBUTE_NAME,
	//����ֵ
	ATTRIBUTE_VALUE,
	//����
	ATTRIBUTE_END
}attribute_enum;

typedef enum
{
	TOKEN_POZ_HEAD,//tokenΪͷ<a>
	TOKEN_POZ_TAIL//tokenΪβ</a>
}token_position;//token ��λ��

typedef enum
{
	//Ĭ�ϵ�token��ʽ��<a xxx="xxx">xxx</a>
	TOKEN_FOMAT_STANDARD,
	//token��ʽ��<a xxx="xxx" />
	TOKEN_FOMAT_FOR_SHORT,
	//token��������
	token_label_total
}token_fomat;

typedef enum
{
	TOKEN_ATTRIBUTE_FOMAT_NULL,		//KONG
	TOKEN_ATTRIBUTE_FOMAT_A,		//<a xx="xxxx">Ĭ��Ϊ˫����,��������е�����
	TOKEN_ATTRIBUTE_FOMAT_B			//<a xx='xxx'>������
}token_attribute_fomat;

// �ڵ�ṹ
typedef struct _xml_node
{
	//���ڵ�(Ϊ�˼������ݷ���ʹ�ã������ٽ�����Ƕ�ջ)
	struct _xml_node* father;

	//�ӽڵ㼯(����Ϊxml_node)
	xlite_list children;

	// ���Լ���
	xlite_list att_list;

	// �������
	xl_char*			node_name;
	
	// ������ݣ����ڵ������
	xl_char*			data;

	// ��������
	xl_char*			other;
}xml_node;

typedef struct
{
	// ��������
	xl_char*			name;	

	// ��������
	xl_char*			data;

}attribute;

typedef struct 
{
	//��ʼλ��
	xl_int32 curr_xml_start;

	//����λ��
	xl_int32 curr_xml_end;

	//��������
	xl_char curr_tag[TAG_MAX];
	
	//��ǰ�ڵ�
	xml_node *current_node;

	//ǰһ���ڵ�
	xml_node *pre_node;

	//token�ĸ�ʽ
	xl_int8 fomat;

	//tokenλ��
	xl_int8	token_poz;

	//���Ը�ʽ����
	xl_int8	crt_att_fomat;
}_xml;

/************************************************************************/
/*                                                                      */
/*                                                                      */
/*  Function Interfaces                                                 */
/*                                                                      */
/*                                                                      */
/*                                                                      */
/************************************************************************/

/*!
* @brief ��ǰ�ַ��Ƿ�Ϊ�ƶ��ַ�
* @param c1 ����ַ�
* @param c2 ����ַ�
* @return �����ͬ����TRUE,���򷵻�FALSE
*/
#define isChar(c1,c2) (c1 == c2)

//////////////////////////////////////////////////////////////////////////
// Global Functions


/*!
* @brief ����xml����buffer����󳤶�
* @param root_node ����xml���ڵ�
* @return ������ӵ��ܳ���
* @note �ݹ�
*/
xl_uint32 xml4c_get_xml_list_to_string_length(xml_node* root_node);

/*!
* @brief ����XML
* @param buffer XML����
*/
xl_void xml4c_string_to_xml_list(const xl_char *cBuffer,xlite_list *xml_list);

/*!
* @brief ����xml����buffer����
* @param buffer ���buffer
* @param root_node ����xml���ڵ�
* @return ������ӵ��ܳ���
* @note �ݹ�
*/
xl_int32 xml4c_xml_list_to_string(xl_char* buffer, xml_node* root_node);

/*!
* @brief �������ڵ�
* @param root_list ������
* @param root_name �ڵ�����
* @param root_data �ڵ�����
*/
xl_void xml4c_create_root(xlite_list *root_list,xl_char *root_name,xl_char *root_data);

/*!
* @brief �����ڵ�
* @param node_name �ڵ�����
* @param node_data �ڵ�����
*/
xml_node* xml4c_create_node(xl_char *node_name,xl_char *node_data);

/*!
* @brief ���ӽڵ�
* @param fnode �ڵ�����
* @param node �ڵ�����
*/
xl_void xml4c_connect_node(xml_node* fnode,xml_node *node);

/*!
* @brief �����ڵ�����
* @param attrName ��������
* @param attrValue ����ֵ
*/
attribute* xml4c_create_attribute(xl_char* attrName,xl_char* attrValue);

/*!
* @brief ��ӽڵ������
* @param node �ڵ�
* @param attr �ڵ�����
*/
xl_void xml4c_add_attribute(xml_node* node,attribute *attr);

/*!
* @brief ��ȡ�ڵ�ĺ�������
* @param xnode �ڵ�����
*/
xlite_list* xml4c_get_node_children_list(xml_node *xnode);

/*!
* @brief ��ȡ���ڵ�
* @param rlist ��������
*/
xml_node* xml4c_get_root_node(xlite_list *rlist);

/*!
* @brief �ͷŽڵ��ڴ�
* @root_node ����ڵ�
*/
xl_void xml4c_xml4c_release(xml_node *root_node);

/*!
* @brief	�ͷŽڵ��ڴ�
* @name		�ڵ�����
* @l  		����
* @note 	��ݹ��������нڵ㶼ɾ��
*/
xl_void xml4c_list_delete_node_by_name(xlite_list *l,xl_char *name);

//add and remove by dk 2011-1-4  
/*!
* @brief ���xml����Ч��
* cBuffer ����ڵ�
*/
xl_bool xml4c_check_xml_validity(const xl_char *cBuffer);

/************************************************************************/
/*                                                                      */
/*                                                                      */
/*    static func defs                                                  */
/*                                                                      */
/*                                                                      */
/************************************************************************/
/*!
* @brief	�Ƿ�ΪӢ����ĸ
* cChar 	��ǰ�ַ�
*/
static xl_bool isCharEnglish(const xl_char cChar);

/*!
* @brief	�Ƿ�Ϊ����
* cChar 	��ǰ�ַ�
*/
static xl_bool isCharNumber(const xl_char cChar);

/*!
* @brief	�ƶ�bufferָ�뵽��һ��λ��
*/
static xl_char getNextChar(const char* buffer);

/*!
* @brief	�鿴ǰһ���ַ�
* cChar 	��ǰ�ַ�
*/
static xl_char view_PreChar_only(const char* buffer);

/*!
* @brief	�鿴�ַ�
* @n 		Ҫ�鿴��λ�ã�0Ϊ��ǰλ��
*/
static xl_char view_NextChar_only(const char* buffer,xl_int8 n);

/*!
* @brief	��ȡtoken����Ϊ��TOKEN_FOMAT_FOR_SHORT��token�ĳ���
*/
static xl_int32 get_token_head_len_for_type_short(const char *buffer);

/*!
* @brief	ȥ���ַ���ĩβ�Ŀո�س��ȸ�ʽ
*/
static xl_void xml4c_modify_string(xl_char* chararr);

/*!
* @brief	��ȡ��һ��TOKEN
*/
static Token xml4c_getNextToKen(const xl_char* buffer);

/*!
* @brief	�ͷ�xml�������ڵ�����
* @root_node	�ڵ���
*/
static xl_void xml4c_xml4c_release_ex(xml_node **root_node);

/*!
* @brief	����token������
* @att_list	��������
* buffer	
*/
static xl_void	xml4c_parse_token_tag_attribute(xlite_list *att_list,xl_char *buffer);

/*!
* @brief	�ڵ��������ݱ�תΪ�ַ���
* @root_node	�ڵ�����
*/
static xl_void xml4c_list_child_attribute_to_string(xml_node *root_node,xl_char** curr);

/*!
* @brief	�ڵ��������ݱ�תΪ�ַ���
* @root_node	�ڵ�����
*/
static xl_void xml4c_list_child_other_to_string(xml_node *root_node,xl_char** curr);

/*!
* @brief	�ڵ��Ƿ�������
* @node		�ڵ�
*/
//static xl_char* xml4c_is_node_has_data(xml_node *node);

/*!
* @brief	�ƶ�BUFFERָ��
* @poz		buffer��λ��
*/
static xl_char get_next_char(const char* buffer,xl_int32 *poz);

/*!
* @brief	��ǰ�ַ��Ƿ���Щ�����ʽ
* @cChar		��ǰ�ַ�
*/
static xl_bool isCharTabs(const xl_char cChar);

/*!
* @brief	ת��XML��һЩ�����ַ�
* @pBuffer		
*/
static xl_char trans_special_symbol(const xl_char *pBuffer);

/*!
* @brief	��ȡnode���ȵݹ�
* @pBuffer		
*/
static xl_uint32 get_xml_list_to_string_length(xml_node* root_node);
static xl_uint32 get_list_child_other_to_string_length(xml_node *root_node);
static xl_uint32 get_list_child_attribute_to_string_lenght(xml_node *root_node);

#endif
