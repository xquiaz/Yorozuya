// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_cash_event_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_cash_event_inform_zoclctor__cash_event_inform_zocl2_ptr _cash_event_inform_zoclctor__cash_event_inform_zocl2_next(nullptr);
        static info::_cash_event_inform_zoclctor__cash_event_inform_zocl2_clbk _cash_event_inform_zoclctor__cash_event_inform_zocl2_user(nullptr);
        static info::_cash_event_inform_zoclsize4_ptr _cash_event_inform_zoclsize4_next(nullptr);
        static info::_cash_event_inform_zoclsize4_clbk _cash_event_inform_zoclsize4_user(nullptr);
        
        static void _cash_event_inform_zoclctor__cash_event_inform_zocl2_wrapper(struct _cash_event_inform_zocl* _this)
        {
           _cash_event_inform_zoclctor__cash_event_inform_zocl2_user(_this, _cash_event_inform_zoclctor__cash_event_inform_zocl2_next);
        };
        static int _cash_event_inform_zoclsize4_wrapper(struct _cash_event_inform_zocl* _this)
        {
           return _cash_event_inform_zoclsize4_user(_this, _cash_event_inform_zoclsize4_next);
        };
        
        static hook_record _cash_event_inform_zocl_functions[] = {
        {   (LPVOID)0x14030d710L,
            (LPVOID *)&_cash_event_inform_zoclctor__cash_event_inform_zocl2_user,
            (LPVOID *)&_cash_event_inform_zoclctor__cash_event_inform_zocl2_next,
            (LPVOID)cast_pointer_function(_cash_event_inform_zoclctor__cash_event_inform_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_cash_event_inform_zocl::*)())&_cash_event_inform_zocl::ctor__cash_event_inform_zocl) },
        {   (LPVOID)0x14030d760L,
            (LPVOID *)&_cash_event_inform_zoclsize4_user,
            (LPVOID *)&_cash_event_inform_zoclsize4_next,
            (LPVOID)cast_pointer_function(_cash_event_inform_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_cash_event_inform_zocl::*)())&_cash_event_inform_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE