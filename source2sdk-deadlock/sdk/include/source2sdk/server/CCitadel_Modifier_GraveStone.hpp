#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"

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
        // Size: 0x7b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_GraveStone : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0108[0x18]; // 0x108
            source2sdk::client::ParticleIndex_t m_nParticleIndexAura; // 0x120            
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0x124            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x128            
            uint8_t _pad012c[0x684];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_GraveStone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_GraveStone) == 0x7b0);
    };
};
