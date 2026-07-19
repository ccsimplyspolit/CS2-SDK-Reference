#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SoulAssumption : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            std::int32_t stack_limit; // 0x1a5c            
            std::int32_t damage_limit; // 0x1a60            
            float stack_duration; // 0x1a64            
            float damage_min; // 0x1a68            
            float damage_max; // 0x1a6c            
            source2sdk::client::ParticleIndex_t m_nFxIndexA; // 0x1a70            
            source2sdk::client::ParticleIndex_t m_nFxIndexB; // 0x1a74            
            std::int32_t iCur_stack; // 0x1a78            
            uint8_t _pad1a7c[0x1c]; // 0x1a7c
            float m_fTotalDamage; // 0x1a98            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SoulAssumption because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_SoulAssumption) == 0x1aa0);
    };
};
