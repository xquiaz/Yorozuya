// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _starting_vote_inform_zocl
    {
        int nVoteSerial;
        char byLimGrade;
        unsigned __int16 wLeftSec;
        unsigned __int16 wContentSize;
        char wszContent[1280];
    public:
        _starting_vote_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _starting_vote_inform_zocl*);
            (org_ptr(0x1402b0ed0L))(this);
        };
        void ctor__starting_vote_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _starting_vote_inform_zocl*);
            (org_ptr(0x1402b0ed0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _starting_vote_inform_zocl*);
            return (org_ptr(0x1402b0ef0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE