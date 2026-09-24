#ifndef FNAME_HPP_
#define FNAME_HPP_

#include "SDK/SDK.h"
#include <map>

#define MAX_NAME_LENGTH 4095
#define GNAMES_OFFSET 0x5544000

	
struct FNameEntryHeader {
    unsigned short bIsWide : 1;
    unsigned short LowercaseProbeHash : 5;
    unsigned short Len : 10;
};

namespace FNameUtils {

    std::string &toString(const FName &fname);

};


#endif /* !FNAME_HPP_ */

