// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_param_cash_select_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_param_cash_selectctor__param_cash_select2_ptr _param_cash_selectctor__param_cash_select2_next(nullptr);
        static info::_param_cash_selectctor__param_cash_select2_clbk _param_cash_selectctor__param_cash_select2_user(nullptr);
        static info::_param_cash_selectsize4_ptr _param_cash_selectsize4_next(nullptr);
        static info::_param_cash_selectsize4_clbk _param_cash_selectsize4_user(nullptr);
        static info::_param_cash_selectdtor__param_cash_select6_ptr _param_cash_selectdtor__param_cash_select6_next(nullptr);
        static info::_param_cash_selectdtor__param_cash_select6_clbk _param_cash_selectdtor__param_cash_select6_user(nullptr);
        
        static void _param_cash_selectctor__param_cash_select2_wrapper(struct _param_cash_select* _this, unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        {
           _param_cash_selectctor__param_cash_select2_user(_this, dwAc, dwAv, wSock, _param_cash_selectctor__param_cash_select2_next);
        };
        static int _param_cash_selectsize4_wrapper(struct _param_cash_select* _this)
        {
           return _param_cash_selectsize4_user(_this, _param_cash_selectsize4_next);
        };
        static void _param_cash_selectdtor__param_cash_select6_wrapper(struct _param_cash_select* _this)
        {
           _param_cash_selectdtor__param_cash_select6_user(_this, _param_cash_selectdtor__param_cash_select6_next);
        };
        
        static hook_record _param_cash_select_functions[] = {
        {   (LPVOID)0x140304a80L,
            (LPVOID *)&_param_cash_selectctor__param_cash_select2_user,
            (LPVOID *)&_param_cash_selectctor__param_cash_select2_next,
            (LPVOID)cast_pointer_function(_param_cash_selectctor__param_cash_select2_wrapper),
            (LPVOID)cast_pointer_function((void(_param_cash_select::*)(unsigned int, unsigned int, uint16_t))&_param_cash_select::ctor__param_cash_select) },
        {   (LPVOID)0x140304b30L,
            (LPVOID *)&_param_cash_selectsize4_user,
            (LPVOID *)&_param_cash_selectsize4_next,
            (LPVOID)cast_pointer_function(_param_cash_selectsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_param_cash_select::*)())&_param_cash_select::size) },
        {   (LPVOID)0x140304af0L,
            (LPVOID *)&_param_cash_selectdtor__param_cash_select6_user,
            (LPVOID *)&_param_cash_selectdtor__param_cash_select6_next,
            (LPVOID)cast_pointer_function(_param_cash_selectdtor__param_cash_select6_wrapper),
            (LPVOID)cast_pointer_function((void(_param_cash_select::*)())&_param_cash_select::dtor__param_cash_select) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE