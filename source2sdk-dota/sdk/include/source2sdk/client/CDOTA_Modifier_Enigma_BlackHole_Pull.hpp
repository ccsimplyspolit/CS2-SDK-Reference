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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_BlackHole_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pull_speed; // 0x1a58            
            float radius; // 0x1a5c            
            float damage; // 0x1a60            
            float tick_rate; // 0x1a64            
            float pull_rotate_speed; // 0x1a68            
            float animation_rate; // 0x1a6c            
            float scepter_pct_damage; // 0x1a70            
            float m_flBlackHoleDuration; // 0x1a74            
            float m_flBlackHoleCreationTime; // 0x1a78            
            source2sdk::entity2::GameTime_t m_flDamageTick; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHole_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enigma_BlackHole_Pull) == 0x1a80);
    };
};
