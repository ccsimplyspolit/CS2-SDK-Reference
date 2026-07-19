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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark : public source2sdk::client::CDOTA_Buff
        {
        public:
            float physical_damage_reduction; // 0x1a58            
            float physical_damage_reduction_side; // 0x1a5c            
            float forward_angle; // 0x1a60            
            float side_angle; // 0x1a64            
            uint8_t _pad1a68[0x18]; // 0x1a68
            float m_flRecentDamage; // 0x1a80            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_Bulwark) == 0x1a88);
    };
};
