#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"

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
        // Size: 0x578
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_LashGrappleEnemy_Debuff : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            Vector m_vCrashDir; // 0xd8            
            Vector m_vLiftTarget; // 0xe4            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xf0            
            bool m_bCrashingDown; // 0xf4            
            uint8_t _pad00f5[0x483];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_LashGrappleEnemy_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_LashGrappleEnemy_Debuff) == 0x578);
    };
};
