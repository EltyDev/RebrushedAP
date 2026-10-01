#ifndef FNAME_HPP_
#define FNAME_HPP_

#include "SDK/SDK/BasicType.h"

#include <cstdint>
#include <string>
#include <unordered_map>

namespace Engine {

    enum EFindName  {  
        FNAME_Find,
        FNAME_Add,
    };

    class FName {
        public:
            FName(const std::string &name, EFindName findType = FNAME_Add);
            ~FName() = default;
            const std::string &ToString() const;
            bool operator==(char const *) const;
            bool operator==(FName &&) const;

            FNameEntryId ComparisonIndex = 0;
            int32_t Number = 0;
        protected:
        private:
            static std::unordered_map<uint64_t, std::string> _cache;
    };
}

#endif /* !FNAME_HPP_ */
