// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _unmannedtrader_search_list_result_zocl
    {
        struct __list
        {
            unsigned int dwRegistSerial;
            char byTableCode;
             __declspec(align(1)) unsigned __int16 wItemIndex;
             __declspec(align(1)) unsigned __int64 dwD;
             __declspec(align(1)) unsigned int dwU;
             __declspec(align(1)) unsigned int dwPrice;
             __declspec(align(1)) unsigned int dwOwner;
            char wszOwnerName[17];
            unsigned int dwLeftSec;
        };
        char byRet;
        unsigned int dwListIndex;
        char byDivision;
        char byClass;
        char bySubClass;
        char bySortType;
        unsigned int dwVer;
        char byPage;
        unsigned int dwMaxPage;
        char byCnt;
        __list List[10];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE