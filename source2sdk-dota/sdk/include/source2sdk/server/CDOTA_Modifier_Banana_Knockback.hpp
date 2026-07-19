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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Banana_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vCenter; // 0x1a58            
            std::int32_t knockback_distance; // 0x1a64            
            std::int32_t knockback_height; // 0x1a68            
            float knockback_duration; // 0x1a6c            
            Vector m_vHorizOffset; // 0x1a70            
            VectorWS m_vStartPosition; // 0x1a7c            
            Vector m_vDir; // 0x1a88            
            float m_fCurrentTimeHoriz; // 0x1a94            
            float m_fCurrentTimeVert; // 0x1a98            
            bool m_bShouldStun; // 0x1a9c            
            uint8_t _pad1a9d[0x3]; // 0x1a9d
            float flTimeSinceChange; // 0x1aa0            
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Banana_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Banana_Knockback) == 0x1aa8);
    };
};
