#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t familiar_speed; // 0x1a58            
            std::int32_t m_nFXIndex; // 0x1a5c            
            std::int32_t m_nFXIndexB; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            source2sdk::client::CountdownTimer m_ctTimer; // 0x1a68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge) == 0x1a80);
    };
};
