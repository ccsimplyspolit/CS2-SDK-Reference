#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_HammerOfPurity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bHammerAttack; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            std::int32_t attack_range_bonus; // 0x1a5c            
            source2sdk::client::AttackRecord_t m_nAttackRecord; // 0x1a60            
            uint8_t _pad1a62[0x2]; // 0x1a62
            std::int32_t m_nHeal[5]; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_HammerOfPurity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Omniknight_HammerOfPurity) == 0x1a78);
    };
};
