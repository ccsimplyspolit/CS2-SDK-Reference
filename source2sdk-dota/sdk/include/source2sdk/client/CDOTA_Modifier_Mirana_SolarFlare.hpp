#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mirana_SolarFlare : public source2sdk::client::CDOTA_Buff
        {
        public:
            float duration; // 0x1a58            
            float smoothness; // 0x1a5c            
            float increase_rate; // 0x1a60            
            std::int32_t max_total_increase; // 0x1a64            
            source2sdk::entity2::GameTime_t flMaxDamageGameTime; // 0x1a68            
            std::int32_t evasion; // 0x1a6c            
            std::int32_t m_iTotalAmount; // 0x1a70            
            std::int32_t ally_pct; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_SolarFlare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mirana_SolarFlare) == 0x1a78);
    };
};
