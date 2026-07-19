#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x3e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Gunslinger_DemonCarbine : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_nBulletCount; // 0xd0            
            float m_flElapsedPct; // 0xd4            
            source2sdk::client::ParticleIndex_t m_nFullyChargedParticle; // 0xd8            
            uint8_t _pad00dc[0x304];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Gunslinger_DemonCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Gunslinger_DemonCarbine) == 0x3e0);
    };
};
