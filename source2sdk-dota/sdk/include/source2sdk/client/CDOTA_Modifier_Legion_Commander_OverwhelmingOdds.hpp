#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_Legion_Commander_OverwhelmingOdds : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_attack_speed; // 0x1a58            
            float bonus_armor_creeps; // 0x1a5c            
            float bonus_armor_heroes; // 0x1a60            
            float m_flBonusArmor; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_OverwhelmingOdds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Legion_Commander_OverwhelmingOdds) == 0x1a68);
    };
};
