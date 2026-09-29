#ifndef CHANGEINVENTORY_HPP_
#define CHANGEINVENTORY_HPP_

#include "Functions/UObjectFunction.hpp"

constexpr char ChangeInventory_Name[] = "ChangeInventory";

struct ChangeInventory_Params {
    URecInventoryItem* item;
    int amount;
};

class ChangeInventory : public UObjectFunction<ChangeInventory_Name, ChangeInventory_Params> {
    public:
    protected:
    private:
};

#endif /* !CHANGEINVENTORY_HPP_ */