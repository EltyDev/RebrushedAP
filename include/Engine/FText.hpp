#ifndef FTEXT_HPP_
#define FTEXT_HPP_

#include "SDK/SDK.h"

namespace Engine {
    class FText {
        public:
            FText(FString &&);
            ~FText() = default;

            FTextData* Data;
            char UnknownData[0x10];
        protected:
        private:
    };
}

#endif /* !FTEXT_HPP_ */
