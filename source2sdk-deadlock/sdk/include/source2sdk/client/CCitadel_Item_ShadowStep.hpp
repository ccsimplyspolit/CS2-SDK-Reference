#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1360
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ShadowStep : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x180]; // 0x11d8
            source2sdk::client::ParticleIndex_t m_nCastDelayParticleIndex; // 0x1358            
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0x135c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ShadowStep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_ShadowStep) == 0x1360);
    };
};
