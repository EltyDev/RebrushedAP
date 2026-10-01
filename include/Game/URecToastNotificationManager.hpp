#ifndef URECTOASTNOTIFICATIONMANAGER_HPP_
#define URECTOASTNOTIFICATIONMANAGER_HPP_

#include "SDK/SDK.h"
#include "Engine/FName.hpp"
#include "Engine/FText.hpp"
#include "Engine/UTexture2D.hpp"

namespace Game {

    enum NotificationType : int32_t {
        QUEST = 0x0,
        ITEM = 0x1,
        GENERIC = 0x2,
    };

    struct EmptySoftPtr {
        int32_t idx = -1, serial = 0, tag = 0, pad = 0;
        uint64_t name = 0;
        struct { void* p=nullptr; int32_t num=0, max=0; } sub{};
    };

    class URecToastNotificationManager : public UGameInstanceSubsystem { 
        public:

            void AddToast(Engine::FName* NotificationId, NotificationType Type, Engine::FText* Title, Engine::FText* Text, Engine::UTexture2D* Icon = nullptr, EmptySoftPtr customBackgroundImage = {});

            SDK_UNDEFINED(16,875) /* FMulticastInlineDelegate */ __um(ToastNotificationDismissed);                         // 0x0030   (0x0010)  
            unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
            class URecToastNotificationWidget*                 ToastNotificationWidgetInstance;                            // 0x0060   (0x0008)  
            TArray<class URecQuest*>                           TrackedQuests;                                              // 0x0068   (0x0010)  
            unsigned char                                      UnknownData01_6[0x38];                                      // 0x0078   (0x0038)  MISSED
            TArray<FRecToastNotificationData>                  PriorityNotificationsQueue;                                 // 0x00B0   (0x0010)  
            TArray<FRecToastNotificationData>                  NotificationsQueue;                                         // 0x00C0   (0x0010)  
            class UPL_ConditionalContext*                      QuestConditionalContext;                                    // 0x00D0   (0x0008)
    };
}

#endif /* !URECTOASTNOTIFICATIONMANAGER_HPP_ */