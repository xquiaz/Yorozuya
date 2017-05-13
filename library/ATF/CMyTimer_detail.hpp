// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMyTimer_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CMyTimerBeginTimer2_ptr CMyTimerBeginTimer2_next(nullptr);
        static info::CMyTimerBeginTimer2_clbk CMyTimerBeginTimer2_user(nullptr);
        static info::CMyTimerBeginTimerAddLapse4_ptr CMyTimerBeginTimerAddLapse4_next(nullptr);
        static info::CMyTimerBeginTimerAddLapse4_clbk CMyTimerBeginTimerAddLapse4_user(nullptr);
        static info::CMyTimerctor_CMyTimer6_ptr CMyTimerctor_CMyTimer6_next(nullptr);
        static info::CMyTimerctor_CMyTimer6_clbk CMyTimerctor_CMyTimer6_user(nullptr);
        static info::CMyTimerCountingAddTickOld8_ptr CMyTimerCountingAddTickOld8_next(nullptr);
        static info::CMyTimerCountingAddTickOld8_clbk CMyTimerCountingAddTickOld8_user(nullptr);
        static info::CMyTimerCountingTimer10_ptr CMyTimerCountingTimer10_next(nullptr);
        static info::CMyTimerCountingTimer10_clbk CMyTimerCountingTimer10_user(nullptr);
        static info::CMyTimerGetTerm12_ptr CMyTimerGetTerm12_next(nullptr);
        static info::CMyTimerGetTerm12_clbk CMyTimerGetTerm12_user(nullptr);
        static info::CMyTimerNextTimeRun14_ptr CMyTimerNextTimeRun14_next(nullptr);
        static info::CMyTimerNextTimeRun14_clbk CMyTimerNextTimeRun14_user(nullptr);
        static info::CMyTimerStopTimer16_ptr CMyTimerStopTimer16_next(nullptr);
        static info::CMyTimerStopTimer16_clbk CMyTimerStopTimer16_user(nullptr);
        static info::CMyTimerTermTimeRun18_ptr CMyTimerTermTimeRun18_next(nullptr);
        static info::CMyTimerTermTimeRun18_clbk CMyTimerTermTimeRun18_user(nullptr);
        static info::CMyTimerdtor_CMyTimer23_ptr CMyTimerdtor_CMyTimer23_next(nullptr);
        static info::CMyTimerdtor_CMyTimer23_clbk CMyTimerdtor_CMyTimer23_user(nullptr);
        
        static void CMyTimerBeginTimer2_wrapper(struct CMyTimer* _this, unsigned int dwTerm)
        {
           CMyTimerBeginTimer2_user(_this, dwTerm, CMyTimerBeginTimer2_next);
        };
        static void CMyTimerBeginTimerAddLapse4_wrapper(struct CMyTimer* _this, unsigned int dwTerm, unsigned int dwAddLapse)
        {
           CMyTimerBeginTimerAddLapse4_user(_this, dwTerm, dwAddLapse, CMyTimerBeginTimerAddLapse4_next);
        };
        static void CMyTimerctor_CMyTimer6_wrapper(struct CMyTimer* _this)
        {
           CMyTimerctor_CMyTimer6_user(_this, CMyTimerctor_CMyTimer6_next);
        };
        static void CMyTimerCountingAddTickOld8_wrapper(struct CMyTimer* _this, unsigned int dwAddGap)
        {
           CMyTimerCountingAddTickOld8_user(_this, dwAddGap, CMyTimerCountingAddTickOld8_next);
        };
        static bool CMyTimerCountingTimer10_wrapper(struct CMyTimer* _this)
        {
           return CMyTimerCountingTimer10_user(_this, CMyTimerCountingTimer10_next);
        };
        static unsigned int CMyTimerGetTerm12_wrapper(struct CMyTimer* _this)
        {
           return CMyTimerGetTerm12_user(_this, CMyTimerGetTerm12_next);
        };
        static void CMyTimerNextTimeRun14_wrapper(struct CMyTimer* _this)
        {
           CMyTimerNextTimeRun14_user(_this, CMyTimerNextTimeRun14_next);
        };
        static void CMyTimerStopTimer16_wrapper(struct CMyTimer* _this)
        {
           CMyTimerStopTimer16_user(_this, CMyTimerStopTimer16_next);
        };
        static void CMyTimerTermTimeRun18_wrapper(struct CMyTimer* _this)
        {
           CMyTimerTermTimeRun18_user(_this, CMyTimerTermTimeRun18_next);
        };
        static void CMyTimerdtor_CMyTimer23_wrapper(struct CMyTimer* _this)
        {
           CMyTimerdtor_CMyTimer23_user(_this, CMyTimerdtor_CMyTimer23_next);
        };
        
        static hook_record CMyTimer_functions[] = {
        {   (LPVOID)0x1404389d0L,
            (LPVOID *)&CMyTimerBeginTimer2_user,
            (LPVOID *)&CMyTimerBeginTimer2_next,
            (LPVOID)cast_pointer_function(CMyTimerBeginTimer2_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)(unsigned int))&CMyTimer::BeginTimer) },
        {   (LPVOID)0x140438a30L,
            (LPVOID *)&CMyTimerBeginTimerAddLapse4_user,
            (LPVOID *)&CMyTimerBeginTimerAddLapse4_next,
            (LPVOID)cast_pointer_function(CMyTimerBeginTimerAddLapse4_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)(unsigned int, unsigned int))&CMyTimer::BeginTimerAddLapse) },
        {   (LPVOID)0x140438980L,
            (LPVOID *)&CMyTimerctor_CMyTimer6_user,
            (LPVOID *)&CMyTimerctor_CMyTimer6_next,
            (LPVOID)cast_pointer_function(CMyTimerctor_CMyTimer6_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::ctor_CMyTimer) },
        {   (LPVOID)0x140438ab0L,
            (LPVOID *)&CMyTimerCountingAddTickOld8_user,
            (LPVOID *)&CMyTimerCountingAddTickOld8_next,
            (LPVOID)cast_pointer_function(CMyTimerCountingAddTickOld8_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)(unsigned int))&CMyTimer::CountingAddTickOld) },
        {   (LPVOID)0x140438ae0L,
            (LPVOID *)&CMyTimerCountingTimer10_user,
            (LPVOID *)&CMyTimerCountingTimer10_next,
            (LPVOID)cast_pointer_function(CMyTimerCountingTimer10_wrapper),
            (LPVOID)cast_pointer_function((bool(CMyTimer::*)())&CMyTimer::CountingTimer) },
        {   (LPVOID)0x140438c10L,
            (LPVOID *)&CMyTimerGetTerm12_user,
            (LPVOID *)&CMyTimerGetTerm12_next,
            (LPVOID)cast_pointer_function(CMyTimerGetTerm12_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CMyTimer::*)())&CMyTimer::GetTerm) },
        {   (LPVOID)0x140438b80L,
            (LPVOID *)&CMyTimerNextTimeRun14_user,
            (LPVOID *)&CMyTimerNextTimeRun14_next,
            (LPVOID)cast_pointer_function(CMyTimerNextTimeRun14_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::NextTimeRun) },
        {   (LPVOID)0x140438a90L,
            (LPVOID *)&CMyTimerStopTimer16_user,
            (LPVOID *)&CMyTimerStopTimer16_next,
            (LPVOID)cast_pointer_function(CMyTimerStopTimer16_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::StopTimer) },
        {   (LPVOID)0x140438bd0L,
            (LPVOID *)&CMyTimerTermTimeRun18_user,
            (LPVOID *)&CMyTimerTermTimeRun18_next,
            (LPVOID)cast_pointer_function(CMyTimerTermTimeRun18_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::TermTimeRun) },
        {   (LPVOID)0x140072960L,
            (LPVOID *)&CMyTimerdtor_CMyTimer23_user,
            (LPVOID *)&CMyTimerdtor_CMyTimer23_next,
            (LPVOID)cast_pointer_function(CMyTimerdtor_CMyTimer23_wrapper),
            (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::dtor_CMyTimer) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE