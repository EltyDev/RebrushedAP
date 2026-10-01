#include "Engine/FText.hpp"
#include "Utils/Function.hpp"

Engine::FText::FText(FString &&str) {
    Utils::Function::call<0x16D6120, void(*)(FText*, FString*)>(this, &str);
}