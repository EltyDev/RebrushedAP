/*
** EPITECH PROJECT, 2026
** RebrushedAP
** File description:
** FNameConstructor
*/

#ifndef FNAMECONSTRUCTOR_HPP_
#define FNAMECONSTRUCTOR_HPP_

#include "Utils/Function.hpp"
#include "SDK/SDK.h"

enum EFindName : int32_t {
    FNAME_Find = 0x0,
    FNAME_Add  = 0x1,
    FNAME_Replace_Not_Safe_For_Threading = 0x2,
};

class FNameConstructor : public Function<0x17B14F0, void, void (*)(FName*, const char *, EFindName)> {
    public:
        static void call(FName* name, const char* str, EFindName findName = FNAME_Add) {
            Function::call(name, str, findName);
        }
    protected:
    private:
};

#endif /* !FNAMECONSTRUCTOR_HPP_ */
