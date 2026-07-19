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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_HydrasBreath_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float ground_duration; // 0x1a58            
            float poison_duration; // 0x1a5c            
            float damage; // 0x1a60            
            float radius; // 0x1a64            
            bool m_bDelayed; // 0x1a68            
            bool m_bAttackLanded; // 0x1a69            
            uint8_t _pad1a6a[0x2]; // 0x1a6a
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_HydrasBreath_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_HydrasBreath_Thinker) == 0x1a70);
    };
};
