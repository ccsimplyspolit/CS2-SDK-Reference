#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_Might_And_Magus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t magic_resist_bonus; // 0x1a58            
            float aoe_bonus; // 0x1a5c            
            float aoe_bonus_duration; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            // m_vecAoEExpireTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_vecAoEExpireTimes;
            char m_vecAoEExpireTimes[0x18]; // 0x1a68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Might_And_Magus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rubick_Might_And_Magus) == 0x1a80);
    };
};
