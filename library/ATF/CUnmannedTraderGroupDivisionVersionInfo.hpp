// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std__vector.hpp"


START_ATF_NAMESPACE
    struct CUnmannedTraderGroupDivisionVersionInfo
    {
        int m_iType;
        std::vector<unsigned long> m_vecuiVersion;
    public:
        CUnmannedTraderGroupDivisionVersionInfo(struct CUnmannedTraderGroupDivisionVersionInfo* lhs)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, struct CUnmannedTraderGroupDivisionVersionInfo*);
            (org_ptr(0x140399520L))(this, lhs);
        };
        void ctor_CUnmannedTraderGroupDivisionVersionInfo(struct CUnmannedTraderGroupDivisionVersionInfo* lhs)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, struct CUnmannedTraderGroupDivisionVersionInfo*);
            (org_ptr(0x140399520L))(this, lhs);
        };
        CUnmannedTraderGroupDivisionVersionInfo(int iType, unsigned int uiMaxCnt)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, int, unsigned int);
            (org_ptr(0x140397da0L))(this, iType, uiMaxCnt);
        };
        void ctor_CUnmannedTraderGroupDivisionVersionInfo(int iType, unsigned int uiMaxCnt)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, int, unsigned int);
            (org_ptr(0x140397da0L))(this, iType, uiMaxCnt);
        };
        bool GetVersion(char byClass, unsigned int* dwVer)
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, char, unsigned int*);
            return (org_ptr(0x140360990L))(this, byClass, dwVer);
        };
        bool IncreaseVersion(char byClass)
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, char);
            return (org_ptr(0x14036be20L))(this, byClass);
        };
        bool IsEmpty()
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*);
            return (org_ptr(0x140397e20L))(this);
        };
        ~CUnmannedTraderGroupDivisionVersionInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*);
            (org_ptr(0x14036d070L))(this);
        };
        void dtor_CUnmannedTraderGroupDivisionVersionInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*);
            (org_ptr(0x14036d070L))(this);
        };
    };
END_ATF_NAMESPACE