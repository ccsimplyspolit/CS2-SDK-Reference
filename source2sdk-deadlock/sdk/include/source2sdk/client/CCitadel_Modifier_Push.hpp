#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Push : public source2sdk::client::CCitadelModifier
        {
        public:
            Vector m_vPushForce; // 0xc0            
            float m_flDecayRate; // 0xcc            
            source2sdk::entity2::GameTime_t m_TimeDestroy; // 0xd0            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Push because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Push) == 0xd8);
    };
};
