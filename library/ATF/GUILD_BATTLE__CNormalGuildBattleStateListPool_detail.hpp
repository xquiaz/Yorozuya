// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CNormalGuildBattleStateListPool_info.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace detail
        {
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_user(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_user(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_user(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_user(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_user(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_user(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_ptr GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_next(nullptr);
            static info::GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_clbk GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_user(nullptr);
            
            static void GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_next);
            };
            static void GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_next);
            };
            static void GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_wrapper()
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_user(GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_next);
            };
            static struct GUILD_BATTLE::CNormalGuildBattleStateList* GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this, unsigned int dwID)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_user(_this, dwID, GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_next);
            };
            static bool GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_next);
            };
            static struct GUILD_BATTLE::CNormalGuildBattleStateListPool* GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_wrapper()
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_user(GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_next);
            };
            static void GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_next);
            };
            
            static hook_record CNormalGuildBattleStateListPool_functions[] = {
            {   (LPVOID)0x1403f22b0L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::ctor_CNormalGuildBattleStateListPool) },
            {   (LPVOID)0x1403f2640L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Clear) },
            {   (LPVOID)0x1403f2430L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Destroy) },
            {   (LPVOID)0x1403f26d0L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_wrapper),
                (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattleStateList*(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)(unsigned int))&GUILD_BATTLE::CNormalGuildBattleStateListPool::Get) },
            {   (LPVOID)0x1403f24b0L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Init) },
            {   (LPVOID)0x1403f2370L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_wrapper),
                (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattleStateListPool*(*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Instance) },
            {   (LPVOID)0x1403f22e0L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::dtor_CNormalGuildBattleStateListPool) },
            
            };
            
        }; // static end namespace detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE