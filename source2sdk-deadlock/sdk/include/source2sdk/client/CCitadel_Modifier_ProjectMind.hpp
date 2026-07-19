#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x278
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ProjectMind : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_particleStart; // 0xc0            
            source2sdk::client::ParticleIndex_t m_particleEnd; // 0xc4            
            source2sdk::client::ParticleIndex_t m_particleTrail; // 0xc8            
            VectorWS m_vecEndLocation; // 0xcc            
            VectorWS m_vecStartPosition; // 0xd8            
            float m_flStartDelay; // 0xe4            
            Vector m_vecApplyOffset; // 0xe8            
            uint8_t _pad00f4[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ProjectMind because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_ProjectMind) == 0x278);
    };
};
