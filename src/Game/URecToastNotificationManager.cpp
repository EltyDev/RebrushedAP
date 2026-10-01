#include "Game/URecToastNotificationManager.hpp"
#include "Utils/Function.hpp"

namespace Game {
    void URecToastNotificationManager::AddToast(Engine::FName* NotificationId, NotificationType Type, Engine::FText* Title, Engine::FText* Text, Engine::UTexture2D* Icon, EmptySoftPtr customBackgroundImage) {
        Utils::Function::call<0x15A8600, void(*)(URecToastNotificationManager*, Engine::FName *, NotificationType, Engine::FText *, Engine::FText *, Engine::UTexture2D*, void *)>(this, NotificationId, Type, Title, Text, Icon, &customBackgroundImage);
    }
}