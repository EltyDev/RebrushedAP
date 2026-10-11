#ifndef URECSHOPITEMWRAPPERBASE_HPP_
#define URECSHOPITEMWRAPPERBASE_HPP_

#include "Engine/UObject.hpp"
#include "Engine/TSoftObjectPtr.hpp"

namespace Game {
    class URecShopItemWrapperBase : Engine::UObject {
        public:
            Engine::TSoftObjectPtr<class URecInventoryItem*> Item;      // 0x0028 (0x0008)
            Engine::TSoftObjectPtr<class URecInventoryItem*> Currency;  // 0x0030 (0x0008)
    };
};

#endif /* !URECSHOPITEMWRAPPERBASE_HPP_ */
