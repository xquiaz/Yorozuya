// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_quest_history_download_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_ptr _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_next(nullptr);
        static info::_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_clbk _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_user(nullptr);
        static info::_quest_history_download_result_zoclsize4_ptr _quest_history_download_result_zoclsize4_next(nullptr);
        static info::_quest_history_download_result_zoclsize4_clbk _quest_history_download_result_zoclsize4_user(nullptr);
        
        static void _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_wrapper(struct _quest_history_download_result_zocl* _this)
        {
           _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_user(_this, _quest_history_download_result_zoclctor__quest_history_download_result_zocl2_next);
        };
        static int _quest_history_download_result_zoclsize4_wrapper(struct _quest_history_download_result_zocl* _this)
        {
           return _quest_history_download_result_zoclsize4_user(_this, _quest_history_download_result_zoclsize4_next);
        };
        
        static hook_record _quest_history_download_result_zocl_functions[] = {
        {   (LPVOID)0x1400ef6c0L,
            (LPVOID *)&_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_user,
            (LPVOID *)&_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_next,
            (LPVOID)cast_pointer_function(_quest_history_download_result_zoclctor__quest_history_download_result_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_quest_history_download_result_zocl::*)())&_quest_history_download_result_zocl::ctor__quest_history_download_result_zocl) },
        {   (LPVOID)0x1400ef6e0L,
            (LPVOID *)&_quest_history_download_result_zoclsize4_user,
            (LPVOID *)&_quest_history_download_result_zoclsize4_next,
            (LPVOID)cast_pointer_function(_quest_history_download_result_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_quest_history_download_result_zocl::*)())&_quest_history_download_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE