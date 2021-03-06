// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapData.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMapDatactor_CMapData2_ptr = void (WINAPIV*)(struct CMapData*);
        using CMapDatactor_CMapData2_clbk = void (WINAPIV*)(struct CMapData*, CMapDatactor_CMapData2_ptr);
        using CMapDataCheckCenterPosDummy4_ptr = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*);
        using CMapDataCheckCenterPosDummy4_clbk = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*, CMapDataCheckCenterPosDummy4_ptr);
        using CMapDataConvertLocal6_ptr = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*);
        using CMapDataConvertLocal6_clbk = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*, CMapDataConvertLocal6_ptr);
        using CMapDataConvertLocalToWorldDummy8_ptr = bool (WINAPIV*)(struct CMapData*, struct CDummyPosTable*, bool);
        using CMapDataConvertLocalToWorldDummy8_clbk = bool (WINAPIV*)(struct CMapData*, struct CDummyPosTable*, bool, CMapDataConvertLocalToWorldDummy8_ptr);
        using CMapDataEnterMap10_ptr = void (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int);
        using CMapDataEnterMap10_clbk = void (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int, CMapDataEnterMap10_ptr);
        using CMapDataExitMap12_ptr = void (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int);
        using CMapDataExitMap12_clbk = void (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int, CMapDataExitMap12_ptr);
        using CMapDataGetBspInfo14_ptr = struct _bsp_info* (WINAPIV*)(struct CMapData*);
        using CMapDataGetBspInfo14_clbk = struct _bsp_info* (WINAPIV*)(struct CMapData*, CMapDataGetBspInfo14_ptr);
        using CMapDataGetDummyPostion16_ptr = struct _dummy_position* (WINAPIV*)(struct CMapData*, char*);
        using CMapDataGetDummyPostion16_clbk = struct _dummy_position* (WINAPIV*)(struct CMapData*, char*, CMapDataGetDummyPostion16_ptr);
        using CMapDataGetLevelLimit18_ptr = int (WINAPIV*)(struct CMapData*);
        using CMapDataGetLevelLimit18_clbk = int (WINAPIV*)(struct CMapData*, CMapDataGetLevelLimit18_ptr);
        using CMapDataGetLinkPortal20_ptr = struct _portal_dummy* (WINAPIV*)(struct CMapData*, char*);
        using CMapDataGetLinkPortal20_clbk = struct _portal_dummy* (WINAPIV*)(struct CMapData*, char*, CMapDataGetLinkPortal20_ptr);
        using CMapDataGetMapCode22_ptr = char (WINAPIV*)(struct CMapData*);
        using CMapDataGetMapCode22_clbk = char (WINAPIV*)(struct CMapData*, CMapDataGetMapCode22_ptr);
        using CMapDataGetPortal24_ptr = struct _portal_dummy* (WINAPIV*)(struct CMapData*, char*);
        using CMapDataGetPortal24_clbk = struct _portal_dummy* (WINAPIV*)(struct CMapData*, char*, CMapDataGetPortal24_ptr);
        using CMapDataGetPortal26_ptr = struct _portal_dummy* (WINAPIV*)(struct CMapData*, int);
        using CMapDataGetPortal26_clbk = struct _portal_dummy* (WINAPIV*)(struct CMapData*, int, CMapDataGetPortal26_ptr);
        using CMapDataGetPortalInx28_ptr = int (WINAPIV*)(struct CMapData*, char*);
        using CMapDataGetPortalInx28_clbk = int (WINAPIV*)(struct CMapData*, char*, CMapDataGetPortalInx28_ptr);
        using CMapDataGetRaceTown30_ptr = char (WINAPIV*)(struct CMapData*, float*, char);
        using CMapDataGetRaceTown30_clbk = char (WINAPIV*)(struct CMapData*, float*, char, CMapDataGetRaceTown30_ptr);
        using CMapDataGetRandPosInDummy32_ptr = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*, float*, bool);
        using CMapDataGetRandPosInDummy32_clbk = bool (WINAPIV*)(struct CMapData*, struct _dummy_position*, float*, bool, CMapDataGetRandPosInDummy32_ptr);
        using CMapDataGetRandPosInRange34_ptr = bool (WINAPIV*)(struct CMapData*, float*, int, float*);
        using CMapDataGetRandPosInRange34_clbk = bool (WINAPIV*)(struct CMapData*, float*, int, float*, CMapDataGetRandPosInRange34_ptr);
        using CMapDataGetRandPosVirtualDum36_ptr = bool (WINAPIV*)(struct CMapData*, float*, int, float*);
        using CMapDataGetRandPosVirtualDum36_clbk = bool (WINAPIV*)(struct CMapData*, float*, int, float*, CMapDataGetRandPosVirtualDum36_ptr);
        using CMapDataGetRandPosVirtualDumExcludeStdRange38_ptr = bool (WINAPIV*)(struct CMapData*, float*, int, int, float*);
        using CMapDataGetRandPosVirtualDumExcludeStdRange38_clbk = bool (WINAPIV*)(struct CMapData*, float*, int, int, float*, CMapDataGetRandPosVirtualDumExcludeStdRange38_ptr);
        using CMapDataGetRectInRadius40_ptr = void (WINAPIV*)(struct CMapData*, struct _pnt_rect*, int, int);
        using CMapDataGetRectInRadius40_clbk = void (WINAPIV*)(struct CMapData*, struct _pnt_rect*, int, int, CMapDataGetRectInRadius40_ptr);
        using CMapDataGetResDummySector42_ptr = int (WINAPIV*)(struct CMapData*, int, float*);
        using CMapDataGetResDummySector42_clbk = int (WINAPIV*)(struct CMapData*, int, float*, CMapDataGetResDummySector42_ptr);
        using CMapDataGetSecInfo44_ptr = struct _sec_info* (WINAPIV*)(struct CMapData*);
        using CMapDataGetSecInfo44_clbk = struct _sec_info* (WINAPIV*)(struct CMapData*, CMapDataGetSecInfo44_ptr);
        using CMapDataGetSectorIndex46_ptr = int (WINAPIV*)(struct CMapData*, float*);
        using CMapDataGetSectorIndex46_clbk = int (WINAPIV*)(struct CMapData*, float*, CMapDataGetSectorIndex46_ptr);
        using CMapDataGetSectorListObj48_ptr = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int);
        using CMapDataGetSectorListObj48_clbk = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int, CMapDataGetSectorListObj48_ptr);
        using CMapDataGetSectorListPlayer50_ptr = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int);
        using CMapDataGetSectorListPlayer50_clbk = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int, CMapDataGetSectorListPlayer50_ptr);
        using CMapDataGetSectorListTower52_ptr = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int);
        using CMapDataGetSectorListTower52_clbk = struct CObjectList* (WINAPIV*)(struct CMapData*, uint16_t, unsigned int, CMapDataGetSectorListTower52_ptr);
        using CMapDataGetSectorNumByLayerIndex54_ptr = int (WINAPIV*)(struct CMapData*, uint16_t);
        using CMapDataGetSectorNumByLayerIndex54_clbk = int (WINAPIV*)(struct CMapData*, uint16_t, CMapDataGetSectorNumByLayerIndex54_ptr);
        using CMapDataInit56_ptr = void (WINAPIV*)(struct CMapData*, struct _map_fld*);
        using CMapDataInit56_clbk = void (WINAPIV*)(struct CMapData*, struct _map_fld*, CMapDataInit56_ptr);
        using CMapDataIsMapIn58_ptr = bool (WINAPIV*)(struct CMapData*, float*);
        using CMapDataIsMapIn58_clbk = bool (WINAPIV*)(struct CMapData*, float*, CMapDataIsMapIn58_ptr);
        using CMapDataLoadDummy60_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _dummy_position*);
        using CMapDataLoadDummy60_clbk = bool (WINAPIV*)(struct CMapData*, char*, struct _dummy_position*, CMapDataLoadDummy60_ptr);
        using CMapDataLoadHolySystemDummy62_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _dummy_position*);
        using CMapDataLoadHolySystemDummy62_clbk = bool (WINAPIV*)(struct CMapData*, char*, struct _dummy_position*, CMapDataLoadHolySystemDummy62_ptr);
        using CMapDataOnLoop64_ptr = void (WINAPIV*)(struct CMapData*);
        using CMapDataOnLoop64_clbk = void (WINAPIV*)(struct CMapData*, CMapDataOnLoop64_ptr);
        using CMapDataOpenMap66_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _map_fld*, bool);
        using CMapDataOpenMap66_clbk = bool (WINAPIV*)(struct CMapData*, char*, struct _map_fld*, bool, CMapDataOpenMap66_ptr);
        using CMapDataUpdateSecterList68_ptr = bool (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int, unsigned int);
        using CMapDataUpdateSecterList68_clbk = bool (WINAPIV*)(struct CMapData*, struct CGameObject*, unsigned int, unsigned int, CMapDataUpdateSecterList68_ptr);
        using CMapData_LoadBind70_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadBind70_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadBind70_ptr);
        using CMapData_LoadBspSec72_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadBspSec72_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadBspSec72_ptr);
        using CMapData_LoadMonBlk74_ptr = bool (WINAPIV*)(struct CMapData*, char*, struct _map_fld*);
        using CMapData_LoadMonBlk74_clbk = bool (WINAPIV*)(struct CMapData*, char*, struct _map_fld*, CMapData_LoadMonBlk74_ptr);
        using CMapData_LoadPortal76_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadPortal76_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadPortal76_ptr);
        using CMapData_LoadQuest78_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadQuest78_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadQuest78_ptr);
        using CMapData_LoadResource80_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadResource80_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadResource80_ptr);
        using CMapData_LoadSafe82_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadSafe82_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadSafe82_ptr);
        using CMapData_LoadStart84_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadStart84_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadStart84_ptr);
        using CMapData_LoadStoreDummy86_ptr = bool (WINAPIV*)(struct CMapData*, char*);
        using CMapData_LoadStoreDummy86_clbk = bool (WINAPIV*)(struct CMapData*, char*, CMapData_LoadStoreDummy86_ptr);
        
        using CMapDatadtor_CMapData92_ptr = void (WINAPIV*)(struct CMapData*);
        using CMapDatadtor_CMapData92_clbk = void (WINAPIV*)(struct CMapData*, CMapDatadtor_CMapData92_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
