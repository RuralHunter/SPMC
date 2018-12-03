set(SOURCES GUIDialogAudioSettings.cpp
            GUIDialogCMSSettings.cpp
            GUIDialogFullScreenInfo.cpp
            GUIDialogSubtitles.cpp
            GUIDialogSubtitleSettings.cpp
            GUIDialogTeletext.cpp
            GUIDialogVideoBookmarks.cpp
            GUIDialogVideoInfo.cpp
            GUIDialogVideoOSD.cpp
            GUIDialogVideoSettings.cpp)

set(HEADERS GUIDialogAudioSettings.h
            GUIDialogCMSSettings.h
            GUIDialogFullScreenInfo.h
            GUIDialogSubtitles.h
            GUIDialogSubtitleSettings.h
            GUIDialogTeletext.h
            GUIDialogVideoBookmarks.h
            GUIDialogVideoInfo.h
            GUIDialogVideoOSD.h
            GUIDialogVideoSettings.h)

core_add_library(video_dialogs)
