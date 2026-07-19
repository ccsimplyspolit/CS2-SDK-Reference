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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Plus_HighFiveRequested : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t acknowledge_range; // 0x1a58            
            float think_interval; // 0x1a5c            
            float acknowledged_cooldown; // 0x1a60            
            bool m_bAcknowledged; // 0x1a64            
            bool m_bWithEnemy; // 0x1a65            
            bool m_bFirstThink; // 0x1a66            
            uint8_t _pad1a67[0x1]; // 0x1a67
            std::int32_t high_five_level; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Plus_HighFiveRequested because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Plus_HighFiveRequested) == 0x1a70);
    };
};
