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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_point; // 0x1a58            
            float attack_range_bonus; // 0x1a5c            
            std::int32_t projectile_speed_bonus; // 0x1a60            
            std::int32_t night_vision_bonus; // 0x1a64            
            std::int32_t movement_scepter; // 0x1a68            
            uint8_t _pad1a6c[0x4]; // 0x1a6c
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1a70            
            std::int32_t max_attacks; // 0x1a78            
            std::int32_t m_iNumAttacks; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight) == 0x1a80);
    };
};
