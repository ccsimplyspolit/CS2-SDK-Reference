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
        class CDOTA_Modifier_Chen_HolyPersuasion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_min; // 0x1a58            
            std::int32_t damage_bonus; // 0x1a5c            
            std::int32_t movement_speed_bonus; // 0x1a60            
            float unsummon_time; // 0x1a64            
            bool m_bCanBeUnsummoned; // 0x1a68            
            uint8_t _pad1a69[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Chen_HolyPersuasion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Chen_HolyPersuasion) == 0x1a70);
    };
};
