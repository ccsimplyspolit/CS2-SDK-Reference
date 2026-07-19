#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_SnareTrap_Slowed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x1a58            
            float damage_interval; // 0x1a5c            
            float move_slow_pct; // 0x1a60            
            float cast_slow_pct; // 0x1a64            
            float effect_radius; // 0x1a68            
            bool m_bEscaped; // 0x1a6c            
            uint8_t _pad1a6d[0x3]; // 0x1a6d
            VectorWS vTetherOrigin; // 0x1a70            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_SnareTrap_Slowed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_SnareTrap_Slowed) == 0x1a80);
    };
};
