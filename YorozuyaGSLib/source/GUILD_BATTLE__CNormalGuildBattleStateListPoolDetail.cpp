#include <GUILD_BATTLE__CNormalGuildBattleStateListPoolDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_ptr GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_clbk GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_ptr GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_clbk GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_wrapper()
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_user(GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_next);
            };
            struct GUILD_BATTLE::CNormalGuildBattleStateList* GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this, unsigned int dwID)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_user(_this, dwID, GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_next);
            };
            struct GUILD_BATTLE::CNormalGuildBattleStateListPool* GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_wrapper()
            {
               return GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_user(GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateListPool* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_user(_this, GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_next);
            };
            
            ::std::array<hook_record, 7> CNormalGuildBattleStateListPool_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403f22b0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolctor_CNormalGuildBattleStateListPool2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::ctor_CNormalGuildBattleStateListPool)
                },
                _hook_record {
                    (LPVOID)0x1403f2640L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolClear4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Clear)
                },
                _hook_record {
                    (LPVOID)0x1403f2430L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolDestroy6_wrapper),
                    (LPVOID)cast_pointer_function((void(*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Destroy)
                },
                _hook_record {
                    (LPVOID)0x1403f26d0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolGet8_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattleStateList*(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)(unsigned int))&GUILD_BATTLE::CNormalGuildBattleStateListPool::Get)
                },
                _hook_record {
                    (LPVOID)0x1403f24b0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolInit10_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Init)
                },
                _hook_record {
                    (LPVOID)0x1403f2370L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPoolInstance12_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattleStateListPool*(*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::Instance)
                },
                _hook_record {
                    (LPVOID)0x1403f22e0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateListPooldtor_CNormalGuildBattleStateListPool16_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateListPool::*)())&GUILD_BATTLE::CNormalGuildBattleStateListPool::dtor_CNormalGuildBattleStateListPool)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
