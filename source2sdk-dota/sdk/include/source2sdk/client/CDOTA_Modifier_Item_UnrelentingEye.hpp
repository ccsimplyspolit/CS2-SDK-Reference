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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_UnrelentingEye : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float max_slow_res; // 0x1a58            
            float hero_reduction; // 0x1a5c            
            float status_res_pct_increase_per_hero; // 0x1a60            
            std::int32_t m_nNearbyEnemyHeroes; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_UnrelentingEye because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_UnrelentingEye) == 0x1a68);
    };
};
