#ifndef ADDGAMEPLAYTAG_HPP_
#define ADDGAMEPLAYTAG_HPP_

#include "Utils/Function.hpp"
#include "SDK/SDK.h"

class AddGameplayTag : public Function<
    0x2d6e3c0,
    void,
    void (__fastcall *)(void*, FGameplayTagContainer&, FGameplayTag)
> {
    public:
    protected:
    private:
};

#endif /* !ADDGAMEPLAYTAG_HPP_ */
