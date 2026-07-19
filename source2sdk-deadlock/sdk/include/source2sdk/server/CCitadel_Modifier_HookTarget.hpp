#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Link.hpp"

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
        // Size: 0x290
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HookTarget : public source2sdk::server::CCitadel_Modifier_Link
        {
        public:
            float m_flCurrentVerticalSpeed; // 0xf0            
            bool m_bSuccess; // 0xf4            
            bool m_bSameTeam; // 0xf5            
            bool m_bPlayedApproachingWhoosh; // 0xf6            
            uint8_t _pad00f7[0x1]; // 0xf7
            float m_flInitialTravelDistance; // 0xf8            
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xfc            
            Vector m_vLastPos; // 0x100            
            uint8_t _pad010c[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HookTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HookTarget) == 0x290);
    };
};
