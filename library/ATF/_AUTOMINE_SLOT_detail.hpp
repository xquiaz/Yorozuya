// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_AUTOMINE_SLOT_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_ptr _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_next(nullptr);
        static info::_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_clbk _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_user(nullptr);
        
        static void _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_wrapper(struct _AUTOMINE_SLOT* _this)
        {
           _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_user(_this, _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_next);
        };
        
        static hook_record _AUTOMINE_SLOT_functions[] = {
        {   (LPVOID)0x1402d4180L,
            (LPVOID *)&_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_user,
            (LPVOID *)&_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_next,
            (LPVOID)cast_pointer_function(_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_wrapper),
            (LPVOID)cast_pointer_function((void(_AUTOMINE_SLOT::*)())&_AUTOMINE_SLOT::ctor__AUTOMINE_SLOT) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE