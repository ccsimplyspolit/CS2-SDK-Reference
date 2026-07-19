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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tidehunter_LeviathansCatch : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t model_scale; // 0x1a58            
            std::int32_t attack_range; // 0x1a5c            
            std::int32_t anchor_smash_radius; // 0x1a60            
            float max_fish_spawn_distance; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_LeviathansCatch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tidehunter_LeviathansCatch) == 0x1a68);
    };
};
