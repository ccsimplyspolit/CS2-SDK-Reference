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
        class CDOTA_Ability_Shredder_WhirlingDeath : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float whirling_radius; // 0x580            
            std::int32_t whirling_damage; // 0x584            
            float whirling_tick; // 0x588            
            float duration; // 0x58c            
            std::int32_t tree_damage_scale; // 0x590            
            uint8_t _pad0594[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Shredder_WhirlingDeath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Shredder_WhirlingDeath) == 0x598);
    };
};
