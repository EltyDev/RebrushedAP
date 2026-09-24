#ifndef FUNCTION_HPP_
#define FUNCTION_HPP_

#include <cstdint>

template<uintptr_t offset, typename Ret, typename Convention>
class Function {
    public:
        template<typename... Args>
        static Ret call(Args... args) {
            uintptr_t base = (uintptr_t) GetModuleHandleA(nullptr);
            uintptr_t funcAddress = base + offset;
            auto func = reinterpret_cast<Convention>(funcAddress);
            return func(args...);
        }
};


#endif /* !FUNCTION_HPP_ */
