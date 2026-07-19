#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAura.hpp"
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
        // Size: 0x1a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bull_Heal_Aura : public source2sdk::client::CCitadelModifierAura
        {
        public:
            QAngle m_playerAngles; // 0x110            
            source2sdk::client::ParticleIndex_t m_AuraParticle; // 0x11c            
            uint8_t _pad0120[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Heal_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Bull_Heal_Aura) == 0x1a0);
    };
};
