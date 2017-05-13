// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAtlTraceCategory.hpp"
#include "CAtlTraceModule.hpp"
#include "CAtlTraceProcess.hpp"
#include "CTraceSnapshot.hpp"
#include "HINSTANCE__.hpp"


START_ATF_NAMESPACE
    struct CAtlAllocator
    {
        CTraceSnapshot m_snapshot;
        bool m_bSnapshot;
        CAtlTraceProcess *m_pProcess;
        unsigned int m_dwPageSize;
        void *m_hMap;
        bool m_bValid;
        char *m_pBufferStart;
    public:
        int AddCategory(int iModule, wchar_t* szCategoryName)
        {
            using org_ptr = int (WINAPIV*)(struct CAtlAllocator*, int, wchar_t*);
            return (org_ptr(0x140674c90L))(this, iModule, szCategoryName);
        };
        int AddModule(struct HINSTANCE__* hInst)
        {
            using org_ptr = int (WINAPIV*)(struct CAtlAllocator*, struct HINSTANCE__*);
            return (org_ptr(0x140674a30L))(this, hInst);
        };
        CAtlAllocator()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x14066dae0L))(this);
        };
        void ctor_CAtlAllocator()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x14066dae0L))(this);
        };
        void CleanUp()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x140675040L))(this);
        };
        void Close(bool bForceUnmap)
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*, bool);
            (org_ptr(0x140674620L))(this, bForceUnmap);
        };
        bool FindModule(wchar_t* pszModulePath, unsigned int* pnModule)
        {
            using org_ptr = bool (WINAPIV*)(struct CAtlAllocator*, wchar_t*, unsigned int*);
            return (org_ptr(0x1406749a0L))(this, pszModulePath, pnModule);
        };
        struct CAtlTraceCategory* GetCategory(int iCategory)
        {
            using org_ptr = struct CAtlTraceCategory* (WINAPIV*)(struct CAtlAllocator*, int);
            return (org_ptr(0x140674770L))(this, iCategory);
        };
        int GetCategoryCount(struct CAtlTraceModule* rModule)
        {
            using org_ptr = int (WINAPIV*)(struct CAtlAllocator*, struct CAtlTraceModule*);
            return (org_ptr(0x1406748d0L))(this, rModule);
        };
        int GetCategoryCount(int iModule)
        {
            using org_ptr = int (WINAPIV*)(struct CAtlAllocator*, int);
            return (org_ptr(0x140674840L))(this, iModule);
        };
        struct CAtlTraceModule* GetModule(int iModule)
        {
            using org_ptr = struct CAtlTraceModule* (WINAPIV*)(struct CAtlAllocator*, int);
            return (org_ptr(0x1406746b0L))(this, iModule);
        };
        int GetModuleCount()
        {
            using org_ptr = int (WINAPIV*)(struct CAtlAllocator*);
            return (org_ptr(0x140674940L))(this);
        };
        struct CAtlTraceProcess* GetProcess()
        {
            using org_ptr = struct CAtlTraceProcess* (WINAPIV*)(struct CAtlAllocator*);
            return (org_ptr(0x14066ffa0L))(this);
        };
        bool Init(char* pszFileName, unsigned int dwMaxSize)
        {
            using org_ptr = bool (WINAPIV*)(struct CAtlAllocator*, char*, unsigned int);
            return (org_ptr(0x140673f10L))(this, pszFileName, dwMaxSize);
        };
        bool Open(char* pszFileName)
        {
            using org_ptr = bool (WINAPIV*)(struct CAtlAllocator*, char*);
            return (org_ptr(0x140674460L))(this, pszFileName);
        };
        void ReleaseSnapshot()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x1406752d0L))(this);
        };
        bool RemoveModule(int iModule)
        {
            using org_ptr = bool (WINAPIV*)(struct CAtlAllocator*, int);
            return (org_ptr(0x140674f70L))(this, iModule);
        };
        void TakeSnapshot()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x140675060L))(this);
        };
        ~CAtlAllocator()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x14066de20L))(this);
        };
        void dtor_CAtlAllocator()
        {
            using org_ptr = void (WINAPIV*)(struct CAtlAllocator*);
            (org_ptr(0x14066de20L))(this);
        };
    };
END_ATF_NAMESPACE