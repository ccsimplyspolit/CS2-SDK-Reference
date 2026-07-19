#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1af0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_SpecialistsArray : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t agility; // 0x1a58            
            std::int32_t damage; // 0x1a5c            
            std::int32_t proc_chance; // 0x1a60            
            std::int32_t proc_dmg_pct; // 0x1a64            
            std::int32_t count; // 0x1a68            
            std::int32_t secondary_target_range_bonus; // 0x1a6c            
            std::int32_t secondary_target_angle; // 0x1a70            
            std::int32_t base_proc_dmg; // 0x1a74            
            bool m_bTriggered; // 0x1a78            
            uint8_t _pad1a79[0x77];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_SpecialistsArray because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_SpecialistsArray) == 0x1af0);
    };
};
