// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _total_guild_rank_result_zocl
    {
        struct _list
        {
            char byRank;
            char wszGuildName[17];
            char byGrade;
            char wszMasterName[17];
        };
        unsigned int dwVer;
        char byRace;
        char byExistSelfRankInfo;
        char byCnt;
        _list list[11];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _total_guild_rank_result_zocl*);
            return (org_ptr(0x1402ca390L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE