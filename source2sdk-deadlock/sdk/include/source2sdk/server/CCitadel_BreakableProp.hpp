#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xaa0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkVarNames "int m_nHitIndex"
        #pragma pack(push, 1)
        class CCitadel_BreakableProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nHitIndex; // 0xa90            
            uint8_t _pad0a94[0x4]; // 0xa94
            float m_flOverrideInitialSpawnTime; // 0xa98            
            float m_flOverrideRespawnTime; // 0xa9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakableProp) == 0xaa0);
    };
};
