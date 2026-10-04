#ifndef UOBJECT_HPP_
#define UOBJECT_HPP_

#include "SDK/SDK.h"
#include "Engine/FName.hpp"

namespace Engine {
    class UObject {
        public:

            void ProcessEvent(class UFunction *, void *);
            static UClass *StaticClass();

            uint64_t                                           vtable;                                                     // 0x0000   (0x0008)
            EObjectFlags                                       ObjectFlags;                                                // 0x0008   (0x0004)
            int                                                InternalIndex;                                              // 0x000C   (0x0004)
            class UClass*                                      ClassPrivate;                                               // 0x0010   (0x0008)
            Engine::FName                                      NamePrivate;                                                // 0x0018   (0x0008)
            class UObject*                                     OuterPrivate;                                               // 0x0020   (0x0008)
        protected:
        private:
    };
}

#endif /* !UOBJECT_HPP_ */
