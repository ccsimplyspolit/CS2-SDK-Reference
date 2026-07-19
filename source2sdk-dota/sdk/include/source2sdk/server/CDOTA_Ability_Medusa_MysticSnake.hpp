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
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Medusa_MysticSnake : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float radius; // 0x580            
            std::int32_t snake_jumps; // 0x584            
            std::int32_t snake_damage; // 0x588            
            std::int32_t snake_damage_pct; // 0x58c            
            std::int32_t snake_mana_steal; // 0x590            
            std::int32_t snake_scale; // 0x594            
            std::int32_t snake_speed_scale; // 0x598            
            std::int32_t initial_speed; // 0x59c            
            std::int32_t return_speed; // 0x5a0            
            float jump_delay; // 0x5a4            
            float slow_duration; // 0x5a8            
            uint8_t _pad05ac[0xfc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Medusa_MysticSnake) == 0x6a8);
    };
};
