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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_WitchDoctor_Maledict : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iStartHealth; // 0x1a58            
            float bonus_damage; // 0x1a5c            
            float bonus_damage_threshold; // 0x1a60            
            std::int32_t ticks; // 0x1a64            
            std::int32_t iCurrentTick; // 0x1a68            
            std::int32_t health_restoration_reduction; // 0x1a6c            
            float spread_radius; // 0x1a70            
            float spread_pct; // 0x1a74            
            uint8_t _pad1a78[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Maledict because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_WitchDoctor_Maledict) == 0x1a90);
    };
};
