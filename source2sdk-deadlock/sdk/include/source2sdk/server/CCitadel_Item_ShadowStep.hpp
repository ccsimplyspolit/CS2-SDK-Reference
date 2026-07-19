#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0x1100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ShadowStep : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x180]; // 0xf78
            source2sdk::client::ParticleIndex_t m_nCastDelayParticleIndex; // 0x10f8            
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0x10fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ShadowStep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ShadowStep) == 0x1100);
    };
};
