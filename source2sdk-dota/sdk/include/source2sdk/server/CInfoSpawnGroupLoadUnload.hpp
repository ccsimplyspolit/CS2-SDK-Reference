#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x570
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoSpawnGroupLoadUnload : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x498            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4b0            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x4c8            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x4e0            
            CUtlSymbolLarge m_iszSpawnGroupName; // 0x4f8            
            CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x500            
            CUtlSymbolLarge m_iszLandmarkName; // 0x508            
            CUtlString m_sFixedSpawnGroupName; // 0x510            
            float m_flTimeoutInterval; // 0x518            
            bool m_bAutoActivate; // 0x51c            
            // metadata: MNotSaved
            bool m_bUnloadingStarted; // 0x51d            
            // metadata: MNotSaved
            bool m_bQueueActiveSpawnGroupChange; // 0x51e            
            // metadata: MNotSaved
            bool m_bQueueFinishLoading; // 0x51f            
            uint8_t _pad0520[0x50];
            
            // Datamap fields:
            // void InputStartSpawnGroupLoad; // 0x0
            // void InputActivateSpawnGroup; // 0x0
            // void InputStartSpawnGroupUnload; // 0x0
            // CUtlSymbolLarge InputSetSpawnGroup; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoSpawnGroupLoadUnload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoSpawnGroupLoadUnload) == 0x570);
    };
};
