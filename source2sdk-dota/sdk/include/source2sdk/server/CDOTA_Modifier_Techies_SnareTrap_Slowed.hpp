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
        class CDOTA_Modifier_Techies_SnareTrap_Slowed : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x4]; // 0x1a58
            float damage; // 0x1a5c            
            float damage_interval; // 0x1a60            
            float move_slow_pct; // 0x1a64            
            float cast_slow_pct; // 0x1a68            
            float effect_radius; // 0x1a6c            
            bool m_bEscaped; // 0x1a70            
            uint8_t _pad1a71[0x3]; // 0x1a71
            VectorWS vTetherOrigin; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_SnareTrap_Slowed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_SnareTrap_Slowed) == 0x1a80);
    };
};
