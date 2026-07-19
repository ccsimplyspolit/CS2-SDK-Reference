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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Rot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rot_damage; // 0x1a58            
            std::int32_t rot_slow; // 0x1a5c            
            std::int32_t scepter_rot_regen_reduction_pct; // 0x1a60            
            uint8_t _pad1a64[0x14]; // 0x1a64
            source2sdk::entity2::GameTime_t m_flLastRotTime; // 0x1a78            
            bool m_bQualifiesAsPotentionalDeny; // 0x1a7c            
            uint8_t _pad1a7d[0x3]; // 0x1a7d
            std::int32_t max_total_stacks; // 0x1a80            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pudge_Rot) == 0x1a88);
    };
};
