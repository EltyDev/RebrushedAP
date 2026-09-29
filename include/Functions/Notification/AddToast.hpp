#ifndef ADDTOAST_HPP_
#define ADDTOAST_HPP_

#include "Utils/Function.hpp"
#include "SDK/SDK.h"

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

class AddToast : public Function<0x15A8600, void, void (*)(URecToastNotificationManager*, FName *, NotificationType, FText *, FText *, UTexture2D*, void *)> {
    public:
        static void call(URecToastNotificationManager* manager, FName* id, NotificationType type, FText* title, FText* message, UTexture2D* icon = nullptr, EmptySoftPtr customBackgroundImage = {}) {
            Function::call(manager, id, type, title, message, icon, &customBackgroundImage);
        }
    protected:
    private:
};

#endif /* !ADDTOAST_HPP_ */
