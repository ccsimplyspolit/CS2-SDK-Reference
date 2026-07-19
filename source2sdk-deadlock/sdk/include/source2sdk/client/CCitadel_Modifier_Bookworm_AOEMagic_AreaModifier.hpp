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
        // Size: 0x448
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x380]; // 0xc0
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0x440            
            uint8_t _pad0444[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier) == 0x448);
    };
};
