// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CUnmannedTraderTaxRateManager.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CUnmannedTraderTaxRateManagerctor_CUnmannedTraderTaxRateManager2_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        using CUnmannedTraderTaxRateManagerctor_CUnmannedTraderTaxRateManager2_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, CUnmannedTraderTaxRateManagerctor_CUnmannedTraderTaxRateManager2_ptr);
        using CUnmannedTraderTaxRateManagerChangeOwner4_ptr = int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, struct CGuild*);
        using CUnmannedTraderTaxRateManagerChangeOwner4_clbk = int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, struct CGuild*, CUnmannedTraderTaxRateManagerChangeOwner4_ptr);
        using CUnmannedTraderTaxRateManagerCheatChangeTaxRate6_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, char*);
        using CUnmannedTraderTaxRateManagerCheatChangeTaxRate6_clbk = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, char*, CUnmannedTraderTaxRateManagerCheatChangeTaxRate6_ptr);
        using CUnmannedTraderTaxRateManagerCleanUp8_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        using CUnmannedTraderTaxRateManagerCleanUp8_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, CUnmannedTraderTaxRateManagerCleanUp8_ptr);
        using CUnmannedTraderTaxRateManagerCompleteCreate10_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, uint16_t);
        using CUnmannedTraderTaxRateManagerCompleteCreate10_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, uint16_t, CUnmannedTraderTaxRateManagerCompleteCreate10_ptr);
        using CUnmannedTraderTaxRateManagerDQSCompleteInAtradTaxMoney12_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, char*);
        using CUnmannedTraderTaxRateManagerDQSCompleteInAtradTaxMoney12_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, char*, CUnmannedTraderTaxRateManagerDQSCompleteInAtradTaxMoney12_ptr);
        using CUnmannedTraderTaxRateManagerDestroy14_ptr = void (WINAPIV*)();
        using CUnmannedTraderTaxRateManagerDestroy14_clbk = void (WINAPIV*)(CUnmannedTraderTaxRateManagerDestroy14_ptr);
        using CUnmannedTraderTaxRateManagerGetSuggestedTime16_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char);
        using CUnmannedTraderTaxRateManagerGetSuggestedTime16_clbk = unsigned int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, CUnmannedTraderTaxRateManagerGetSuggestedTime16_ptr);
        using CUnmannedTraderTaxRateManagerGetTax18_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, unsigned int);
        using CUnmannedTraderTaxRateManagerGetTax18_clbk = unsigned int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, unsigned int, CUnmannedTraderTaxRateManagerGetTax18_ptr);
        using CUnmannedTraderTaxRateManagerGetTaxRate20_ptr = float (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char);
        using CUnmannedTraderTaxRateManagerGetTaxRate20_clbk = float (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, CUnmannedTraderTaxRateManagerGetTaxRate20_ptr);
        using CUnmannedTraderTaxRateManagerInit22_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, struct CLogFile*);
        using CUnmannedTraderTaxRateManagerInit22_clbk = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, struct CLogFile*, CUnmannedTraderTaxRateManagerInit22_ptr);
        using CUnmannedTraderTaxRateManagerInstance24_ptr = struct CUnmannedTraderTaxRateManager* (WINAPIV*)();
        using CUnmannedTraderTaxRateManagerInstance24_clbk = struct CUnmannedTraderTaxRateManager* (WINAPIV*)(CUnmannedTraderTaxRateManagerInstance24_ptr);
        using CUnmannedTraderTaxRateManagerIsOwnerGuild26_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int);
        using CUnmannedTraderTaxRateManagerIsOwnerGuild26_clbk = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, CUnmannedTraderTaxRateManagerIsOwnerGuild26_ptr);
        using CUnmannedTraderTaxRateManagerLoad28_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        using CUnmannedTraderTaxRateManagerLoad28_clbk = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, CUnmannedTraderTaxRateManagerLoad28_ptr);
        using CUnmannedTraderTaxRateManagerLoop30_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        using CUnmannedTraderTaxRateManagerLoop30_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, CUnmannedTraderTaxRateManagerLoop30_ptr);
        using CUnmannedTraderTaxRateManagerSendTaxRate32_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, int, char);
        using CUnmannedTraderTaxRateManagerSendTaxRate32_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, int, char, CUnmannedTraderTaxRateManagerSendTaxRate32_ptr);
        using CUnmannedTraderTaxRateManagerSendTaxRatePatriarch34_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, int, char);
        using CUnmannedTraderTaxRateManagerSendTaxRatePatriarch34_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, int, char, CUnmannedTraderTaxRateManagerSendTaxRatePatriarch34_ptr);
        using CUnmannedTraderTaxRateManagerSetGuildMaintainMoney36_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, unsigned int);
        using CUnmannedTraderTaxRateManagerSetGuildMaintainMoney36_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, unsigned int, CUnmannedTraderTaxRateManagerSetGuildMaintainMoney36_ptr);
        using CUnmannedTraderTaxRateManagerSetPatriarchTaxMoney38_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int);
        using CUnmannedTraderTaxRateManagerSetPatriarchTaxMoney38_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, CUnmannedTraderTaxRateManagerSetPatriarchTaxMoney38_ptr);
        using CUnmannedTraderTaxRateManagerSetSuggested40_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, char, unsigned int, char*, unsigned int);
        using CUnmannedTraderTaxRateManagerSetSuggested40_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, char, unsigned int, char*, unsigned int, CUnmannedTraderTaxRateManagerSetSuggested40_ptr);
        using CUnmannedTraderTaxRateManagerdtor_CUnmannedTraderTaxRateManager44_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        using CUnmannedTraderTaxRateManagerdtor_CUnmannedTraderTaxRateManager44_clbk = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, CUnmannedTraderTaxRateManagerdtor_CUnmannedTraderTaxRateManager44_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE