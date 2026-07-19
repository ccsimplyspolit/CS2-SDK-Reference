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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Abaddon_Withering_Mist_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float heal_reduction_pct; // 0x1a58            
            float hp_threshold_pct; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a60            
            bool bUnderThreshold; // 0x1a64            
            uint8_t _pad1a65[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_Withering_Mist_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Abaddon_Withering_Mist_Debuff) == 0x1a68);
    };
};
