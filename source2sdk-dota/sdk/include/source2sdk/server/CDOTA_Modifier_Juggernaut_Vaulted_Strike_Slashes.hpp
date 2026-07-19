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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_Vaulted_Strike_Slashes : public source2sdk::client::CDOTA_Buff
        {
        public:
            float start_offset_distance; // 0x1a58            
            float slash_start_radius; // 0x1a5c            
            float slash_end_radius; // 0x1a60            
            float slash_projectile_speed; // 0x1a64            
            float end_distance; // 0x1a68            
            std::int32_t m_nCurrentSlashes; // 0x1a6c            
            std::int32_t max_slashes; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Vaulted_Strike_Slashes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Juggernaut_Vaulted_Strike_Slashes) == 0x1a78);
    };
};
