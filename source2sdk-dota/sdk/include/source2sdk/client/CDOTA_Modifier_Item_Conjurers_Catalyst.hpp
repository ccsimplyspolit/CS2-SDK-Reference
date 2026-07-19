#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Conjurers_Catalyst : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float damage_aoe; // 0x1a58            
            float damage; // 0x1a5c            
            float damage_creep; // 0x1a60            
            float cooldown; // 0x1a64            
            float duration; // 0x1a68            
            std::int32_t damage_threshold; // 0x1a6c            
            bool has_hands; // 0x1a70            
            uint8_t _pad1a71[0x3]; // 0x1a71
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a74            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1a78            
            uint8_t _pad1a7c[0x4]; // 0x1a7c
            source2sdk::client::CountdownTimer m_OverheatTimer; // 0x1a80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Conjurers_Catalyst because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Conjurers_Catalyst) == 0x1a98);
    };
};
