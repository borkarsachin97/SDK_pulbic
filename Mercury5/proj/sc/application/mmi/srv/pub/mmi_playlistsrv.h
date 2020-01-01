/**
* @file mmi_playlistsrv.h
*
* Service without using State Machine - PLAYLISTSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_PLAYLISTSRV
* Interface Id: IID_PLAYLISTSRV
*
* @version $Id$
*/
#ifndef __MMI_PLAYLISTSRV_H__
#define __MMI_PLAYLISTSRV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mmi_mae_vectormodel.h"
#include "mmi_mae_arraymodel.h"
#include "mmi_mae_datamodel.h"
#include "mmi_base_util.h"
#include "filemgr_fstream.h"

#define M3UFOLDERLENGTH 30
#define PLAYLISTSRV_LOAD_MAX_PLAYLIST_ENTITY_ONCE (1000)

#ifdef __ONBOARD_USER_STORAGE_MMI__
#define DEFAULT_M3U_FOLDER		L"fs:/PHON/My Playlist/"
#else
#define DEFAULT_M3U_FOLDER		L"fs:/CARD/My Playlist/"
#endif
#define MY_MUSIC_PLAYLIST  L"My music"
#define ALL_VIDEOS_PLAYLIST L"ALLVIDEOSPLAYLIST"

#define M3U_SUFFIX L".M3U"
#define M3U_SUFFIX2 L".m3u"
#define V3U_SUFFIX  L".V3U"
#define V3U_SUFFIX2 L".v3u"
#define SYSFILE_LASTPLAYBACK L"_sysLastPlay.sys"

typedef enum
{
    NOT_A_PLAYLIST_TYPE = 0
   ,MUSIC_PLAYLIST_TYPE
   ,VIDEO_PLAYLIST_TYPE
   ,ALL_PLAYLIST_TYPE
} PLAYLISTSRV_PlaylistType_e;


typedef enum
{
    M3U_ELEMENT_FIRST
   ,M3U_ELEMENT_DURATION_TITLE = M3U_ELEMENT_FIRST
   ,M3U_ELEMENT_PATH
   ,M3U_ELEMENT_ALL
   ,M3U_ELEMENT_LAST = M3U_ELEMENT_ALL,
} PLAYLISTSRV_M3U_Element_Info_e;

typedef enum PLAYLISTSRV_ListType_e_
{
    PLAYLISTSRV_LIST_TYPE__DEFAULT
   ,PLAYLISTSRV_LIST_TYPE__USER_CREATED
} PLAYLISTSRV_ListType_e;

typedef enum
{
    PLAYLISTSRV_REQUEST_SUCCESS
   ,PLAYLISTSRV_REQUEST_FAILED
   ,PLAYLISTSRV_REQUEST_MEMORY_CARD_FULL
   ,PLAYLISTSRV_REQUEST_OUT_OF_MAX_ITEMS //excess the maximum item of a playlist(PLAYLISTSRV_MAX_PALYLIST_ITEMS)
} PLAYLISTSRV_Rquest_Result_e;

typedef u32 M3UElementLocation;

typedef struct
{
    s32 nDuration;     // The duartion for the media. It may be 0.
    MAE_WChar *pTitle;   // The tile for the media
    MAE_WChar *pPath;    // The path to the media
} PLAYLISTSRV_M3UElement_t;


typedef struct
{
    PLAYLISTSRV_PlaylistType_e ePlayListType;
    MAE_WChar *pPlaylistName;
} PLAYLISTSRV_PlaylistElement_t;

typedef struct
{
    u32 nEncoding;
    u32 nFileEndPosition;
    PLAYLISTSRV_ListType_e eListType;
    IArrayModel *pPlayListArrayModel;
    MAE_WChar *pPlalistFullPathName;
} PLAYLISTSRV_PlalistDataModelInfo_t;

/** PlaylistSrvLoadPlaylistDataCB
* @brief         The callback function to notify the result of the playlist data loading.
*
* @param[out]    pThis                 The pointer of the applet.
* @param[out]    eResult               The loading result.
*                                      PLAYLISTSRV_REQUEST_SUCCESS             Successful for the loading request.
*                                      PLAYLISTSRV_REQUEST_FAILED              Failed for the loading request.
*                                      PLAYLISTSRV_REQUEST_MEMORY_CARD_FULL    The memory card is full.
*                                      PLAYLISTSRV_REQUEST_OUT_OF_MAX_ITEMS    The requested index exceeds the current maximum.
* @param[out]    pPlaylistDataModel    Pointer to the memory to fill with the pointer to the array model (the content of the play list).
*/
typedef void (*PlaylistSrvLoadPlaylistDataCB)(void *pThis, PLAYLISTSRV_Rquest_Result_e eResult, IDataModel *pPlaylistDataModel);
/** PlaylistSrvCmnCB
* @brief         The callback function to notify the result of the playlist manipulation.
*
* @param[out]    pThis      The pointer of the applet.
* @param[out]    eResult    The result.
*                           PLAYLISTSRV_REQUEST_SUCCESS             Successful for the loading request.
*                           PLAYLISTSRV_REQUEST_FAILED              Failed for the loading request.
*                           PLAYLISTSRV_REQUEST_MEMORY_CARD_FULL    The memory card is full.
*                           PLAYLISTSRV_REQUEST_OUT_OF_MAX_ITEMS    The requested index exceeds the current maximum.
*/
typedef void (*PlaylistSrvCmnCB)(void *pThis, PLAYLISTSRV_Rquest_Result_e eResult);

typedef struct
{
    MAE_WChar *strLastPlaylistPath; // Last playing playlist path
    MAE_WChar *strLastPlaySongPath; // Last playing song path. strLastPlaySongPath will be valid if playlist is predefined.(All Music)
    u32 nLastStoredIdx; // The last playing index or last playing content ID. nLastStoredIdx will be valid if playlist is user-defined.
    boolean bIsPredefinedList; // It indicates if the playlist is predefined.
} PLAYLISTSRV_Playback_Info_t;

typedef struct PLAYLISTSRV_FileOpData_t_
{
    s32 nBufStartPos;           ///< The position of buffer start, relative to the beginning of file. It is used to control the
    s32 nBufCurrentPos;         ///< The position of buffer start, relative to the beginning of file. It is used to control the
    s32 nBufEndPos;             ///< The position of buffer start, relative to the beginning of file. It is used to control the
    u32 nStreamSize;            ///< valid if this stream is opened as read mode, passed from IFileMgr.
    FileMgr_Stream_t *pFileStream;
    u8 *pRdBuf;                 ///< read buffer to reduce ID, has not applied to fwrite.
    u16 nBufSize;               ///< length of read buffer
} PLAYLISTSRV_FileOpData_t;

#define PLAYLISTSRV_EVT_REQUEST_RESULT      (CLSID_PLAYLISTSRV << 16 | 7)
#define PLAYLISTSRV_EVT_PLAYLIST_FULL       (CLSID_PLAYLISTSRV << 16 | 8)
/*-------------------------------------------------------------------------*/

/**
 * IPLAYLISTSRV Interfaces
 */
#define INHERIT_IPLAYLISTSRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*ListPlaylists)                ( IName * , const MAE_WChar* pWStrDir, VectorClass_t** ppIVectorClass, PLAYLISTSRV_PlaylistType_e eRetrievedPlaylistType, IBase* pOwner);  \
    MAE_Ret     (*CreatePlaylist)               ( IName * , const MAE_WChar* pWStrFilePath);  \
    MAE_Ret     (*DeletePlaylist)               ( IName * , MAE_WChar* pWStrFilePath);  \
    MAE_Ret     (*RenamePlaylist)               ( IName * , const MAE_WChar* pWStrSrc, const MAE_WChar* pWStrDest);  \
    MAE_Ret     (*GetM3UElementInfo)            ( IName * , const MAE_WChar* pFilename, IDataModel *pIDataModel, u32 nContentIdx, PLAYLISTSRV_M3UElement_t *pM3UElement);  \
    MAE_Ret     (*GetPlaylistSize)              ( IName * , IDataModel *pIDataModel, u32 *pPlaylistSize);  \
    MAE_Ret     (*DeletePlaylistContent)        ( IName * , IDataModel* pIPlalistlistDataModel, u32 nContentIdx, IBase* pOwner, PlaylistSrvCmnCB pfnCb);  \
    MAE_Ret     (*MovePlayListContent)          ( IName * , IDataModel* pIPlalistlistDataModel, u32 nFromContentIdx, u32 nToContentIdx, IBase* pOwner, PlaylistSrvCmnCB pfnCb);  \
    MAE_Ret     (*AppendContentToPlayList)      ( IName * , IDataModel* pIPlayListDataModel, u32 nFileMgrHandleId, u32 nFileNum, PLAYLISTSRV_ListType_e nListType, IBase* pOwner, PlaylistSrvLoadPlaylistDataCB pfnCb);  \
    MAE_Ret     (*LoadPlaylistContent)          ( IName * , const MAE_WChar* pWStrPlayListFilename, PLAYLISTSRV_ListType_e nListType, IBase* pOwner, PlaylistSrvLoadPlaylistDataCB pfnCb);  \
    MAE_Ret     (*CancelOperation)              ( IName * );  \
    MAE_Ret     (*LoadLastPlaybackContent)      ( IName * , IBase *pOwner, PLAYLISTSRV_Playback_Info_t *ptPlaybackInfo, PlaylistSrvLoadPlaylistDataCB pfnCb);  \
    MAE_Ret     (*StoreLastPlaybackContent)     ( IName * , IDataModel *pIDataModel, u32 nPlayingIdx);  \
    MAE_Ret     (*ClearLastPlaybackContent)     ( IName * )


DEFINE_INTERFACE(IPLAYLISTSRV);


#define IPLAYLISTSRV_QueryInterface(pICntlr, id, pp, po)            GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->QueryInterface(pICntlr, id, pp, po)
#define IPLAYLISTSRV_HandleEvent(pICntlr, e, p1, p2)                GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->HandleEvent(pICntlr, e, p1, p2)
/**
 Description: List all file names of the playlists (.m3u) in the specified folder.

Param: pWStrDir: The path to M3U folder
Param: ppIVectorClass: Pointer to the memory to fill with the pointer to the vector class, which keeps the M3U filenames in the folder.
Param: eRetrievedPlaylistType: the playlist type we want to list.
Param: pOwner: The caller.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_ListPlaylists(pICntlr, p1, p2, p3, p4) GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->ListPlaylists( pICntlr, p1, p2, p3, p4)
/**
 Description: Create a playlist. (.m3u)

Param: pWStrFilePath: The M3U file path to be created.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FILE_EXISTS: If the file already exists.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_CreatePlaylist(pICntlr, p1)    GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->CreatePlaylist( pICntlr, p1)
/**
 Description: Delete the specified playlist.

Param: pWStrFilePath: The M3U file path to be deleted.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_DeletePlaylist(pICntlr, p1)    GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->DeletePlaylist( pICntlr, p1)
/**
 Description: Rename the playlist.

Param: pWStrSrc: The source M3U filename.
Param: pWStrDest: The destnation M3U filename.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_NOT_FOUND: if the file (pWStrSrc) is not found
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_RenamePlaylist(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->RenamePlaylist( pICntlr, p1, p2)
/**
 Description: Load the M3U element from playlist file.

Param: pWStrFilename:The play list file.
Param: ppIArrayModel: Pointer to the memory to fill with the pointer to the Array model (the content of the play list.).
Param: nContentIdx: Index of playlist element.
Param: pM3UElement: Point to M3U element information.
Param: pIContentBrowser: Pointer to content browser.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_GetM3UElementInfo(pICntlr, p1, p2, p3, p4) GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->GetM3UElementInfo( pICntlr, p1, p2, p3, p4)
/**
 Description: Get number of elements in playlist file.

Param:  pIArrayModel: Pointer to the Array model (the content of the play list.).
Param:  pPlaylistSize: Point to playlist size.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_GetPlaylistSize(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->GetPlaylistSize( pICntlr, p1, p2)
/**
 Description: Update the content of the playlist.

Param: pWStrFilename: The play list file to be updated.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_DeletePlaylistContent(pICntlr, p1, p2, p3, p4) GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->DeletePlaylistContent( pICntlr, p1, p2, p3, p4)
/**

 */
#define IPLAYLISTSRV_MovePlayListContent(pICntlr, p1, p2, p3, p4, p5)   GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->MovePlayListContent( pICntlr, p1, p2, p3, p4, p5)
/**

 */
#define IPLAYLISTSRV_AppendContentToPlayList(pICntlr, p1, p2, p3, p4, p5, p6) GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->AppendContentToPlayList( pICntlr, p1, p2, p3, p4, p5, p6)
/**
 Description: Load the content of the playlist.

Param: pWStrFilename:The play list file to be loaded.
Param:  ppIArrayModel: Pointer to the memory to fill with the pointer to the Array model (the content of the play list.).
Param: pOwner: The caller.
Return: MAE_RET_SUCCESS: If successful.
Return: MAE_RET_FAILED: If unsuccessful.
 */
#define IPLAYLISTSRV_LoadPlaylistContent(pICntlr, p1, p2, p3, p4)   GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->LoadPlaylistContent( pICntlr, p1, p2, p3, p4)

/**

 */
#define IPLAYLISTSRV_CancelOperation(pICntlr)   GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->CancelOperation( pICntlr)

/**
 Load last playback contents, including playlist file, song index.
The function is used when powered on, music player service needs to load last playback contents.

Param: pOwner: The caller.
 */
#define IPLAYLISTSRV_LoadLastPlaybackContent(pICntlr, p1, p2, p3)   GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->LoadLastPlaybackContent( pICntlr, p1, p2, p3)
/**
 Store last playback contents to a system file in SD card.
 */
#define IPLAYLISTSRV_StoreLastPlaybackContent(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->StoreLastPlaybackContent( pICntlr, p1, p2)
/**
 Clear last playback content. Function is used when playback occurs error.
 */
#define IPLAYLISTSRV_ClearLastPlaybackContent(pICntlr)  GET_FUNCTBL((pICntlr), IPLAYLISTSRV)->ClearLastPlaybackContent( pICntlr)

/**
 * Functions
 */

void PLAYLISTSRV_Init(void);

MAE_Ret PLAYLISTSRV_New(MAE_ClsId id, void **ppObj);

/*-------------------------------------------------------------------------*/
#endif /* __MMI_PLAYLISTSRV_H__ */