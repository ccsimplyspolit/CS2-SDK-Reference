#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x598
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Snapfire_Scatterblast : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t damage; // 0x580            
            float debuff_duration; // 0x584            
            std::int32_t point_blank_range; // 0x588            
            float point_blank_dmg_bonus_pct; // 0x58c            
            float point_blank_debuff_duration_pct; // 0x590            
            float blast_width_end; // 0x594            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_Scatterblast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Snapfire_Scatterblast) == 0x598);
    };
};
