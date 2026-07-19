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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sniper_TakeAim_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x1a58            
            std::int32_t active_attack_range_bonus; // 0x1a5c            
            std::int32_t does_root; // 0x1a60            
            std::int32_t bonus_armor; // 0x1a64            
            std::int32_t attack_speed; // 0x1a68            
            float bonus_vision; // 0x1a6c            
            float view_restrict; // 0x1a70            
            uint8_t _pad1a74[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_TakeAim_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Sniper_TakeAim_Bonus) == 0x1a88);
    };
};
