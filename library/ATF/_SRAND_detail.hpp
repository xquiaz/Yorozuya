// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_SRAND_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_SRANDctor__SRAND2_ptr _SRANDctor__SRAND2_next(nullptr);
        static info::_SRANDctor__SRAND2_clbk _SRANDctor__SRAND2_user(nullptr);
        
        static void _SRANDctor__SRAND2_wrapper(struct _SRAND* _this)
        {
           _SRANDctor__SRAND2_user(_this, _SRANDctor__SRAND2_next);
        };
        
        static hook_record _SRAND_functions[] = {
        {   (LPVOID)0x140202390L,
            (LPVOID *)&_SRANDctor__SRAND2_user,
            (LPVOID *)&_SRANDctor__SRAND2_next,
            (LPVOID)cast_pointer_function(_SRANDctor__SRAND2_wrapper),
            (LPVOID)cast_pointer_function((void(_SRAND::*)())&_SRAND::ctor__SRAND) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE