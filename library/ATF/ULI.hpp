// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ImgDelayDescr.hpp"
#include "UnloadInfo.hpp"


START_ATF_NAMESPACE
    struct  ULI : UnloadInfo
    {
    public:
        void Link()
        {
            using org_ptr = void (WINAPIV*)(struct ULI*);
            (org_ptr(0x1406764dcL))(this);
        };
        ULI(struct ImgDelayDescr* pidd_)
        {
            using org_ptr = void (WINAPIV*)(struct ULI*, struct ImgDelayDescr*);
            (org_ptr(0x1406765b0L))(this, pidd_);
        };
        void ctor_ULI(struct ImgDelayDescr* pidd_)
        {
            using org_ptr = void (WINAPIV*)(struct ULI*, struct ImgDelayDescr*);
            (org_ptr(0x1406765b0L))(this, pidd_);
        };
        void Unlink()
        {
            using org_ptr = void (WINAPIV*)(struct ULI*);
            (org_ptr(0x1406764acL))(this);
        };
        ~ULI()
        {
            using org_ptr = void (WINAPIV*)(struct ULI*);
            (org_ptr(0x1406765ccL))(this);
        };
        void dtor_ULI()
        {
            using org_ptr = void (WINAPIV*)(struct ULI*);
            (org_ptr(0x1406765ccL))(this);
        };
    };
END_ATF_NAMESPACE