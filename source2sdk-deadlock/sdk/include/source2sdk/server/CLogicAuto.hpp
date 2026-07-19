#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x598
        // Has VTable
        #pragma pack(push, 1)
        class CLogicAuto : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMapSpawn; // 0x4a0            
            source2sdk::entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x4b8            
            source2sdk::entity2::CEntityIOOutput m_OnNewGame; // 0x4d0            
            source2sdk::entity2::CEntityIOOutput m_OnLoadGame; // 0x4e8            
            source2sdk::entity2::CEntityIOOutput m_OnMapTransition; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnBackgroundMap; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewMap; // 0x530            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewRound; // 0x548            
            source2sdk::entity2::CEntityIOOutput m_OnVREnabled; // 0x560            
            source2sdk::entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x578            
            CUtlSymbolLarge m_globalstate; // 0x590            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicAuto because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicAuto) == 0x598);
    };
};
