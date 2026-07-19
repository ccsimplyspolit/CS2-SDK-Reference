#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_NetherRaiment : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_all_stats; // 0x1a58            
            std::int32_t bonus_health; // 0x1a5c            
            std::int32_t max_charges; // 0x1a60            
            std::int32_t ms_per_charge; // 0x1a64            
            std::int32_t gpm_per_charge; // 0x1a68            
            std::int32_t health_per_charge; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_NetherRaiment because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_NetherRaiment) == 0x1a70);
    };
};
