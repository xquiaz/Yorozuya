// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_update_mineore_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_update_mineorector__qry_case_update_mineore2_ptr _qry_case_update_mineorector__qry_case_update_mineore2_next(nullptr);
        static info::_qry_case_update_mineorector__qry_case_update_mineore2_clbk _qry_case_update_mineorector__qry_case_update_mineore2_user(nullptr);
        
        static void _qry_case_update_mineorector__qry_case_update_mineore2_wrapper(struct _qry_case_update_mineore* _this)
        {
           _qry_case_update_mineorector__qry_case_update_mineore2_user(_this, _qry_case_update_mineorector__qry_case_update_mineore2_next);
        };
        
        static hook_record _qry_case_update_mineore_functions[] = {
        {   (LPVOID)0x1402ddbb0L,
            (LPVOID *)&_qry_case_update_mineorector__qry_case_update_mineore2_user,
            (LPVOID *)&_qry_case_update_mineorector__qry_case_update_mineore2_next,
            (LPVOID)cast_pointer_function(_qry_case_update_mineorector__qry_case_update_mineore2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_update_mineore::*)())&_qry_case_update_mineore::ctor__qry_case_update_mineore) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE