// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_type.h 209 2009-07-21 02:24:47Z nazy $
#ifndef __XLITE_E_TYPE_H__
#define __XLITE_E_TYPE_H__


/*!
 * @file xLite_E_type.h
 * @brief �������Ͷ���
 */


#define XLITE_E_IMAGE_NO_FLAG						0x00
#define XLITE_E_IMAGE_SHARE_BUFFER					0x01
#define XLITE_E_IMAGE_HAS_LINE_ADDRESS				0x02
#define XLITE_E_IMAGE_SHARE_PALETTE					0x04	
#define XLITE_E_IMAGE_STATIC						0x08	/*!< ��̬ͼƬ,�ӻ���ָ���ʱ��ʹ�� */

#define XLITE_E_IMAGE_ERR_NO_ERROR					0x00
#define XLITE_E_IMAGE_ERR_SOURCE_TOO_LARGE			-1L
#define XLITE_E_IMAGE_ERR_PF_NOT_MATCH				-2L


#define	XLITE_RED_MASK								(0x1F << 11)
#define	XLITE_GREEN_MASK							(0x3F << 5)
#define	XLITE_BLUE_MASK								(0x1F)


/*!
 * @brief ���ظ�ʽ����
 * @sa xLite_E_util.h
 */
typedef enum
{
	xlite_pf_unknown = 0,			/*!< δ֪/���Ϸ������ظ�ʽ */
	xlite_pf_rgb_444,				/*!< ������12bits���,ռ��16bits(2bytes)*/
	xlite_pf_rgb_565,				/*!< ������16bits���,ռ��16bits(2bytes),�ø�ʽΪ����Ĭ�ϵ���Ļ�����ʽ*/
	xlite_pf_rgb_888,				/*!< ������24bits���,ռ��24bits(3bytes)*/
	xlite_pf_index_8,				/*!< ����Ϊһ��������һ��256ɫ��ɫ���ֵ,ռ��8bits(1byte),�ø�ʽ�ɱ��������*/
	xlite_pf_index_1				/*!< ����Ϊ��bit��ֵ,ռ��1bit,�ø�ʽ��ĳЩ����֧�� */
} xlite_pixel_format;

//////////////////////////////////////////////////////////////////////////
// xlite_E_image.h
//////////////////////////////////////////////////////////////////////////


/*!
 * @struct xlite_image xLite_E_type.h xLite_E_image.h
 * @brief ����ͼ����Դ������
 * @sa xLite_E_image.h
 */
typedef struct  
{
	xl_uint32			flags;				/*!< ��־λ */
	xl_uint16			width;				/*!< ͼ�εĿ�� */
	xl_uint16			height;				/*!< ͼ�εĸ߶� */

	xlite_pixel_format	pf;					/*!< ͼ�ε����ظ�ʽ */

	
	xl_uint32			buffer_length;		/*!< ͼ�εĻ���ĳ��� */
	
	xl_uint16			bytes_per_line;		/*!< ͼ�λ���ÿ��ռ�õ��ֽ��� */
	xl_uint16			palette_length;		/*!< ͼ�ε�ɫ��ռ�õ��ֽ��� */

	xl_void*			buffer;				/*!< ͼ�λ����ָ�� */
	xl_void*			palette;			/*!< ͼ�ε�ɫ���ָ�� */
	xl_void**			line_address;		/*!< ͼ���е�ַ��ָ�� */
} xlite_image;

typedef xlite_image*	xlite_himage;




/*
 * @typedef GIF decoder handle
 */
typedef xl_void*		xlite_gif_hdecoder;



//////////////////////////////////////////////////////////////////////////
/*!
 * @struct xlite_point xLite_E_type.h
 * @brief 2D��ṹ
 */
typedef struct  
{
	xl_int32			x;
	xl_int32			y;
} xlite_point;

/*!
 * @brief ����һ��xlite_point���Ҹ�ֵ
 */
#define xlite_E_point_def(pointname,x,y)		xlite_point pointname = { (x), (y), }

//////////////////////////////////////////////////////////////////////////
// xLite_E_rect.h

/*!
 * @brief ����������ݵĽṹ
 * @sa xLite_E_rect.h
 */
typedef struct  
{
	xl_int32			left;				/*!< ���ε�������� */
	xl_int32			right;				/*!< ���ε��ұ����� */
	xl_int32			top;				/*!< ���εĶ������� */
	xl_int32			bottom;				/*!< ���εĵײ����� */
} xlite_rect;

/*!
 * @brief ����һ��xlite_rect���Ҹ�ֵ
 */
#define xlite_E_rect_def(rectname,left,top,right,bottom)					\
	xlite_rect rectname = { (left), (right), (top), (bottom) }

//////////////////////////////////////////////////////////////////////////
// xLite_E_raster.h
//////////////////////////////////////////////////////////////////////////

/*
 * ������,�ڲ�ʹ��
 */
typedef struct  
{
	xl_uint16*	table;
	xl_uint32	length;
	xl_uint32	max_length;
} xlite_clip_stretch_table;


/*
 *  ����ͼƬ�ļ�������,�ڲ�ʹ��
 */
typedef struct  
{
	// source rectangle
	xlite_rect source_rect;		
	// target rectangle
	xlite_rect target_rect;
	
	// stretch table of horizontal
	xlite_clip_stretch_table horz_tbl;
	// stretch table of vertical
	xlite_clip_stretch_table vert_tbl;
} xlite_clip_data;



/*
 * ����ֱ�ߵļ�������,�ڲ�ʹ��
 */
typedef struct  
{
//	xl_bool is_out_screen;
//	xlite_rect canvas_rect;
	xlite_point pt1;
	xlite_point pt2;
} xlite_line_clip_data;


/*! @typedef xl_uint8 xlite_flip_mode */
typedef xl_uint8			xlite_flip_mode;

/*! �޷�תģʽ */
#define XLITE_FLIP_NONE		0x00
/*! ˮƽ��תԴͼ */
#define XLITE_FLIP_HORZ		0x01
/*! ��ֱ��תԴͼ */
#define XLITE_FLIP_VERT		0x02
/*! ˮƽ�Ҵ�ֱ��תԴͼ */
#define XLITE_FLIP_HORZVERT	(XLITE_FLIP_VERT | XLITE_FLIP_HORZ)

#define XLITE_FLIP_INVALID	0xFF

/*!
 * @brief ���ػ��ģʽ
 */
typedef enum
{
	xlite_blend_copy = 0,			/*!< ���� */
	xlite_blend_func,				/*!< ʹ�û�Ϻ���,�ٶ��� */

	xlite_blend_invalid = 0xFF
} xlite_blend_mode;

#define XLITE_HALF_ALPHA	16

/*! �յĻ�Ϻ��� */
#define XLITE_BLEND_COLOR_NULL				0xFF
/*! ʹ����ɫ���ӻ�� */
#define XLITE_BLEND_COLOR_ADDITIVE			0
/*! ʹ��alpha��� */
#define XLITE_BLEND_COLOR_ALPHA				1
/*! ʹ��1/4���ӻ�� */
#define XLITE_BLEND_COLOR_QUARTER_ADDITIVE	2
/*! ʹ���Զ����� */
#define XLITE_BLEND_COLOR_USER				3





typedef xl_uint8*(* xlite_E_raster_locate_buffer_func)(xlite_himage,const xlite_rect*,xl_int32*,xl_int32*);
typedef xl_void (* xlite_E_raster_bitblt_buffer_func)(xl_void*,xl_uint16*,xl_uint32,xl_uint8*,xl_uint16*,xl_int32,xl_int32,xl_int32,xl_int32);
typedef xl_void (* xlite_E_raster_stretch_buffer_func)(xl_void*,xl_uint16*,xl_uint32,xl_uint8*,xl_uint16*,xl_int32,xl_int32,xl_int32,xl_int32,xlite_clip_stretch_table*,xlite_clip_stretch_table*);
typedef xl_uint16 (* xlite_E_raster_blend_color_func)(xl_void*,xl_uint16,xl_uint16);
typedef xl_void (* xlite_E_raster_draw_hv_line_func)(xl_void*,xlite_himage,xl_int32,xl_int32,xl_uint32,xl_uint16);
typedef xl_void (* xlite_E_raster_draw_line_func)(xl_void*,xlite_himage,xl_int32,xl_int32,xl_int32,xl_int32,xl_uint16);
typedef xl_void (* xlite_E_raster_fill_rectangle_func)(xl_void*,xlite_himage,const xlite_rect*,xl_uint16);


/*!
 * @brief ����2D���������ݵĽṹ
 * @sa xLite_E_raster.h
 */
typedef struct  
{
	xl_uint8				key_color_index;						/*!< ͸��ɫ���� */
	xl_uint8				palette_offset;							/*!< ��ɫ��ƫ�� */
	xl_uint8				alpha_value;							/*!< alpha ֵ */
	xlite_flip_mode			flip_mode;								/*!< ��תģʽ */

	
	xl_bool					has_user_clip_rect;						/*!< �Ƿ����û��Զ���ļ����� */
	xlite_rect				user_clip_rect;							/*!< �û��Զ�����þ��� */
	xlite_clip_data			clip_data;								/*!< ���Ƽ������� */
	xlite_line_clip_data	line_clip_data;							/*!< ����ֱ�߼������� */

	xl_bool					filte_key_color;						/*!< �Ƿ����͸��ɫ */
	xlite_blend_mode		blend_mode;								/*!< ��ǰ���ػ��ģʽ */
	
	// Function Pointer
	xlite_E_raster_locate_buffer_func	locate_buffer;				/*!< Function Pointer */
	xlite_E_raster_bitblt_buffer_func	bitblt_buffer;				/*!< Function Pointer */
	xlite_E_raster_stretch_buffer_func	stretch_buffer;				/*!< Function Pointer */
	xlite_E_raster_blend_color_func		blend_color;				/*!< Function Pointer */
	xlite_E_raster_draw_hv_line_func	draw_horz_line;				/*!< Function Pointer */
	xlite_E_raster_draw_hv_line_func	draw_vert_line;				/*!< Function Pointer */
	xlite_E_raster_draw_line_func		draw_line;					/*!< Function Pointer */
	xlite_E_raster_fill_rectangle_func	fill_rectangle;				/*!< Function Pointer */
} xlite_raster;



//////////////////////////////////////////////////////////////////////////
// xLite_E_graphics.h
//////////////////////////////////////////////////////////////////////////

#define XLITE_TEXT_SIZE_SMALL						0
#define XLITE_TEXT_SIZE_MEDIUM						1
#define XLITE_TEXT_SIZE_LARGE						2

typedef struct  
{
	xl_uint8		key_color_index;
	xl_uint8		palette_offset;
	xl_uint8		alpha_value;
	xlite_flip_mode	flip_mode;
	xl_uint8		is_filte_key_color;
	xl_uint8		has_user_clip;
	xlite_rect		user_clip;

} xlite_raster_state;



/*!
 * @brief Graphics���ݽṹ
 */
typedef struct  
{
	xlite_himage	surface;		/*! Graphics ����Ŀ��ͼ�� */
	xlite_raster	raster;			/*! Graphics ���õ�2D������ָ�� */

	xlite_raster_state	raster_state;	/*! ������Ⱦ��״̬ */

	// ���浱ǰ������״̬,add by ken
	xl_color		text_color;
	// ��ǰ�����ִ�С
	xl_int32		text_size;
	
} xlite_graphics;


//////////////////////////////////////////////////////////////////////////
// xLite_list.h
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief ˫������ڵ�����
 */
typedef struct  
{
	xl_void*	data;		/*!< ���� */
	xl_void*	prev;		/*!< ָ��ǰһ���ڵ� */
	xl_void*	next;		/*!< ָ���һ���ڵ� */
} xlite_list_node;

/*!
 * @brief ˫���������ݽṹ
 */
typedef struct  
{
	xlite_list_node* head;					/*!< �����е�һ���ڵ� */
	xlite_list_node* tail;					/*!< ���������һ���ڵ� */
	xl_uint32 number_nodes;					/*!< �����еĽڵ����� */
	
	xl_uint32 node_pool_size;				/*!< ����ڵ�ش�С */
	xl_uint32 number_node_in_pool;			/*!< ��ǰ����ڵ���нڵ����� */
	xlite_list_node* pool_nodes;			/*!< �ڵ���е�һ���ڵ� */
} xlite_list;


//////////////////////////////////////////////////////////////////////////
// xlite_E_text_render.h
//////////////////////////////////////////////////////////////////////////
#define XLITE_E_TEXT_RENDER_FLAG_NONE			0x00
#define XLITE_E_TEXT_RENDER_FLAG_ALIGN_LEFT		0x01
#define XLITE_E_TEXT_RENDER_FLAG_ALIGN_CENTER	0x02
#define XLITE_E_TEXT_RENDER_FLAG_ALIGN_RIGHT	0x04
#define XLITE_E_TEXT_RENDER_FLAG_ALIGN_TOP		0x08
#define XLITE_E_TEXT_RENDER_FLAG_ALIGN_VCENTER	0x10
#define XLITE_E_TEXT_RENDER_FLAG_ALIGN_BOTTOM	0x20
#define XLITE_E_TEXT_RENDER_FLAG_MULTI_LINE		0x40
#define XLITE_E_TEXT_RENDER_FLAG_AUTO_CLIP		0x80

// �����һЩ����
typedef struct  
{
	// �м��
	xl_int32 line_space;
	// �ַ����
	xl_int32 char_space;
} xlite_text_render_properties;


//////////////////////////////////////////////////////////////////////////
// xlite_E_storage.h
//////////////////////////////////////////////////////////////////////////

#define XLITE_E_STORAGE_FLAG_NONE				0x00
#define XLITE_E_STORAGE_FLAG_AUTO_DELETE		0x01


typedef xl_void (* xlite_E_storage_delete_data_callback)(xl_void* data,xl_void* param);

/*
 * @brief �洢��ͨ�ýڵ���Ϣ
 */
typedef struct  
{
	xl_uint16 ref_num;
	xl_uint32 hash;
	xl_void* data;
} xlite_storage_node;

typedef struct  
{
	xlite_list node_list;
	xlite_E_storage_delete_data_callback delete_data_callback;
	xl_void* callback_param;
} xlite_storage;


//////////////////////////////////////////////////////////////////////////
// xLite_E_image_storage.h
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief ͼ��洢��
 */
typedef struct
{
	xlite_storage storage_impl;
} xlite_image_storage;





//////////////////////////////////////////////////////////////////////////
// xLite_E_sprite.h
//////////////////////////////////////////////////////////////////////////

/*! 
 * @brief �����ȡͼ����Դ���ػص�����
 */
typedef xlite_himage (* xlite_E_sprite_on_load_image)(xl_uint32 hash);

/*!
 * @brief �������ײ�󶨺�
 */
typedef struct  
{
	xl_uint8	flags;			/*!< �û��Զ����־λ */
	xl_uint16	pos_pv_index;	/*!< ��ײ������ */
	xl_uint16	size_pv_index;	/*!< ��ײ�гߴ� */
} xlite_sprite_bbox;


/*!
 * @brief ������ʹ�õĳɶ���ֵ
 */
typedef struct  
{
	xl_uint16	value_1;		/*!< ��ֵ1 */
	xl_uint16	value_2;		/*!< ��ֵ2 */
} xlite_sprite_pair_value;

typedef xlite_sprite_pair_value*				xlite_sprite_pv_ptr;

/*!
 * @brief �����֡���ݲ�
 */
typedef struct  
{
//	xl_uint8				offset_pal;				/*!< ��ɫ��ƫ�� */
	xlite_flip_mode			flip_mode;				/*!< ��תģʽ */
	xl_uint16				dest_pos_pv_index;		/*!< Ŀ������ */
	xl_uint16				dest_size_pv_index;		/*!< Ŀ��ߴ� */
	xl_uint16				src_pos_pv_index;		/*!< Դͼ���� */
	xl_uint16				src_image_index;		/*!< Դͼ������ */
//	xlite_himage			src_image;				/*!< Դͼ��Դ */
	xl_uint16				dummy;					/*!< ����Ϊ���ýṹ4�ֽڶ���*/
} xlite_sprite_frame_data_layer;

/*!
 * @brief �����֡���ݽṹ
 */
typedef struct  
{
	xl_uint32	number_layer;						/*!< ֡�����еĲ�����*/
	xlite_rect  rectangle;
	xlite_sprite_frame_data_layer*	layers;			/*!< ֡���ݲ����� */
} xlite_sprite_frame_data;

/*!
 * @brief �����߼�֡�ṹ
 */
typedef struct  
{
	xlite_flip_mode				flip_mode;			/*!< ��תģʽ */
	xl_uint16					dest_pos_pv_index;	/*!< Ŀ������ */
	xl_uint16					interval;			/*!< ��֡ͣ��ʱ�� */
	xl_uint16					number_bbox;		/*!< ��ײ�е����� */
	xlite_sprite_bbox*			bboxes;				/*!< ��ײ�нṹָ��*/
	xlite_sprite_frame_data*	frame_data;			/*!< ���߼�֡ʹ�õ�֡����ָ�� */
} xlite_sprite_frame;

/*!
 * @brief ���鶯���ṹ
 */
typedef struct  
{
	xlite_flip_mode		flip_mode;				/*!< ��תģʽ */
	xl_uint16			id;						/*!< ����ID */
	xl_uint16			ref_id;					/*!< ����ID */
	xl_uint16			number_frames;			/*!< �����а������߼�֡���� */
	xlite_sprite_frame* frames;					/*!< �߼�֡�ṹָ�� */
} xlite_sprite_action;

/*!
 * @brief �������ݽṹ
 */
typedef struct  
{
	xl_uint32			hash;					/*!< �þ������ݵ�Hashֵ */
	xl_uint8			number_images;			/*!< �����������õ�ͼƬ���� */
	xlite_himage*		images;					/*!< �����������õ�ͼƬָ������ */
	

	xl_uint16			anthor_pv_index;		/*!< ê���PV�������� */
	xl_uint16			size_pv_index;			/*!< ����ߴ��PV�������� */


	xl_uint32 number_actions;					/*!< �������ݰ����Ķ����� */
	xlite_sprite_action*		actions;		/*!< ��������ָ�� */

	xl_uint32 number_frame_data;				/*!< �������ݰ�����֡�������� */
	xlite_sprite_frame_data*	frame_data;		/*!< ֡��������ָ�� */

	xlite_sprite_pair_value* pair_values;		/*!< PV����ָ�� */

	xl_uint8*			mem_pool;				/*!< �ڴ�� */
	xl_uint32			pool_size;				/*!< ��ǰ���ڴ�ش�С */
	xl_uint32			pool_alloc_size;		/*!< �ڴ���ѷ����С */
} xlite_sprite_data;



/*!
 * @brief ����������ṹ
 */
typedef struct  
{
	xlite_image_storage*	image_storage;	/*!< ͼƬ������ */
	xlite_storage			storage_impl;	/*!< ������ */
} xlite_sprite_storage;



//////////////////////////////////////////////////////////////////////////
// xlite_E_tilemap.h
//////////////////////////////////////////////////////////////////////////
/*! 
 * @brief ��ͼ��ȡͼ����Դ���ػص�����
 */
typedef xlite_himage (* xlite_E_tilemap_on_load_image)(xl_uint32 hash);
typedef xlite_sprite_data* (*xlite_E_tilemap_on_load_sprite)(xl_uint32 hash);

typedef struct  
{
	xlite_E_tilemap_on_load_image	load_image;
	xlite_E_tilemap_on_load_sprite	load_sprite;
} xlite_tilemap_load_callback;


#define	XLITE_E_TILEMAP_RESOURCE_IMAGE				1
#define XLITE_E_TILEMAP_RESOURCE_SPRITE				2


typedef struct  
{
	xl_uint8 type;
} xlite_tilemap_item_base;

typedef struct  
{
	xlite_tilemap_item_base base;
	xlite_flip_mode	flip_mode;
//	xl_uint8	blend_mode;				// Not support blend mode
	xl_uint8	key_color_filte;
	xl_uint8	resource_index;
	xl_int16	src_x;
	xl_int16	src_y;
	xl_uint16	src_w;
	xl_uint16	src_h;
} xlite_tilemap_item_image;

typedef struct  
{
	xlite_tilemap_item_base base;
	xl_uint16	action_id;
	xl_uint8	resource_index;
} xlite_tilemap_item_sprite;

typedef struct 
{
	xl_uint16 number_items;
	xlite_tilemap_item_base** items;
} xlite_tilemap_item_pool;


typedef struct  
{
	xl_uint8	type;
	xl_uint8	flags;
} xlite_tilemap_layer_data_base;

typedef struct
{
	xlite_tilemap_layer_data_base base;
	xlite_tilemap_item_pool item_pool;
	xl_int16 row;
	xl_int16 column;
	xl_uint16 tile_width;
	xl_uint16 tile_height;
	xl_uint16**	tile_item_index;
} xlite_tilemap_layer_data_tile;


typedef struct
{
	xl_uint16	flags;
	xl_uint16	item_index;
	xl_int16	x;
	xl_int16	y;
} xlite_tilemap_layer_data_free_item; 

typedef struct  
{
	xlite_tilemap_layer_data_base base;
	xl_uint16	count;
	xl_uint8	sort_method;
	xlite_tilemap_item_pool item_pool;
	xlite_tilemap_layer_data_free_item* items;
} xlite_tilemap_layer_data_free;

typedef struct  
{
	xlite_tilemap_layer_data_base base;
	xl_uint8 flag_bytes;
	xl_int16 row;
	xl_int16 column;
	xl_void** flags;
} xlite_tilemap_layer_data_tileflag;

typedef struct  
{
	xl_uint8 flags;
	xl_uint8 layer_index;
	xl_uint8 data_index;
	xl_int16 offset_x;
	xl_int16 offset_y;
	xl_uint16 bk_color;
	
} xlite_tilemap_layer;


typedef struct  
{
	xl_uint8 type;
	xl_uint32 hash;
	xl_void* data;
} xlite_tilemap_resource;

typedef struct  
{
	xl_uint32 hash;
	xl_uint8 scene_index;
	xl_uint8 number_layers;
	xl_uint8 number_resource;
	xlite_tilemap_layer_data_base** layer_data;
	xlite_tilemap_layer* layers;

	xl_uint8* mem_pool;
	xl_uint32 pool_size;
	xl_uint32 pool_alloc_size;

	
	xlite_tilemap_resource* resources;
} xlite_tilemap_data;


typedef struct
{
	xlite_sprite_storage*	sprite_storage;
	xlite_image_storage*	image_storage;
	xlite_storage			storage_impl;
} xlite_tilemap_storage;

//////////////////////////////////////////////////////////////////////////
// J11 tilemap
//////////////////////////////////////////////////////////////////////////

typedef struct  
{
	xl_uint16	value_1;
	xl_uint16	value_2;
} xlite_tilemap_j11_pair_value;

typedef struct
{
	xl_uint8 type;
	xl_uint8 added;
	xl_uint32 hash;
} xlite_tilemap_j11_resource;

typedef struct  
{
	xl_uint8 flags;
	xl_uint8 layer_data_index;
	xl_uint16 bk_color;
	xl_int16 offset;			/*! this is Index of pair values array. */
} xlite_tilemap_j11_layer;

typedef struct  
{
	xl_uint8 number_layers;
	xlite_tilemap_j11_layer* layers;
} xlite_tilemap_j11_scene;


typedef struct  
{
	const xl_uint8* buffer;
	xl_uint32 buffer_length;
	xl_uint32 current_pos;
	
	xl_uint32 hash;
	
	xlite_tilemap_j11_resource* resources;
	const xl_uint8* pair_value_buf;
	
	
	xlite_tilemap_j11_scene*	scenes;

	xl_uint8 number_scene;
	xl_uint8 number_resources;
	xl_uint8 number_frame_data;
	xl_uint8 last_error;


	xl_uint16* frame_data_size;
	const xl_uint8* frame_data_ptr;
	

	xl_uint8* mem_pool;
	xl_uint32 pool_size;
	xl_uint32 pool_alloc_size;

	xlite_E_tilemap_on_load_image load_image;
	xlite_E_tilemap_on_load_sprite load_sprite;
} xlite_tilemap_j11_decoder;


//////////////////////////////////////////////////////////////////////////
// xLite_E_tilemap_render
//////////////////////////////////////////////////////////////////////////
#define XLITE_E_TILEMAP_RENDER_FLAG_ENABLE_CACHE			0x01
#define XLITE_E_TILEMAP_RENDER_FLAG_ENABLE_SPRITE_UPDATING	0x02

typedef struct  
{
	xl_int16 x;
	xl_int16 y;
} xlite_tilemap_render_map_pos;


#define XLITE_E_TILEMAP_CACHE_UPDATE_ALL						0x04
#define XLITE_E_TILEMAP_CACHE_UPDATE_HORZ						0x01
#define XLITE_E_TILEMAP_CACHE_UPDATE_VERT						0x02
#define XLITE_E_TILEMAP_CACHE_UPDATE_NONE						0x00

typedef struct  
{
	xl_uint8 update_status;
	xlite_himage image;		// cached image
	xlite_tilemap_render_map_pos cached_pos;			// cached data position
	
	xl_int16 horz_update_left;
	xl_int16 horz_update_right;
	xl_int16 vert_update_top;
	xl_int16 vert_update_bottom;
} xlite_tilemap_render_cache;




typedef struct  
{
	xl_uint8	flags;		// flags of render
	xlite_tilemap_render_cache* cache;
	xlite_tilemap_data* data;
	xlite_graphics*	graphics;
	xlite_rect viewport;		// view port

	xlite_tilemap_render_map_pos map_pos;
} xlite_tilemap_render;




//////////////////////////////////////////////////////////////////////////
// xLite_E_http.h
//////////////////////////////////////////////////////////////////////////

/*! max URL length */
#define XLITE_E_HTTP_MAX_URL_LENGTH						0xFF
// host max length
#define XLITE_E_HTTP_MAX_HOST_LENGTH					64
// max uri length
#define XLITE_E_HTTP_MAX_URI_LENGTH						(XLITE_E_HTTP_MAX_URL_LENGTH - XLITE_E_HTTP_MAX_HOST_LENGTH - 7)
// max header length
#define XLITE_E_HTTP_MAX_HEADER_LENGTH					1024
// Buffer Length
#define XLITE_E_HTTP_BUFFER_LENGTH						20480
// HTTP�еĳ���
#define XLITE_E_HTTP_MAX_LINE_LENGTH					1024
// Value����ĳ���
#define XLITE_E_HTTP_MAX_VALUE_LENGTH					96
// Http-method
#define XLITE_E_HTTP_METHOD_GET							0x00
#define XLITE_E_HTTP_METHOD_POST						0x01
// Http connection
#define XLITE_E_HTTP_CONN_CLOSE							0x00
#define XLITE_E_HTTP_CONN_KEEP_ALIVE					0x01
// header
#define XLITE_E_HTTP_HEADER_USER_AGENT					"GTS_GTSBOX"
// ���ͬʱ���ٻỰ����
#define XLITE_E_HTTP_MAX_SESSION_OPEN					3
// Ĭ�ϳ�ʱms
#define XLITE_E_HTTP_TIMEOUT							30000

//////////////////////////////////////////////////////////////////////////
// Error no
//////////////////////////////////////////////////////////////////////////
#define XLITE_E_HTTP_ERR_SUCCESS						0
#define XLITE_E_HTTP_ERR_GETHOSTBYNAME					-1
#define XLITE_E_HTTP_ERR_CONNECT_FAIL					-2
#define XLITE_E_HTTP_ERR_BUFFER_OVERFLOW				-3
#define XLITE_E_HTTP_ERR_INVALID_URL					-4
#define XLITE_E_HTTP_ERR_NO_SERVICE						-5
#define XLITE_E_HTTP_ERR_REQUEST_EXIST					-6
#define XLITE_E_HTTP_ERR_NOT_ENOUGH_MEMORY				-7
#define XLITE_E_HTTP_ERR_SEND_FAIL						-8
#define XLITE_E_HTTP_ERR_RECEIVE_FAIL					-9
#define XLITE_E_HTTP_ERR_MAX_SESSION					-10
#define XLITE_E_HTTP_ERR_TIMEOUT						-11
#define XLITE_E_HTTP_ERR_RESPONSE							-12

#ifndef XLITE_NO_NETWORK
// HTTP �¼�
typedef enum
{
	// HTTP���ӽ���/ʧ��
	xlite_http_connect = 0,
	// HTTP���ݻ�������
	xlite_http_buffer_sent,
	// ���յ�HTTP��
	xlite_http_line_recv,
	// HTTPͷ�������
	xlite_http_head_recv,
	// ���յ�http body
	xlite_http_body_recv,
	// HTTP�����ж�
	xlite_http_close,
	// HTTP�Ự�����رյ�ǰ�Ự
	xlite_http_error
} xlite_http_event;



// Http�¼��ص�
// ���¼�Ϊ xlite_http_buffer_sent��ʱ��
// �������0˵�����ݿ���д��,���򷵻ؼ���д�����ݳ���
// ��ʱ��Ϊ xlite_http_line_recv��ʱ��
// codeΪline�ĳ���
// ���¼�Ϊ xlite_http_body_recv��ʱ��
// codeΪ��ǰbody�ڻ������ĳ���
// ����0˵����û�д���,���򷵻ش�����ֽ���
typedef xl_int32 (* xlite_E_http_event_handler)(xlite_http_event,xl_int32 code,xl_void* session);


// HTTP ����
typedef struct  
{
	// proxy type
	xl_uint8 use_proxy;
	// url
	xl_char url[XLITE_E_HTTP_MAX_URL_LENGTH + 1];
	// url length
	xl_uint32 url_len;
	// url only hash
	xl_uint32 url_hash;
	// Proxy Server addr
	xlite_socket_sockaddr_struct proxy_addr;
	// header
	xl_char *header;
	// header length
	xl_uint32 header_len;
	// body length
	xl_uint32 body_len;

	// handler
	xlite_E_http_event_handler handler;
} xlite_http_request;


#define XLITE_E_HTTP_SESSION_CLOSE						0x00
#define XLITE_E_HTTP_SESSION_QUERY_HOST					0x01		// gethostbyname
#define XLITE_E_HTTP_SESSION_CONNECTING					0x02
#define XLITE_E_HTTP_SESSION_CONNECTED					0x03
#define XLITE_E_HTTP_SESSION_SENDING					0x04
#define XLITE_E_HTTP_SESSION_SENT						0x05
#define XLITE_E_HTTP_SESSION_RECEIVING					0x06
#define XLITE_E_HTTP_SESSION_RECEIVED					0x07
#define XLITE_E_HTTP_SESSION_ERROR						0x08		//something wrong, close session

// HTTP Session
typedef struct  
{
	// ��ǰSession��״̬
	xl_uint8 state;
// 	// ���ӷ�ʽ
// 	xl_uint8 http_conn;
// 	// method
// 	xl_uint8 http_method;
	// HTTPͷ�Ƿ��Ѿ�������
	xl_uint8 http_head_recv;
	// HTTP ��Ӧ��
	xl_int32 http_response_code;
	// ����socket
	xlite_socket sock;
	// ���ӵĵ�ַ
	xlite_socket_sockaddr_struct conn_addr;
	// Ŀ��URL
	xl_char dest_url[XLITE_E_HTTP_MAX_URL_LENGTH + 1];
	// Host
	xl_char dest_host[XLITE_E_HTTP_MAX_HOST_LENGTH + 1];
	// Ŀ��˿�
	xl_uint32 dest_port;
	// Ŀ��URI
	xl_char dest_uri[XLITE_E_HTTP_MAX_URI_LENGTH + 1];
	// Data buffer
	xl_uint8 buffer[XLITE_E_HTTP_BUFFER_LENGTH];
	// ��ǰ���͵ĳ���
	xl_uint16 buf_pos;
	// ��ǰbuffer����Ч���ݵĳ���
	xl_uint16 buf_length;
	// header
	xl_char header[XLITE_E_HTTP_MAX_HEADER_LENGTH];
	// header����
	xl_int32 header_length;		
	// Body �ĳ���,���body_lengthΪ-1�Ļ�,˵�����ڽ���httpͷ
	xl_int32 body_length;		
	// �Ѿ�����(send or receive)��ɵĳ���(����header��body)
	xl_int32 finished_length;		
	// HTTP�ص�������ַ
	xlite_E_http_event_handler http_event_handler;
	// ������Ϣ
	xl_int32 error_code;
	// ����timeout
	xl_int32 conn_timeout;
	// ����timeout
	xl_int32 send_timeout;
	// ����timeout
	xl_int32 recv_timeout;
	// ���ɹ�����ʱ��
	xl_int32 last_act_time;
	//net��wap�ı�־
	xl_bool net_or_wap;

} xlite_http_session;


#endif


typedef struct  
{
	xlite_socket_sockaddr_struct conn_addr;
	xl_char dest_url[XLITE_E_HTTP_MAX_URL_LENGTH + 1];
	xl_uint32 dest_port;
} xlite_http_host;

#endif
