// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCmdTarget.hpp"
#include "CPtrArray.hpp"
#include "IUnknown.hpp"


START_ATF_NAMESPACE
    struct  CConnectionPoint : CCmdTarget
    {
        struct  XConnPt : IConnectionPoint
        {
        };
        unsigned __int64 m_nOffset;
        IUnknown *m_pUnkFirstConnection;
        CPtrArray *m_pConnections;
        XConnPt m_xConnPt;
    };
END_ATF_NAMESPACE