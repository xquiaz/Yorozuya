// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_raceboss_accumulation_winrate
    {
        unsigned int dwTotalCnt[3];
        unsigned int dwWinCnt[3];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_raceboss_accumulation_winrate*);
            return (org_ptr(0x1402bd720L))(this);
        };
    };
END_ATF_NAMESPACE