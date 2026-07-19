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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_Infernal_Shred_ArmorPiercing : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_armor_piercing_pct; // 0x1a58            
            std::int32_t allowed_particle_arrows; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a60            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Infernal_Shred_ArmorPiercing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Clinkz_Infernal_Shred_ArmorPiercing) == 0x1a68);
    };
};
