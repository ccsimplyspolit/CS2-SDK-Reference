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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Venomancer_NoxiousPlaguePrimary : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x1a58            
            float damage_tick_rate; // 0x1a5c            
            float debuff_radius; // 0x1a60            
            float mres_reduce; // 0x1a64            
            float movement_slow; // 0x1a68            
            std::int32_t spreads; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_NoxiousPlaguePrimary because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Venomancer_NoxiousPlaguePrimary) == 0x1a70);
    };
};
