#ifndef UOBJECTFUNCTION_HPP_
#define UOBJECTFUNCTION_HPP_

#include "Functions/UObject/ProcessEvent.hpp"
#include <string>
#include "Rebrushed/RebrushedAP.hpp"
#include <type_traits>

template<typename T, typename = void>
struct has_return_value : std::false_type {};

template<typename T>
struct has_return_value<T, std::void_t<decltype(std::declval<T>().returnValue)>> : std::true_type {};

template<typename T, bool = has_return_value<T>::value>
struct params_return_type { using type = void; };

template<typename T>
struct params_return_type<T, true> { using type = decltype(std::declval<T>().returnValue); };

template<typename T>
using params_return_type_t = typename params_return_type<T>::type;

template<const char functionName[], typename ParamsStruct>
class UObjectFunction {
    public:

        using Ret = params_return_type_t<ParamsStruct>;

        template<typename... Args>
        static Ret call(Args... args) {
            auto tuple = std::make_tuple(args...);
            auto thisPtr = std::get<0>(tuple);
            UFunction* function = nullptr;
            RebrushedAP::waitObject(&function, functionName);
            ParamsStruct params = buildParams(tuple, std::make_index_sequence<sizeof...(Args) - 1>{});
            ProcessEvent::call(thisPtr, function, &params);
            if constexpr (!std::is_same_v<Ret, void>)
                return params.returnValue;
        }
    private:
        template<typename Tuple, size_t... Is>
        static ParamsStruct buildParams(Tuple& tuple, std::index_sequence<Is...>) {
            return ParamsStruct{ std::get<Is + 1>(tuple)... };
        }
};

#endif /* !UOBJECTFUNCTION_HPP_ */
