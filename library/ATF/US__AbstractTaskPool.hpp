// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <US__CCircularFIFO.hpp>


START_ATF_NAMESPACE
    namespace US
    {
        #pragma pack(push, 8)
        template<typename _Ty, typename _Q>
        struct AbstractTaskPool
        {
            struct AbstractTaskPoolVtbl
            {
                void *(WINAPIV *__vecDelDtor)(AbstractTaskPool<_Ty, _Q> *_this, unsigned int);
                bool (WINAPIV *ReAllocPool)(AbstractTaskPool<_Ty, _Q> *_this, unsigned int);
                void (WINAPIV *FreePool)(AbstractTaskPool<_Ty, _Q> *_this);
                unsigned int (WINAPIV *GetTaskIndex)(AbstractTaskPool<_Ty, _Q> *_this, _Ty *);
                _Ty *(WINAPIV *GetAtPtr)(AbstractTaskPool<_Ty, _Q> *_this, unsigned int);
            };

            struct Default_Funtor
            {
                struct Default_FuntorVtbl
                {
                    void (WINAPIV *operator())(struct Default_Funtor *_this, _Ty *);
                };

                Default_FuntorVtbl *vfptr;
            };

            struct AbstractTaskPoolVtbl *vfptr;
            _Q m_EmptyIndexQueue;
            _Q m_UsedIndexQueue;
            _Q m_CompleteIndexQueue;
            unsigned int m_dwAllocSize;
        };
        #pragma pack(pop)
    }; // end namespace US
END_ATF_NAMESPACE
