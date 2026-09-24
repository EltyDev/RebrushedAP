#ifndef TRIGGERGENERICDEATH_HPP_
#define TRIGGERGENERICDEATH_HPP_

#include "Functions/UObjectFunction.hpp"

struct TriggerGenericDeath_Params {
};

inline constexpr char TriggerGenericDeath_Name[] = "TriggerGenericDeath";

class TriggerGenericDeath : public UObjectFunction<TriggerGenericDeath_Name, TriggerGenericDeath_Params> {
    public:
    protected:
    private:
};

#endif /* !TRIGGERGENERICDEATH_HPP_ */
