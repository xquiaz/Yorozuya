// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CComCriticalSection.hpp"
#include "ATL__CSimpleArray.hpp"
#include "ATL___AtlCreateWndData.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct _ATL_WIN_MODULE70
        {
            unsigned int cbSize;
            CComCriticalSection m_csWindowCreate;
            _AtlCreateWndData *m_pCreateWndList;
            CSimpleArray<unsigned short,CSimpleArrayEqualHelper<unsigned short> > m_rgWindowClassAtoms;
        };
    }; // end namespace ATL
END_ATF_NAMESPACE