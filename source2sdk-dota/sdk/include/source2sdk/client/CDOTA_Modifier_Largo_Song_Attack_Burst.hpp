#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_Song_Attack_Burst : public source2sdk::client::CDOTA_Buff
        {
        public:
            float magic_damage_bonus; // 0x1a58            
            float magic_damage_bonus_per_stack; // 0x1a5c            
            float spell_amp_bonus; // 0x1a60            
            std::int32_t num_stacks; // 0x1a64            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_Song_Attack_Burst because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_Song_Attack_Burst) == 0x1a70);
    };
};
