// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _holy_quest_report_wrac
    {
        char byRaceCode;
        char wszCharName[17];
        char byDestroyedRaceCode;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _holy_quest_report_wrac*);
            return (org_ptr(0x140284bc0L))(this);
        };
    };
END_ATF_NAMESPACE