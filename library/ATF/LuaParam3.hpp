// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct LuaParam3
    {
        int m_1;
        int m_2;
        int m_3;
    public:
        LuaParam3(int n1, int n2, int n3)
        {
            using org_ptr = void (WINAPIV*)(struct LuaParam3*, int, int, int);
            (org_ptr(0x140409f00L))(this, n1, n2, n3);
        };
        void ctor_LuaParam3(int n1, int n2, int n3)
        {
            using org_ptr = void (WINAPIV*)(struct LuaParam3*, int, int, int);
            (org_ptr(0x140409f00L))(this, n1, n2, n3);
        };
    };
END_ATF_NAMESPACE