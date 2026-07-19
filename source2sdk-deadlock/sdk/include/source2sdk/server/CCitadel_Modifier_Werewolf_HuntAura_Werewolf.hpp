#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x198
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Werewolf_HuntAura_Werewolf : public source2sdk::server::CCitadelModifierAura_Cone
        {
        public:
            QAngle m_playerAngles; // 0x108            
            source2sdk::client::ParticleIndex_t m_ConeParticle; // 0x114            
            uint8_t _pad0118[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Werewolf_HuntAura_Werewolf because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Werewolf_HuntAura_Werewolf) == 0x198);
    };
};
