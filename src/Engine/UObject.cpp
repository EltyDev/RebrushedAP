#include "Engine/UObject.hpp"
#include "Utils/Function.hpp"

namespace Engine {
    void UObject::ProcessEvent(class UFunction *function, void *params) {
        Utils::Function::call<0x19ABE20, void(*)(UObject*, UFunction*, void*)>(this, function, params);
    }

    UClass *UObject::StaticClass() {
        return Utils::Function::call<0x83de80, UClass* (*)()>();
    }

    FString UObject::GetPathName() {
        FString result{};
        Utils::Function::call<0x19a6740,
            void (*)(const UObject* self, const UObject* stopOuter, FString* out)>(
                this, nullptr, &result);
        return result;
    }
}