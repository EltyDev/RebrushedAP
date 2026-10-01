#ifndef FUNCTION_HPP_
#define FUNCTION_HPP_

#include <cstdint>
#include <Windows.h>
#include "Rebrushed/GameData.hpp"
#include "SDK/SDK.h"

namespace Utils::Function {

    namespace {
        template<typename ParamsStruct, typename Tuple, size_t... Is>
        ParamsStruct buildParams(Tuple& tuple, std::index_sequence<Is...>) {
            return ParamsStruct{ std::get<Is + 1>(tuple)... };
        }
    }

    template<uintptr_t offset, typename Convention, typename... Args>
    auto call(Args&&... args) {
        uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
        uintptr_t funcAddress = base + offset;
        auto func = reinterpret_cast<Convention>(funcAddress);
        return func(std::forward<Args>(args)...);
    }

    template<const char functionName[], typename ParamsStruct, typename... Args>
    auto callProcessEvent(Args&&... args) {
        auto tuple = std::make_tuple(args...);
        auto thisPtr = std::get<0>(tuple);
        UFunction* function = nullptr;
        Rebrushed::GameData::waitObject(&function, functionName);
        ParamsStruct params = buildParams<ParamsStruct>(tuple, std::make_index_sequence<sizeof...(Args) - 1>{});
        call<0x19ABE20, void(*)(UObject*, UFunction*, void*)>(thisPtr, function, &params);
        if constexpr (requires { params.returnValue; })
            return params.returnValue;
    }

};


#endif /* !FUNCTION_HPP_ */
    