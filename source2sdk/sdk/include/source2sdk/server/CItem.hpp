#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0xa00
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0960[0x8]; // 0x960
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0x968            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x980            
            bool m_bActivateWhenAtRest; // 0x998            
            uint8_t _pad0999[0x7]; // 0x999
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0x9a0            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0x9b8            
            VectorWS m_vOriginalSpawnOrigin; // 0x9d0            
            QAngle m_vOriginalSpawnAngles; // 0x9dc            
            // metadata: MNotSaved
            bool m_bPhysStartAsleep; // 0x9e8            
            uint8_t _pad09e9[0x17];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0xa00);
    };
};
