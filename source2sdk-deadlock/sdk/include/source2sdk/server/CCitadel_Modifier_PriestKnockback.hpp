#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x170
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PriestKnockback : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_StartTime; // 0xd0            
            Vector m_vecPushDirection; // 0xd4            
            Vector m_vecFinalPosition; // 0xe0            
            uint8_t _pad00ec[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PriestKnockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PriestKnockback) == 0x170);
    };
};
