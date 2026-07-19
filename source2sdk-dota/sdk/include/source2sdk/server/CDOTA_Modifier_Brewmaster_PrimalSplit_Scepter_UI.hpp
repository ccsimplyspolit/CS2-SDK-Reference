#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_PrimalSplit_Scepter_UI : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_per_attribute; // 0x1a58            
            std::int32_t dmg_per_attribute; // 0x1a5c            
            std::int32_t attribute_share_pct; // 0x1a60            
            uint8_t _pad1a64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_PrimalSplit_Scepter_UI because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_PrimalSplit_Scepter_UI) == 0x1a68);
    };
};
