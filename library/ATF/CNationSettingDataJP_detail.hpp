// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingDataJP_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNationSettingDataJPctor_CNationSettingDataJP2_ptr CNationSettingDataJPctor_CNationSettingDataJP2_next(nullptr);
        static info::CNationSettingDataJPctor_CNationSettingDataJP2_clbk CNationSettingDataJPctor_CNationSettingDataJP2_user(nullptr);
        static info::CNationSettingDataJPCreateBilling4_ptr CNationSettingDataJPCreateBilling4_next(nullptr);
        static info::CNationSettingDataJPCreateBilling4_clbk CNationSettingDataJPCreateBilling4_user(nullptr);
        static info::CNationSettingDataJPCreateWorker6_ptr CNationSettingDataJPCreateWorker6_next(nullptr);
        static info::CNationSettingDataJPCreateWorker6_clbk CNationSettingDataJPCreateWorker6_user(nullptr);
        static info::CNationSettingDataJPGetCashItemPrice8_ptr CNationSettingDataJPGetCashItemPrice8_next(nullptr);
        static info::CNationSettingDataJPGetCashItemPrice8_clbk CNationSettingDataJPGetCashItemPrice8_user(nullptr);
        static info::CNationSettingDataJPGetItemName10_ptr CNationSettingDataJPGetItemName10_next(nullptr);
        static info::CNationSettingDataJPGetItemName10_clbk CNationSettingDataJPGetItemName10_user(nullptr);
        static info::CNationSettingDataJPInit12_ptr CNationSettingDataJPInit12_next(nullptr);
        static info::CNationSettingDataJPInit12_clbk CNationSettingDataJPInit12_user(nullptr);
        static info::CNationSettingDataJPLoop14_ptr CNationSettingDataJPLoop14_next(nullptr);
        static info::CNationSettingDataJPLoop14_clbk CNationSettingDataJPLoop14_user(nullptr);
        static info::CNationSettingDataJPReadSystemPass16_ptr CNationSettingDataJPReadSystemPass16_next(nullptr);
        static info::CNationSettingDataJPReadSystemPass16_clbk CNationSettingDataJPReadSystemPass16_user(nullptr);
        static info::CNationSettingDataJPSetUnitPassiveValue18_ptr CNationSettingDataJPSetUnitPassiveValue18_next(nullptr);
        static info::CNationSettingDataJPSetUnitPassiveValue18_clbk CNationSettingDataJPSetUnitPassiveValue18_user(nullptr);
        
        static void CNationSettingDataJPctor_CNationSettingDataJP2_wrapper(struct CNationSettingDataJP* _this)
        {
           CNationSettingDataJPctor_CNationSettingDataJP2_user(_this, CNationSettingDataJPctor_CNationSettingDataJP2_next);
        };
        static struct CBilling* CNationSettingDataJPCreateBilling4_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPCreateBilling4_user(_this, CNationSettingDataJPCreateBilling4_next);
        };
        static struct CashDbWorker* CNationSettingDataJPCreateWorker6_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPCreateWorker6_user(_this, CNationSettingDataJPCreateWorker6_next);
        };
        static int CNationSettingDataJPGetCashItemPrice8_wrapper(struct CNationSettingDataJP* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataJPGetCashItemPrice8_user(_this, pFld, CNationSettingDataJPGetCashItemPrice8_next);
        };
        static char* CNationSettingDataJPGetItemName10_wrapper(struct CNationSettingDataJP* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataJPGetItemName10_user(_this, pFld, CNationSettingDataJPGetItemName10_next);
        };
        static int CNationSettingDataJPInit12_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPInit12_user(_this, CNationSettingDataJPInit12_next);
        };
        static void CNationSettingDataJPLoop14_wrapper(struct CNationSettingDataJP* _this)
        {
           CNationSettingDataJPLoop14_user(_this, CNationSettingDataJPLoop14_next);
        };
        static bool CNationSettingDataJPReadSystemPass16_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPReadSystemPass16_user(_this, CNationSettingDataJPReadSystemPass16_next);
        };
        static void CNationSettingDataJPSetUnitPassiveValue18_wrapper(struct CNationSettingDataJP* _this, float* fUnitPv_DefFc)
        {
           CNationSettingDataJPSetUnitPassiveValue18_user(_this, fUnitPv_DefFc, CNationSettingDataJPSetUnitPassiveValue18_next);
        };
        
        static hook_record CNationSettingDataJP_functions[] = {
        {   (LPVOID)0x14022d0c0L,
            (LPVOID *)&CNationSettingDataJPctor_CNationSettingDataJP2_user,
            (LPVOID *)&CNationSettingDataJPctor_CNationSettingDataJP2_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPctor_CNationSettingDataJP2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataJP::*)())&CNationSettingDataJP::ctor_CNationSettingDataJP) },
        {   (LPVOID)0x14022d330L,
            (LPVOID *)&CNationSettingDataJPCreateBilling4_user,
            (LPVOID *)&CNationSettingDataJPCreateBilling4_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPCreateBilling4_wrapper),
            (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataJP::*)())&CNationSettingDataJP::CreateBilling) },
        {   (LPVOID)0x14022d280L,
            (LPVOID *)&CNationSettingDataJPCreateWorker6_user,
            (LPVOID *)&CNationSettingDataJPCreateWorker6_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPCreateWorker6_wrapper),
            (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataJP::*)())&CNationSettingDataJP::CreateWorker) },
        {   (LPVOID)0x14022d3e0L,
            (LPVOID *)&CNationSettingDataJPGetCashItemPrice8_user,
            (LPVOID *)&CNationSettingDataJPGetCashItemPrice8_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPGetCashItemPrice8_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataJP::*)(struct _CashShop_str_fld*))&CNationSettingDataJP::GetCashItemPrice) },
        {   (LPVOID)0x14022d230L,
            (LPVOID *)&CNationSettingDataJPGetItemName10_user,
            (LPVOID *)&CNationSettingDataJPGetItemName10_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPGetItemName10_wrapper),
            (LPVOID)cast_pointer_function((char*(CNationSettingDataJP::*)(struct _NameTxt_fld*))&CNationSettingDataJP::GetItemName) },
        {   (LPVOID)0x14022d120L,
            (LPVOID *)&CNationSettingDataJPInit12_user,
            (LPVOID *)&CNationSettingDataJPInit12_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPInit12_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataJP::*)())&CNationSettingDataJP::Init) },
        {   (LPVOID)0x14022d220L,
            (LPVOID *)&CNationSettingDataJPLoop14_user,
            (LPVOID *)&CNationSettingDataJPLoop14_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPLoop14_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataJP::*)())&CNationSettingDataJP::Loop) },
        {   (LPVOID)0x14022d400L,
            (LPVOID *)&CNationSettingDataJPReadSystemPass16_user,
            (LPVOID *)&CNationSettingDataJPReadSystemPass16_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPReadSystemPass16_wrapper),
            (LPVOID)cast_pointer_function((bool(CNationSettingDataJP::*)())&CNationSettingDataJP::ReadSystemPass) },
        {   (LPVOID)0x14022d250L,
            (LPVOID *)&CNationSettingDataJPSetUnitPassiveValue18_user,
            (LPVOID *)&CNationSettingDataJPSetUnitPassiveValue18_next,
            (LPVOID)cast_pointer_function(CNationSettingDataJPSetUnitPassiveValue18_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataJP::*)(float*))&CNationSettingDataJP::SetUnitPassiveValue) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE