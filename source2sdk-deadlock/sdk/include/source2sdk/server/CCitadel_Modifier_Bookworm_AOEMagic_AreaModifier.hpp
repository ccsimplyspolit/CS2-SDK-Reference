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
        // Size: 0x460
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_hAOEWarningParticle; // 0xd0            
            uint8_t _pad00d4[0x384]; // 0xd4
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0x458            
            uint8_t _pad045c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier) == 0x460);
    };
};
