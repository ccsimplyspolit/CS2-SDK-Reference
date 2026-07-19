#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Huskar_Inner_Fire_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDirection; // 0x1a58            
            float m_flEndTime; // 0x1a64            
            float m_flCurTime; // 0x1a68            
            float knockback_distance; // 0x1a6c            
            float knockback_duration; // 0x1a70            
            float min_knockback_distance; // 0x1a74            
            float min_knockback_duration; // 0x1a78            
            float effective_distance; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Inner_Fire_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Huskar_Inner_Fire_Knockback) == 0x1a80);
    };
};
