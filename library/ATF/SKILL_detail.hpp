// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "SKILL_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::SKILLGetDmg2_ptr SKILLGetDmg2_next(nullptr);
        static info::SKILLGetDmg2_clbk SKILLGetDmg2_user(nullptr);
        static info::SKILLInit4_ptr SKILLInit4_next(nullptr);
        static info::SKILLInit4_clbk SKILLInit4_user(nullptr);
        static info::SKILLctor_SKILL6_ptr SKILLctor_SKILL6_next(nullptr);
        static info::SKILLctor_SKILL6_clbk SKILLctor_SKILL6_user(nullptr);
        
        static int SKILLGetDmg2_wrapper(struct SKILL* _this, float fDamRate)
        {
           return SKILLGetDmg2_user(_this, fDamRate, SKILLGetDmg2_next);
        };
        static void SKILLInit4_wrapper(struct SKILL* _this, int type, int dmg, int minprob, int maxprob, int len, int castdelay, int delay, int el)
        {
           SKILLInit4_user(_this, type, dmg, minprob, maxprob, len, castdelay, delay, el, SKILLInit4_next);
        };
        static void SKILLctor_SKILL6_wrapper(struct SKILL* _this)
        {
           SKILLctor_SKILL6_user(_this, SKILLctor_SKILL6_next);
        };
        
        static hook_record SKILL_functions[] = {
        {   (LPVOID)0x14012d250L,
            (LPVOID *)&SKILLGetDmg2_user,
            (LPVOID *)&SKILLGetDmg2_next,
            (LPVOID)cast_pointer_function(SKILLGetDmg2_wrapper),
            (LPVOID)cast_pointer_function((int(SKILL::*)(float))&SKILL::GetDmg) },
        {   (LPVOID)0x14012cf80L,
            (LPVOID *)&SKILLInit4_user,
            (LPVOID *)&SKILLInit4_next,
            (LPVOID)cast_pointer_function(SKILLInit4_wrapper),
            (LPVOID)cast_pointer_function((void(SKILL::*)(int, int, int, int, int, int, int, int))&SKILL::Init) },
        {   (LPVOID)0x14012cc10L,
            (LPVOID *)&SKILLctor_SKILL6_user,
            (LPVOID *)&SKILLctor_SKILL6_next,
            (LPVOID)cast_pointer_function(SKILLctor_SKILL6_wrapper),
            (LPVOID)cast_pointer_function((void(SKILL::*)())&SKILL::ctor_SKILL) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE