#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifierAura_Cone.hpp"

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
        // Size: 0x320
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public source2sdk::server::CCitadelModifierAura_Cone
        {
        public:
            QAngle m_playerAngles; // 0x108            
            bool m_bHasAnyTargets; // 0x114            
            uint8_t _pad0115[0x3]; // 0x115
            source2sdk::entity2::GameTime_t m_flLastStackTime; // 0x118            
            source2sdk::client::ParticleIndex_t m_ConeParticle; // 0x11c            
            uint8_t _pad0120[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Fathom_ScaldingSpray_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Fathom_ScaldingSpray_Aura) == 0x320);
    };
};
