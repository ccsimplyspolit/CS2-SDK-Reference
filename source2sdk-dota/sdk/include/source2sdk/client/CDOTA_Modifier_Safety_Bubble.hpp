#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Safety_Bubble : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x1a58            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x1a5c            
            std::int32_t bonus_hp_regen; // 0x1a60            
            std::int32_t shield; // 0x1a64            
            float restore_time; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Safety_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Safety_Bubble) == 0x1a70);
    };
};
