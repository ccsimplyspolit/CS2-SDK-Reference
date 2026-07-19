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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Falcon_Blade : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x1a58            
            std::int32_t bonus_damage_per_kill; // 0x1a5c            
            std::int32_t bonus_damage_per_assist; // 0x1a60            
            std::int32_t bonus_health; // 0x1a64            
            std::int32_t max_damage; // 0x1a68            
            float bonus_mana_regen; // 0x1a6c            
            std::int32_t stack_limit; // 0x1a70            
            float stack_duration; // 0x1a74            
            source2sdk::entity2::GameTime_t m_flStackDieTime; // 0x1a78            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Falcon_Blade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Falcon_Blade) == 0x1a80);
    };
};
