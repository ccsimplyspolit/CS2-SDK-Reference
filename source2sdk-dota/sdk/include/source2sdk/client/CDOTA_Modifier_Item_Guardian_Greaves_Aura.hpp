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
        class CDOTA_Modifier_Item_Guardian_Greaves_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_health_regen; // 0x1a58            
            float aura_health_regen_bonus; // 0x1a5c            
            float aura_mana_regen; // 0x1a60            
            float aura_mana_regen_bonus; // 0x1a64            
            std::int32_t aura_bonus_threshold; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Guardian_Greaves_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Guardian_Greaves_Aura) == 0x1a70);
    };
};
