// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _personal_amine_mineore_zocl
    {
        struct __changed
        {
            unsigned __int16 wItemIndex;
            unsigned int dwDur;
            unsigned __int16 wItemSerial;
        public:
            __changed()
            {
                using org_ptr = void (WINAPIV*)(struct __changed*);
                (org_ptr(0x14029d620L))(this);
            };
            void ctor___changed()
            {
                using org_ptr = void (WINAPIV*)(struct __changed*);
                (org_ptr(0x14029d620L))(this);
            };
        };
        unsigned int dwObjSerial;
        char m_byUseBattery;
        unsigned int dwBattery;
        char byChangedNum;
        __changed change[40];
    public:
        _personal_amine_mineore_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _personal_amine_mineore_zocl*);
            (org_ptr(0x14029d5a0L))(this);
        };
        void ctor__personal_amine_mineore_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _personal_amine_mineore_zocl*);
            (org_ptr(0x14029d5a0L))(this);
        };
        void clear()
        {
            using org_ptr = void (WINAPIV*)(struct _personal_amine_mineore_zocl*);
            (org_ptr(0x1402ddf10L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _personal_amine_mineore_zocl*);
            return (org_ptr(0x14029d650L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE