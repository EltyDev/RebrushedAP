#include "Game/URecInventoryUtils.hpp"
#include "Utils/Function.hpp"

constexpr char ChangeInventory_Name[] = "ChangeInventory";

struct ChangeInventory_Params {
    URecInventoryItem* item;
    int amount;
};

constexpr char GetAllItemsWithAnyCategory_Name[] = "GetAllItemsWithAnyCategory";

struct GetAllItemsWithAnyCategory_Params {
    FGameplayTagContainer categories;
    TArray<URecInventoryItem*> returnValue;
};

namespace Game {
    void URecInventoryUtils::ChangeInventory( URecInventoryItem* item, int amount) {
        return Utils::Function::callProcessEvent<ChangeInventory_Name, ChangeInventory_Params>(this, item, amount);
    }

    TArray<URecInventoryItem*> URecInventoryUtils::GetAllItemsWithAnyCategory(FGameplayTagContainer categories) {
        return Utils::Function::callProcessEvent<GetAllItemsWithAnyCategory_Name, GetAllItemsWithAnyCategory_Params>(this, categories);
    }
};