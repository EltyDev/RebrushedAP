#ifndef GETALLITEMSWITHANYCATEGORY_HPP_
#define GETALLITEMSWITHANYCATEGORY_HPP_

#include "Functions/UObjectFunction.hpp"

inline constexpr char GetAllItemsWithAnyCategory_Name[] = "GetAllItemsWithAnyCategory";

struct GetAllItemsWithAnyCategory_Params {
    FGameplayTagContainer categories;
    TArray<URecInventoryItem*> returnValue;
};

class GetAllItemsWithAnyCategory : public UObjectFunction<GetAllItemsWithAnyCategory_Name, GetAllItemsWithAnyCategory_Params> {
    public:
    protected:
    private:
};
#endif /* !GETALLITEMSWITHANYCATEGORY_HPP_ */
