/*
   Copyright (C) 2008-2023 J.Rios <anonbeat@gmail.com>
   Copyright (C) 2024-2025 Tiago T Barrionuevo <thothix@protonmail.com>

   This file is part of Guayadeque Music Player.

   Guayadeque is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Guayadeque is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Guayadeque. If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef __EVENTCOMMANDIDS_H__
#define __EVENTCOMMANDIDS_H__

namespace Guayadeque {

#define guEVT_USER_FIRST    10000

// -------------------------------------------------------------------------------- //
enum guCommandIds {
    ID_MENU_UPDATE_LIBRARY        =  guEVT_USER_FIRST,
    ID_MENU_UPDATE_LIBRARYFORCED,
    ID_MENU_LIBRARY_ADD_PATH,
    ID_MENU_PLAY_STREAM,
    ID_MENU_UPDATE_PODCASTS,
    ID_MENU_UPDATE_COVERS,
    ID_MENU_QUIT,
    ID_MENU_PREFERENCES,
    ID_MENU_PREFERENCES_COMMANDS,
    ID_MENU_PREFERENCES_LINKS,
    ID_MENU_PREFERENCES_COPYTO,
    ID_MENU_VIEW_STATUSBAR,
    ID_MENU_VIEW_FULLSCREEN,
    ID_MENU_VIEW_PLAYER_PLAYLIST,
    ID_MENU_VIEW_PLAYER_FILTERS,
    ID_MENU_VIEW_PLAYER_VUMETERS,
    ID_MENU_VIEW_PLAYER_NOTEBOOK,
    ID_MENU_VIEW_MAIN_LOCATIONS,
    ID_MENU_VIEW_MAIN_SHOWCOVER,
    ID_MENU_VIEW_CLOSEWINDOW,
    ID_MENU_VIEW_AUDIOCD,
    ID_MENU_VOLUME_DOWN,
    ID_MENU_VOLUME_UP,
    ID_MENU_HIDE_CAPTIONS,
    //
    ID_MENU_VIEW_LIBRARY,
    ID_MENU_VIEW_LIB_LABELS,
    ID_MENU_VIEW_LIB_GENRES,
    ID_MENU_VIEW_LIB_ARTISTS,
    ID_MENU_VIEW_LIB_COMPOSERS,
    ID_MENU_VIEW_LIB_ALBUMARTISTS,
    ID_MENU_VIEW_LIB_ALBUMS,
    ID_MENU_VIEW_LIB_YEARS,
    ID_MENU_VIEW_LIB_RATINGS,
    ID_MENU_VIEW_LIB_PLAYCOUNT,
    ID_MENU_VIEW_LIB_DIRECTORIES,
    ID_MENU_VIEW_LASTFM,
    ID_MENU_VIEW_RADIO,
    ID_MENU_VIEW_RAD_TEXTSEARCH,
    ID_MENU_VIEW_RAD_LABELS,
    ID_MENU_VIEW_RAD_GENRES,
    ID_MENU_VIEW_RAD_PROPERTIES,
    ID_MENU_VIEW_LYRICS,
    ID_MENU_VIEW_PLAYLISTS,
    ID_MENU_VIEW_PODCASTS,
    ID_MENU_VIEW_POD_CHANNELS,
    ID_MENU_VIEW_POD_DETAILS,
    ID_MENU_VIEW_POD_PROPERTIES,
    ID_MENU_VIEW_ALBUMBROWSER,
    ID_MENU_VIEW_FILEBROWSER,
    ID_MENU_VIEW_TREEVIEW,
    //
    ID_MENU_COLLECTION_NEW,
//    ID_MENU_VIEW_IPOD,
//    ID_MENU_VIEW_FBR_DETAILS,
    ID_MENU_LAYOUT_CREATE,
    ID_MENU_LAYOUT_DUMMY,
    ID_MENU_ABOUT,
    ID_MENU_HELP,
    ID_MENU_COMMUNITY,

    //
    ID_MAINFRAME_COPYTO,
    ID_MAINFRAME_COPYTODEVICE_TRACKS,
    ID_MAINFRAME_COPYTODEVICE_PLAYLIST,
    ID_MAINFRAME_REMOVEPODCASTTHREAD,
    ID_MAINFRAME_UPDATE_SELINFO,
    ID_MAINFRAME_SELECT_ALBUM,
    ID_MAINFRAME_SELECT_ALBUMNAME,
    ID_MAINFRAME_SELECT_ARTIST,
    ID_MAINFRAME_SELECT_ARTISTNAME,
    ID_MAINFRAME_SELECT_ALBUMARTIST,
    ID_MAINFRAME_SELECT_ALBUMARTISTNAME,
    ID_MAINFRAME_SELECT_COMPOSER,
    ID_MAINFRAME_SELECT_COMPOSERNAME,
    ID_MAINFRAME_SELECT_TRACK,
    ID_MAINFRAME_SELECT_YEAR,
    ID_MAINFRAME_SELECT_GENRE,
    ID_MAINFRAME_SELECT_DIRECTORY,
    ID_MAINFRAME_SELECT_PODCAST,
    ID_MAINFRAME_REQUEST_CURRENTTRACK,
    ID_MAINFRAME_SELECT_LOCATION,
    ID_MAINFRAME_SETFORCEGAPLESS,
    ID_MAINFRAME_SETAUDIOSCROBBLE,
    ID_MAINFRAME_LYRICSSEARCHFIRST,
    ID_MAINFRAME_LYRICSSEARCHNEXT,
    ID_MAINFRAME_LYRICSSAVECHANGES,
    ID_MAINFRAME_LYRICSEXECCOMMAND,
    ID_MAINFRAME_SET_ALLOW_PLAYLIST,
    ID_MAINFRAME_SET_DENY_PLAYLIST,
    ID_MAINFRAME_WINDOW_RAISE,
    ID_MAINFRAME_LOAD_PLAYLIST,
    ID_MAINFRAME_MEDIAVIEWER_CLOSED,
    //
    ID_LIBRARY_UPDATED,
    ID_LIBRARY_DOCLEANDB,
    ID_LIBRARY_CLEANFINISHED,
    ID_LIBRARY_RELOADCONTROLS,
    ID_LIBRARY_SEARCH,
    //
    ID_DIRECTORY_PLAY,
    ID_DIRECTORY_ENQUEUE_AFTER_ALL,
    ID_DIRECTORY_ENQUEUE_AFTER_TRACK,
    ID_DIRECTORY_ENQUEUE_AFTER_ALBUM,
    ID_DIRECTORY_ENQUEUE_AFTER_ARTIST,
    ID_DIRECTORY_EDITLABELS,
    ID_DIRECTORY_EDITTRACKS,
    ID_DIRECTORY_UPDATEDETAILS,
    ID_DIRECTORY_SAVETOPLAYLIST,
    //
    ID_GENRE_PLAY,
    ID_GENRE_ENQUEUE_AFTER_ALL,
    ID_GENRE_ENQUEUE_AFTER_TRACK,
    ID_GENRE_ENQUEUE_AFTER_ALBUM,
    ID_GENRE_ENQUEUE_AFTER_ARTIST,
    ID_GENRE_SELECTNAME,
    ID_GENRE_SETSELECTION,
    ID_GENRE_SAVETOPLAYLIST,
    //
    ID_LABEL_ADD,
    ID_LABEL_DELETE,
    ID_LABEL_EDIT,
    ID_LABEL_PLAY,
    ID_LABEL_ENQUEUE_AFTER_ALL,
    ID_LABEL_ENQUEUE_AFTER_TRACK,
    ID_LABEL_ENQUEUE_AFTER_ALBUM,
    ID_LABEL_ENQUEUE_AFTER_ARTIST,
    ID_LABEL_UPDATELABELS,
    ID_LABEL_SAVETOPLAYLIST,

    //
    ID_ARTIST_PLAY,
    ID_ARTIST_ENQUEUE_AFTER_ALL,
    ID_ARTIST_ENQUEUE_AFTER_TRACK,
    ID_ARTIST_ENQUEUE_AFTER_ALBUM,
    ID_ARTIST_ENQUEUE_AFTER_ARTIST,
    ID_ARTIST_EDITLABELS,
    ID_ARTIST_EDITTRACKS,
    ID_ARTIST_SETSELECTION,
    ID_ARTIST_SELECTNAME,
    ID_ARTIST_SAVETOPLAYLIST,
    ID_ARTIST_CREATE_BESTOF_PLAYLIST,
    //
    ID_ALBUM_PLAY,
    ID_ALBUM_ENQUEUE_AFTER_ALL,
    ID_ALBUM_ENQUEUE_AFTER_TRACK,
    ID_ALBUM_ENQUEUE_AFTER_ALBUM,
    ID_ALBUM_ENQUEUE_AFTER_ARTIST,
    ID_ALBUM_EDITLABELS,
    ID_ALBUM_EDITTRACKS,
    ID_ALBUM_MANUALCOVER,
    ID_ALBUM_COVER_CHANGED,
    ID_ALBUM_COVER_DELETE,
    ID_ALBUM_COVER_EMBED,
    ID_ALBUM_SETSELECTION,
    ID_ALBUM_SELECTNAME,
    ID_ALBUM_SELECT_COVER,
    ID_ALBUM_SAVETOPLAYLIST,
    ID_ALBUM_CREATE_BESTOF_PLAYLIST,
    //
    ID_ALBUM_ORDER_NAME,
    ID_ALBUM_ORDER_YEAR,
    ID_ALBUM_ORDER_YEAR_REVERSE,
    ID_ALBUM_ORDER_ARTIST_NAME,
    ID_ALBUM_ORDER_ARTIST_YEAR,
    ID_ALBUM_ORDER_ARTIST_YEAR_REVERSE,
    //
    ID_YEAR_PLAY,
    ID_YEAR_ENQUEUE_AFTER_ALL,
    ID_YEAR_ENQUEUE_AFTER_TRACK,
    ID_YEAR_ENQUEUE_AFTER_ALBUM,
    ID_YEAR_ENQUEUE_AFTER_ARTIST,
    ID_YEAR_EDITTRACKS,
    ID_YEAR_SAVETOPLAYLIST,
    //
    ID_RATING_PLAY,
    ID_RATING_ENQUEUE_AFTER_ALL,
    ID_RATING_ENQUEUE_AFTER_TRACK,
    ID_RATING_ENQUEUE_AFTER_ALBUM,
    ID_RATING_ENQUEUE_AFTER_ARTIST,
    ID_RATING_EDITTRACKS,
    ID_RATING_SAVETOPLAYLIST,
    //
    ID_PLAYCOUNT_PLAY,
    ID_PLAYCOUNT_ENQUEUE_AFTER_ALL,
    ID_PLAYCOUNT_ENQUEUE_AFTER_TRACK,
    ID_PLAYCOUNT_ENQUEUE_AFTER_ALBUM,
    ID_PLAYCOUNT_ENQUEUE_AFTER_ARTIST,
    ID_PLAYCOUNT_EDITTRACKS,
    ID_PLAYCOUNT_SAVETOPLAYLIST,
    //
    ID_COMPOSER_PLAY,
    ID_COMPOSER_ENQUEUE_AFTER_ALL,
    ID_COMPOSER_ENQUEUE_AFTER_TRACK,
    ID_COMPOSER_ENQUEUE_AFTER_ALBUM,
    ID_COMPOSER_ENQUEUE_AFTER_ARTIST,
    ID_COMPOSER_EDITTRACKS,
    ID_COMPOSER_SETSELECTION,
    ID_COMPOSER_SAVETOPLAYLIST,
    //
    ID_ALBUMARTIST_PLAY,
    ID_ALBUMARTIST_ENQUEUE_AFTER_ALL,
    ID_ALBUMARTIST_ENQUEUE_AFTER_TRACK,
    ID_ALBUMARTIST_ENQUEUE_AFTER_ALBUM,
    ID_ALBUMARTIST_ENQUEUE_AFTER_ARTIST,
    ID_ALBUMARTIST_EDITTRACKS,
    ID_ALBUMARTIST_SETSELECTION,
    ID_ALBUMARTIST_SAVETOPLAYLIST,
    ID_ALBUMARTIST_CREATE_BESTOF_PLAYLIST,
    //
    ID_TRACKS_PLAY,
    ID_TRACKS_PLAYALL,
    ID_TRACKS_ENQUEUE_AFTER_ALL,
    ID_TRACKS_ENQUEUE_AFTER_TRACK,
    ID_TRACKS_ENQUEUE_AFTER_ALBUM,
    ID_TRACKS_ENQUEUE_AFTER_ARTIST,
    ID_TRACKS_EDITLABELS,
    ID_TRACKS_EDITTRACKS,
    ID_TRACKS_SAVETOPLAYLIST,
    ID_TRACKS_DELETE_LIBRARY,
    ID_TRACKS_DELETE,
    ID_TRACKS_DELETE_DRIVE,
    ID_TRACKS_BROWSE_GENRE,
    ID_TRACKS_BROWSE_ARTIST,
    ID_TRACKS_BROWSE_ALBUMARTIST,
    ID_TRACKS_BROWSE_COMPOSER,
    ID_TRACKS_BROWSE_ALBUM,
    ID_TRACKS_SELECTNAME,
    ID_TRACKS_EDIT_COLUMN,
    ID_TRACKS_SET_COLUMN,
    ID_TRACKS_SET_RATING_0,
    ID_TRACKS_SET_RATING_1,
    ID_TRACKS_SET_RATING_2,
    ID_TRACKS_SET_RATING_3,
    ID_TRACKS_SET_RATING_4,
    ID_TRACKS_SET_RATING_5,
    ID_TRACKS_RANDOMIZE,
    //
    ID_PLAYER_PLAYLIST_UPDATETITLE,
    ID_PLAYER_PLAYLIST_UPDATELIST,
    ID_PLAYER_PLAYLIST_CLEAR,
    ID_PLAYER_PLAYLIST_REMOVE,
    ID_PLAYER_PLAYLIST_SAVE,
    ID_PLAYER_PLAYLIST_CREATE_BESTOF,
    ID_PLAYER_PLAYMODE_SMART,
    ID_PLAYER_PLAYLIST_RANDOMPLAY,
    ID_PLAYER_PLAYMODE_REPEAT_PLAYLIST,
    ID_PLAYER_PLAYMODE_REPEAT_TRACK,
    ID_PLAYER_PLAYLIST_SMART_ADDTRACK,
    ID_PLAYER_PLAYLIST_EDITLABELS,
    ID_PLAYER_PLAYLIST_EDITTRACKS,
    ID_PLAYER_PLAYLIST_SEARCH,
    ID_PLAYER_PLAYLIST_SELECT_TITLE,
    ID_PLAYER_PLAYLIST_SELECT_ARTIST,
    ID_PLAYER_PLAYLIST_SELECT_ALBUM,
    ID_PLAYER_PLAYLIST_SELECT_ALBUMARTIST,
    ID_PLAYER_PLAYLIST_SELECT_COMPOSER,
    ID_PLAYER_PLAYLIST_SELECT_GENRE,
    ID_PLAYER_PLAYLIST_SELECT_YEAR,
    ID_PLAYER_PLAYLIST_DELETE_LIBRARY,
    ID_PLAYER_PLAYLIST_DELETE_DRIVE,
    ID_PLAYER_PLAYLIST_STOP_ATEND,
    ID_PLAYER_PLAYLIST_SET_NEXT_TRACK,
    ID_PLAYER_PLAYLIST_START_SAVETIMER,
    //
    ID_RADIO_PLAY,
    ID_RADIO_ENQUEUE_AFTER_ALL,
    ID_RADIO_ENQUEUE_AFTER_TRACK,
    ID_RADIO_ENQUEUE_AFTER_ALBUM,
    ID_RADIO_ENQUEUE_AFTER_ARTIST,
    ID_RADIO_DOUPDATE,
    ID_RADIO_UPDATED,
    ID_RADIO_ADD_TO_USER,
    ID_RADIO_CREATE_TREE_ITEM,
    ID_RADIO_UPDATE_END,
    ID_RADIO_GENRE_ADD,
    ID_RADIO_GENRE_EDIT,
    ID_RADIO_GENRE_DELETE,
    ID_RADIO_SEARCH_ADD,
    ID_RADIO_SEARCH_EDIT,
    ID_RADIO_SEARCH_DELETE,
    ID_RADIO_EDIT_LABELS,
    ID_RADIO_USER_ADD,
    ID_RADIO_USER_EDIT,
    ID_RADIO_USER_DEL,
    ID_RADIO_USER_EXPORT,
    ID_RADIO_USER_IMPORT,
    ID_RADIO_PLAYLIST_LOADED,
    ID_RADIO_SEARCH,
    ID_RADIO_LOADING_STATIONS_FINISHED,
    //
    ID_PLAYERPANEL_PLAY,
    ID_PLAYERPANEL_STOP,
    ID_PLAYERPANEL_NEXTTRACK,
    ID_PLAYERPANEL_PREVTRACK,
    ID_PLAYERPANEL_NEXTALBUM,
    ID_PLAYERPANEL_PREVALBUM,
    ID_PLAYERPANEL_UPDATERADIOTRACK,
    ID_PLAYERPANEL_TRACKCHANGED,
    ID_PLAYERPANEL_COVERUPDATED,
    ID_PLAYERPANEL_CAPSCHANGED,
    ID_PLAYERPANEL_STATUSCHANGED,
    ID_PLAYERPANEL_TRACKLISTCHANGED,
    ID_PLAYERPANEL_PLAYMODECHANGED,
    ID_PLAYERPANEL_VOLUMECHANGED,
    ID_PLAYERPANEL_SEEKED,
    ID_PLAYERPANEL_SETRATING_0,
    ID_PLAYERPANEL_SETRATING_1,
    ID_PLAYERPANEL_SETRATING_2,
    ID_PLAYERPANEL_SETRATING_3,
    ID_PLAYERPANEL_SETRATING_4,
    ID_PLAYERPANEL_SETRATING_5,
    ID_PLAYERPANEL_ADDTRACKS,
    ID_PLAYERPANEL_REMOVETRACK,
    ID_PLAYERPANEL_SETREPEAT,
    ID_PLAYERPANEL_SETLOOP,
    ID_PLAYERPANEL_SETRANDOM,
    ID_PLAYERPANEL_SETVOLUME,
    //
    ID_AUDIOSCROBBLE_UPDATED,
    // Commands for the CoverEditor
    ID_COVEREDITOR_ADDCOVERIMAGE,
    ID_COVEREDITOR_DOWNLOADEDLINKS,
    ID_SELCOVERDIALOG_FINISH,
    // Commands for LastFM Panel
    ID_LASTFM_UPDATE_ARTISTINFO,            // The thread update the Artist Info
    ID_LASTFM_UPDATE_ALBUMINFO,             // The thread update the top albums
    ID_LASTFM_UPDATE_ALBUM_COUNT,
    ID_LASTFM_UPDATE_TOPTRACKS,             // The thread update the top tracks
    ID_LASTFM_UPDATE_TOPTRACKS_COUNT,
    ID_LASTFM_UPDATE_SIMARTIST,             // The thread update the Similar artists
    ID_LASTFM_UPDATE_SIMARTIST_COUNT,
    ID_LASTFM_UPDATE_SIMTRACK,              // The thread update the Similar tracks
    ID_LASTFM_UPDATE_SIMTRACK_COUNT,        // The thread update the Similar tracks
    ID_LASTFM_UPDATE_EVENTINFO,
    ID_LASTFM_UPDATE_EVENTS_COUNT,
    ID_LASTFM_PLAY,
    ID_LASTFM_ENQUEUE_AFTER_ALL,
    ID_LASTFM_ENQUEUE_AFTER_TRACK,
    ID_LASTFM_ENQUEUE_AFTER_ALBUM,
    ID_LASTFM_ENQUEUE_AFTER_ARTIST,
    ID_LASTFM_SELECT_ARTIST,
    ID_LASTFM_VISIT_URL,
    ID_LASTFM_COPYTOCLIPBOARD,
    ID_LASTFM_SAVETOPLAYLIST,
    //
    ID_STATUSBAR_GAUGE_CREATE,
    ID_STATUSBAR_GAUGE_CREATED,
    ID_STATUSBAR_GAUGE_PULSE,
    ID_STATUSBAR_GAUGE_SETMAX,
    ID_STATUSBAR_GAUGE_UPDATE,
    ID_STATUSBAR_GAUGE_REMOVE,
    //
    ID_LYRICS_UPDATE_LYRICINFO,
    ID_LYRICS_COPY,
    ID_LYRICS_PASTE,
    ID_LYRICS_PRINT,
    ID_LYRICS_LYRICFOUND,
    //
    ID_MULTIMEDIAKEYS_DBUS,
    //
    ID_PLAYLIST_PLAY,
    ID_PLAYLIST_ENQUEUE_AFTER_ALL,
    ID_PLAYLIST_ENQUEUE_AFTER_TRACK,
    ID_PLAYLIST_ENQUEUE_AFTER_ALBUM,
    ID_PLAYLIST_ENQUEUE_AFTER_ARTIST,
    ID_PLAYLIST_NEWPLAYLIST,
    ID_PLAYLIST_EDIT,
    ID_PLAYLIST_RENAME,
    ID_PLAYLIST_DELETE,
    ID_PLAYLIST_UPDATED,
    ID_PLAYLIST_IMPORT,
    ID_PLAYLIST_EXPORT,
    ID_PLAYLIST_SEARCH,
    ID_PLAYLIST_SMART_PLAYLIST,
    //
    ID_PODCASTS_CHANNEL_ADD,
    ID_PODCASTS_CHANNEL_DEL,
    ID_PODCASTS_CHANNEL_PROPERTIES,
    ID_PODCASTS_CHANNEL_UPDATE,
    ID_PODCASTS_CHANNEL_UNDELETE,
    //
    ID_PODCASTS_ITEM_DEL,
    ID_PODCASTS_ITEM_PLAY,
    ID_PODCASTS_ITEM_ENQUEUE_AFTER_ALL,
    ID_PODCASTS_ITEM_ENQUEUE_AFTER_TRACK,
    ID_PODCASTS_ITEM_ENQUEUE_AFTER_ALBUM,
    ID_PODCASTS_ITEM_ENQUEUE_AFTER_ARTIST,
    ID_PODCASTS_ITEM_DOWNLOAD,
    ID_PODCASTS_ITEM_UPDATED,
    //
    ID_ALBUMBROWSER_PLAY,
    ID_ALBUMBROWSER_ENQUEUE_AFTER_ALL,
    ID_ALBUMBROWSER_ENQUEUE_AFTER_TRACK,
    ID_ALBUMBROWSER_ENQUEUE_AFTER_ALBUM,
    ID_ALBUMBROWSER_ENQUEUE_AFTER_ARTIST,
    ID_ALBUMBROWSER_EDITLABELS,
    ID_ALBUMBROWSER_EDITTRACKS,
    ID_ALBUMBROWSER_SEARCHCOVER,
    ID_ALBUMBROWSER_SELECTCOVER,
    ID_ALBUMBROWSER_DELETECOVER,
    ID_ALBUMBROWSER_EMBEDCOVER,
    ID_ALBUMBROWSER_COPYTOCLIPBOARD,
    ID_ALBUMBROWSER_UPDATEDETAILS,
    ID_ALBUMBROWSER_BEGINDRAG,
    ID_ALBUMBROWSER_COVER_BEGINDRAG,
    ID_ALBUMBROWSER_SEARCH,
    ID_ALBUMBROWSER_ORDER_NAME,
    ID_ALBUMBROWSER_ORDER_YEAR,
    ID_ALBUMBROWSER_ORDER_YEAR_REVERSE,
    ID_ALBUMBROWSER_ORDER_ARTIST,
    ID_ALBUMBROWSER_ORDER_ARTIST_YEAR,
    ID_ALBUMBROWSER_ORDER_ARTIST_YEAR_REVERSE,
    ID_ALBUMBROWSER_ORDER_ADDEDTIME,
    ID_ALBUMBROWSER_TRACKS_PLAY,
    ID_ALBUMBROWSER_TRACKS_ENQUEUE_AFTER_ALL,
    ID_ALBUMBROWSER_TRACKS_ENQUEUE_AFTER_TRACK,
    ID_ALBUMBROWSER_TRACKS_ENQUEUE_AFTER_ALBUM,
    ID_ALBUMBROWSER_TRACKS_ENQUEUE_AFTER_ARTIST,
    ID_ALBUMBROWSER_TRACKS_EDITLABELS,
    ID_ALBUMBROWSER_TRACKS_EDITTRACKS,
    ID_ALBUMBROWSER_TRACKS_BEGINDRAG,
    ID_ALBUMBROWSER_TRACKS_PLAYLIST_SAVE,
    ID_ALBUMBROWSER_TRACKS_SMART_PLAYLIST,
    //
    ID_FILESYSTEM_FOLDER_PLAY,
    ID_FILESYSTEM_FOLDER_ENQUEUE_AFTER_ALL,
    ID_FILESYSTEM_FOLDER_ENQUEUE_AFTER_TRACK,
    ID_FILESYSTEM_FOLDER_ENQUEUE_AFTER_ALBUM,
    ID_FILESYSTEM_FOLDER_ENQUEUE_AFTER_ARTIST,
    ID_FILESYSTEM_FOLDER_NEW,
    ID_FILESYSTEM_FOLDER_RENAME,
    ID_FILESYSTEM_FOLDER_DELETE,
    ID_FILESYSTEM_FOLDER_COPY,
    ID_FILESYSTEM_FOLDER_PASTE,
    ID_FILESYSTEM_FOLDER_EDITTRACKS,
    ID_FILESYSTEM_FOLDER_SAVEPLAYLIST,
    ID_FILESYSTEM_FOLDER_UPDATE,
    ID_FILESYSTEM_ITEMS_PLAY,
    ID_FILESYSTEM_ITEMS_ENQUEUE_AFTER_ALL,
    ID_FILESYSTEM_ITEMS_ENQUEUE_AFTER_TRACK,
    ID_FILESYSTEM_ITEMS_ENQUEUE_AFTER_ALBUM,
    ID_FILESYSTEM_ITEMS_ENQUEUE_AFTER_ARTIST,
    ID_FILESYSTEM_ITEMS_EDITTRACKS,
    ID_FILESYSTEM_ITEMS_RENAME,
    ID_FILESYSTEM_ITEMS_DELETE,
    ID_FILESYSTEM_ITEMS_COPY,
    ID_FILESYSTEM_ITEMS_PASTE,
    ID_FILESYSTEM_ITEMS_SAVEPLAYLIST,
    //
    ID_MAGNATUNE_UPDATE,  // Redownload the latest database
    ID_MAGNATUNE_UPGRADE, // Actualiza las canciones
    ID_MAGNATUNE_EDIT_GENRES,
    ID_MAGNATUNE_SETUP,
    ID_MAGNATUNE_UPDATE_FINISHED,
    ID_MAGNATUNE_COVER_DOWNLAODED,
    ID_MAGNATUNE_DOWNLOAD_DIRECT_ALBUM,
    ID_MAGNATUNE_DOWNLOAD_DIRECT_TRACK_ALBUM,
    ID_MAGNATUNE_DOWNLOAD_DIRECTLY,
    //
    ID_TREEVIEW_FILTER_NEW,
    ID_TREEVIEW_FILTER_EDIT,
    ID_TREEVIEW_FILTER_DELETE,
    ID_TREEVIEW_EDITLABELS,
    ID_TREEVIEW_EDITTRACKS,
    ID_TREEVIEW_SAVETOPLAYLIST,
    ID_TREEVIEW_PLAY,
    ID_TREEVIEW_ENQUEUE_AFTER_ALL,
    ID_TREEVIEW_ENQUEUE_AFTER_TRACK,
    ID_TREEVIEW_ENQUEUE_AFTER_ALBUM,
    ID_TREEVIEW_ENQUEUE_AFTER_ARTIST,
    ID_TREEVIEW_SEARCH,
    //
    ID_AUDIOCD_ITEM_PLAY,
    ID_AUDIOCD_ITEM_ENQUEUE_AFTER_ALL,
    ID_AUDIOCD_ITEM_ENQUEUE_AFTER_TRACK,
    ID_AUDIOCD_ITEM_ENQUEUE_AFTER_ALBUM,
    ID_AUDIOCD_ITEM_ENQUEUE_AFTER_ARTIST,
    ID_AUDIOCD_REFRESH_METADATA,
    ID_AUDIOCD_EDIT_COLUMN,
    ID_AUDIOCD_SET_COLUMN,
    //
    ID_VOLUMEMANAGER_MOUNT_CHANGED,
    ID_VOLUMEMANAGER_AUDIOCD_CHANGED,
    //
    ID_PORTABLEDEVICE_UPDATE,
    ID_PORTABLEDEVICE_PROPERTIES,
    ID_PORTABLEDEVICE_UNMOUNT,
    //
    ID_CONFIG_UPDATED,
    //
    ID_SMARTMODE_ADD_TRACKS,
    ID_SMARTMODE_THREAD_END,
    //
    ID_MENU_LAYOUT_LOAD = guEVT_USER_FIRST + 2000,
    ID_MENU_LAYOUT_DELETE = guEVT_USER_FIRST + 2100,
    //
    ID_LINKS_BASE = guEVT_USER_FIRST + 2200,    //  to 2299
    //
    // We reserve 200 Ids for the CopyTo patterns. The 2nd 100 are for copy to portable devices
    ID_COPYTO_BASE = guEVT_USER_FIRST + 2300,   // to 2499
    //
    // Reserve 100 ids for commands
    ID_COMMANDS_BASE = guEVT_USER_FIRST + 2500, // to 3099
    //
    // Reserve 40 ids for each collection
    ID_MENU_VIEW_PORTABLE_DEVICE = guEVT_USER_FIRST + 3000,
    ID_COLLECTIONS_BASE = guEVT_USER_FIRST + 3100
};

enum guCollectionActionId {
    guCOLLECTION_ACTION_VIEW_COLLECTION = 0,
    guCOLLECTION_ACTION_VIEW_LIBRARY,
    guCOLLECTION_ACTION_VIEW_LIB_LABELS,
    guCOLLECTION_ACTION_VIEW_LIB_GENRES,
    guCOLLECTION_ACTION_VIEW_LIB_ARTISTS,
    guCOLLECTION_ACTION_VIEW_LIB_COMPOSERS,
    guCOLLECTION_ACTION_VIEW_LIB_ALBUMARTISTS,
    guCOLLECTION_ACTION_VIEW_LIB_ALBUMS,
    guCOLLECTION_ACTION_VIEW_LIB_YEARS,
    guCOLLECTION_ACTION_VIEW_LIB_RATINGS,
    guCOLLECTION_ACTION_VIEW_LIB_PLAYCOUNT,
    guCOLLECTION_ACTION_VIEW_LIB_DIRECTORIES,
    guCOLLECTION_ACTION_VIEW_ALBUMBROWSER,
    guCOLLECTION_ACTION_VIEW_TREEVIEW,
    guCOLLECTION_ACTION_VIEW_PLAYLISTS,
    guCOLLECTION_ACTION_UPDATE_LIBRARY,
    guCOLLECTION_ACTION_RESCAN_LIBRARY,
    guCOLLECTION_ACTION_SEARCH_COVERS,
    guCOLLECTION_ACTION_ADD_PATH,
    guCOLLECTION_ACTION_VIEW_PROPERTIES,
    guCOLLECTION_ACTION_IMPORT,
    guCOLLECTION_ACTION_UNMOUNT,
    guCOLLECTION_ACTION_COUNT        // Leave this always the end
};

}

#endif
// -------------------------------------------------------------------------------- //
