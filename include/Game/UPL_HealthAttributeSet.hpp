#ifndef UPL_HEALTHATTRIBUTESET_HPP_
#define UPL_HEALTHATTRIBUTESET_HPP_

#include "SDK/SDK.h"

namespace Game {
    class UPL_HealthAttributeSet : public UPL_AttributeSet {
        public:

            static FGameplayAttribute *GetMaxHealthAttribute(FGameplayAttribute *result);
            static FGameplayAttribute *GetHealthAttribute(FGameplayAttribute *result);

            FGameplayAttributeData                             Health;                                                     // 0x0030   (0x0010)  
            FGameplayAttributeData                             MaxHealth;                                                  // 0x0040   (0x0010)  
    };
}

#endif /* !UPL_HEALTHATTRIBUTESET_HPP_ */
