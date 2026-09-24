#ifndef PROCESSEVENT_HPP_
#define PROCESSEVENT_HPP_

#include "Utils/Function.hpp"
#include "SDK/SDK.h"

class ProcessEvent : public Function<0x19ABE20, void, void(*)(UObject*, UFunction*, void*)> {
    public:
    protected:
    private:
};

#endif /* !PROCESSEVENT_HPP_ */
