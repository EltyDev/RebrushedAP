#ifndef PATCH_HPP_
#define PATCH_HPP_

#include <cstdint>
#include <vector>

namespace Utils {
    class Patch {
        public:
            template<typename... Args>
            Patch(uintptr_t offset, Args... args) {
                _bytes = {static_cast<unsigned char>(args)...};
                _address = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offset;
                _applied = false;
            }


            Patch(uintptr_t offset, const std::vector<unsigned char> &bytes);
            ~Patch();
            void apply();
            void restore();
            bool isApplied() const;
            uintptr_t getAddress() const;
        protected:
        private:
            uintptr_t _address;
            std::vector<unsigned char> _bytes;
            std::vector<unsigned char> _originalBytes;
            bool _applied;
    };
}

#endif /* !PATCH_HPP_ */

