#ifndef GETDEFAULTOBJECT_HPP_
#define GETDEFAULTOBJECT_HPP_

#include "Utils/Function.hpp"
#include "SDK/SDK.h"

class GetDefaultObject : public Function<0x844d10, UObject*, UObject* (__fastcall*)(UClass* ObjectClass)> {
    public:
    protected:
    private:
};

#endif /* !GETDEFAULTOBJECT_HPP_ */
