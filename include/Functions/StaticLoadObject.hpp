#ifndef STATICLOADOBJECT_HPP_
#define STATICLOADOBJECT_HPP_

#include "Utils/Function.hpp"
#include "SDK/SDK.h"

class StaticLoadObject : public Function<0x19B4CE0, UObject*, UObject*(*)(UClass*, UObject*, wchar_t const *, wchar_t const *, unsigned int, class UPackageMap *, bool, void const *)> {
    public:
    protected:
    private:
};

#endif /* !STATICLOADOBJECT_HPP_ */
