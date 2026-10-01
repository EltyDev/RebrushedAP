#ifndef URECINVENTORYUTILS_HPP_
#define URECINVENTORYUTILS_HPP_

#include "SDK/SDK.h"

namespace Game {
    class URecInventoryUtils : public UPrimaryDataAsset {
        public:
            void ChangeInventory(URecInventoryItem* item, int amount);
            TArray<URecInventoryItem*> GetAllItemsWithAnyCategory(FGameplayTagContainer categories);
    };
}

#endif /* !URECINVENTORYUTILS_HPP_ */
