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
        // Size: 0x318
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_MysticalPianoAura : public source2sdk::client::CCitadelModifierAura
        {
        public:
            source2sdk::client::ParticleIndex_t m_hRingEffect; // 0x110            
            source2sdk::client::ParticleIndex_t m_hGroundEffect; // 0x114            
            uint8_t _pad0118[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_MysticalPianoAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_MysticalPianoAura) == 0x318);
    };
};
