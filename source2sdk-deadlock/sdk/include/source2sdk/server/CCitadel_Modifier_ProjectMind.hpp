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
        // Size: 0x288
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ProjectMind : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_particleStart; // 0xd0            
            source2sdk::client::ParticleIndex_t m_particleEnd; // 0xd4            
            source2sdk::client::ParticleIndex_t m_particleTrail; // 0xd8            
            VectorWS m_vecEndLocation; // 0xdc            
            VectorWS m_vecStartPosition; // 0xe8            
            float m_flStartDelay; // 0xf4            
            Vector m_vecApplyOffset; // 0xf8            
            uint8_t _pad0104[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ProjectMind because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ProjectMind) == 0x288);
    };
};
