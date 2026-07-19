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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lion_ManaDrain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t mana_per_second; // 0x1a58            
            std::int32_t break_distance; // 0x1a5c            
            float tick_interval; // 0x1a60            
            std::int32_t movespeed; // 0x1a64            
            std::int32_t damage_pct; // 0x1a68            
            std::int32_t ally_pct; // 0x1a6c            
            std::int32_t movespeed_bonus_when_empty_pct; // 0x1a70            
            source2sdk::entity2::GameTime_t m_fAppliedTime; // 0x1a74            
            std::int32_t m_nTotalManaDrained; // 0x1a78            
            std::int32_t m_nSelfBuffSerialNumber; // 0x1a7c            
            std::int32_t m_nTargetDebuffSerialNumber; // 0x1a80            
            uint8_t _pad1a84[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_ManaDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lion_ManaDrain) == 0x1a98);
    };
};
