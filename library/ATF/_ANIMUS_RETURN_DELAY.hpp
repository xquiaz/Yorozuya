// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_DELAY_PROCESS.hpp"


START_ATF_NAMESPACE
    struct  _ANIMUS_RETURN_DELAY : _DELAY_PROCESS
    {
    public:
        void Process(unsigned int dwIndex, unsigned int dwSerial)
        {
            using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*, unsigned int, unsigned int);
            (org_ptr(0x140066400L))(this, dwIndex, dwSerial);
        };
        _ANIMUS_RETURN_DELAY()
        {
            using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
            (org_ptr(0x14007f200L))(this);
        };
        void ctor__ANIMUS_RETURN_DELAY()
        {
            using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
            (org_ptr(0x14007f200L))(this);
        };
        ~_ANIMUS_RETURN_DELAY()
        {
            using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
            (org_ptr(0x140080370L))(this);
        };
        void dtor__ANIMUS_RETURN_DELAY()
        {
            using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
            (org_ptr(0x140080370L))(this);
        };
    };
END_ATF_NAMESPACE