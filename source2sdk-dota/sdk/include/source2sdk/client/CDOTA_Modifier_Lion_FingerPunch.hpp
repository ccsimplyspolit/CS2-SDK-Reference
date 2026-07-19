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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lion_FingerPunch : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t punch_bonus_movespeed; // 0x1a58            
            float punch_attack_range; // 0x1a5c            
            float punch_bonus_damage_base; // 0x1a60            
            float damage_per_kill; // 0x1a64            
            float cleave_starting_width; // 0x1a68            
            float cleave_ending_width; // 0x1a6c            
            float cleave_distance; // 0x1a70            
            float cleave_damage; // 0x1a74            
            float grace_period; // 0x1a78            
            std::int32_t m_iOriginalAttackCapabilities; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_FingerPunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lion_FingerPunch) == 0x1a80);
    };
};
