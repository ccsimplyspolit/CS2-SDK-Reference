#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_Marci_Unleash_Flurry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t flurry_bonus_attack_speed; // 0x1a58            
            float time_between_flurries; // 0x1a5c            
            float debuff_duration; // 0x1a60            
            float max_time_window_per_hit; // 0x1a64            
            bool m_bBonusSpeed; // 0x1a68            
            uint8_t _pad1a69[0x3]; // 0x1a69
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1a6c            
            bool m_bIsDoingFlurryAttack; // 0x1a70            
            bool m_bIsDoingFlurryPulseAttack; // 0x1a71            
            uint8_t _pad1a72[0x2]; // 0x1a72
            source2sdk::entity2::GameTime_t m_fLastAttackTime; // 0x1a74            
            bool m_bShouldConsiderSilence; // 0x1a78            
            uint8_t _pad1a79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_Flurry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Unleash_Flurry) == 0x1a80);
    };
};
