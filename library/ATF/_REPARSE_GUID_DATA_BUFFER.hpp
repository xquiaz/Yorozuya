// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "$6177A0AD8E9F0D390D62242D769E2CDF.hpp"
#include "_GUID.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _REPARSE_GUID_DATA_BUFFER
    {
        unsigned int ReparseTag;
        unsigned __int16 ReparseDataLength;
        unsigned __int16 Reserved;
        _GUID ReparseGuid;
        $6177A0AD8E9F0D390D62242D769E2CDF GenericReparseBuffer;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE