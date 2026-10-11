#include "Game/URecShopUtils.hpp"
#include "Utils/Function.hpp"

namespace Game::URecShopUtils {
    TArray<URecShopData*> GetAllShops() {
        return Utils::Function::call<0x156bb60, TArray<URecShopData*>(*)()>();
    }
};
