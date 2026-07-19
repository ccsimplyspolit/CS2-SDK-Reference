#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CBaseNPCMaker_ThreeStateDist_t.hpp"
#include "source2sdk/server/CBaseNPCMaker_VisibilityCriterion_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CNPCSpawnDestination;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x588
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBaseNPCMaker : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_nMaxNumNPCs; // 0x4a0            
            float m_flSpawnFrequency; // 0x4a4            
            float m_flRetryFrequency; // 0x4a8            
            std::int32_t m_nHullCheckMode; // 0x4ac            
            // m_OnSpawnNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnSpawnNPC;
            char m_OnSpawnNPC[0x20]; // 0x4b0            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnedNPCDied; // 0x4d0            
            source2sdk::entity2::CEntityIOOutput m_OnAllSpawned; // 0x4e8            
            source2sdk::entity2::CEntityIOOutput m_OnAllSpawnedDead; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnAllLiveChildrenDead; // 0x518            
            std::int32_t m_nLiveChildren; // 0x530            
            std::int32_t m_nMaxLiveChildren; // 0x534            
            std::int32_t m_nMinSpawnDistance; // 0x538            
            std::int32_t m_nSpawnThreshold; // 0x53c            
            std::int32_t m_nBatchCount; // 0x540            
            float m_flRadius; // 0x544            
            bool m_bDisabled; // 0x548            
            bool m_bSpawning; // 0x549            
            bool m_bZeroPitchAndRoll; // 0x54a            
            uint8_t _pad054b[0x1]; // 0x54b
            // m_hIgnoreEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIgnoreEntity;
            char m_hIgnoreEntity[0x4]; // 0x54c            
            CUtlSymbolLarge m_iszIgnoreEnt; // 0x550            
            CUtlSymbolLarge m_iszDestinationGroup; // 0x558            
            // m_hSpawnEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CNPCSpawnDestination> m_hSpawnEntity;
            char m_hSpawnEntity[0x4]; // 0x560            
            // m_hSpawnedNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hSpawnedNPC;
            char m_hSpawnedNPC[0x4]; // 0x564            
            std::int32_t m_nCurrentBatchCount; // 0x568            
            std::int32_t m_nNumSpawnDestinations; // 0x56c            
            std::int32_t m_nNumValidDestinations; // 0x570            
            source2sdk::server::CBaseNPCMaker_VisibilityCriterion_t m_CriterionVisibility; // 0x574            
            source2sdk::server::CBaseNPCMaker_ThreeStateDist_t m_CriterionDistance; // 0x578            
            uint8_t _pad057c[0xc];
            
            // Datamap fields:
            // void InputSpawn; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // int32_t InputSetMaxChildren; // 0x0
            // int32_t InputAddMaxChildren; // 0x0
            // int32_t InputSetMaxLiveChildren; // 0x0
            // float InputSetSpawnFrequency; // 0x0
            // void InputSpawnInRadius; // 0x0
            // void InputSpawnInLine; // 0x0
            // int32_t InputSpawnMultiple; // 0x0
            // CUtlSymbolLarge InputChangeDestinationGroup; // 0x0
            // int32_t InputSetMinimumSpawnDistance; // 0x0
            // CUtlSymbolLarge InputSetSpawnEntity; // 0x0
            // bool InputSetBatchCount; // 0x0
            // void InputEnableInfinite; // 0x0
            // bool InputDisableInfinite; // 0x0
            // void CBaseNPCMakerMakerThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseNPCMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseNPCMaker) == 0x588);
    };
};
