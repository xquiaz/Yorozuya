// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _darkhole_real_add_time_inform_zocl
    {
        int nAddSec;
        unsigned int dwTotalLimSec;
        char szMsg[17];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _darkhole_real_add_time_inform_zocl*);
            return (org_ptr(0x14026f920L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE