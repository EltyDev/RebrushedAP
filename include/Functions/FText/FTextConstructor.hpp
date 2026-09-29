#ifndef FTEXTCONSTRUCTOR_HPP_
#define FTEXTCONSTRUCTOR_HPP_

#include "Utils/Function.hpp"

#include "SDK/SDK.h"

class FTextConstructor : public Function<0x16D6120, void, void (*)(FText*, FString*)> {
};

#endif /* !FTEXTCONSTRUCTOR_HPP_ */
