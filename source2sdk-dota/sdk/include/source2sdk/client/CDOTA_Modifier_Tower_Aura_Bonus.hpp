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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tower_Aura_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_armor; // 0x1a58            
            float hp_regen; // 0x1a5c            
            bool m_bOverrideArmor; // 0x1a60            
            bool m_bOverrideRegen; // 0x1a61            
            bool m_bSentFirstRefresh; // 0x1a62            
            uint8_t _pad1a63[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tower_Aura_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tower_Aura_Bonus) == 0x1a68);
    };
};
