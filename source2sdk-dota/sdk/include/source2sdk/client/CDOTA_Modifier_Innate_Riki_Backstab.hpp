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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Innate_Riki_Backstab : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t backstab_angle; // 0x1a58            
            float damage_multiplier; // 0x1a5c            
            float bonus_xp_kill; // 0x1a60            
            float bonus_xp_assist; // 0x1a64            
            float bonus_xp_assist_other; // 0x1a68            
            float ally_multiplier; // 0x1a6c            
            bool m_bBackstab; // 0x1a70            
            uint8_t _pad1a71[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Innate_Riki_Backstab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Innate_Riki_Backstab) == 0x1a78);
    };
};
