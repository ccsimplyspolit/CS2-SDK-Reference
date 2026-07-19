#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

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
        // Size: 0x830
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0798[0x8]; // 0x798
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0x7a0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x7b8            
            bool m_bActivateWhenAtRest; // 0x7d0            
            uint8_t _pad07d1[0x7]; // 0x7d1
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0x7d8            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0x7f0            
            VectorWS m_vOriginalSpawnOrigin; // 0x808            
            QAngle m_vOriginalSpawnAngles; // 0x814            
            // metadata: MNotSaved
            bool m_bPhysStartAsleep; // 0x820            
            uint8_t _pad0821[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0x830);
    };
};
