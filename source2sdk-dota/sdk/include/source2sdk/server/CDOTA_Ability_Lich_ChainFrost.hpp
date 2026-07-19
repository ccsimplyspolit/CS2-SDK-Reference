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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Lich_ChainFrost : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float jump_range; // 0x580            
            std::int32_t jumps; // 0x584            
            float slow_duration; // 0x588            
            float vision_radius; // 0x58c            
            std::int32_t projectile_speed; // 0x590            
            std::int32_t initial_projectile_speed; // 0x594            
            uint8_t _pad0598[0x14]; // 0x598
            std::int32_t bonus_jumps_per_hero_killed; // 0x5ac            
            std::int32_t bonus_jumps_per_creep_killed; // 0x5b0            
            uint8_t _pad05b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Lich_ChainFrost) == 0x5b8);
    };
};
