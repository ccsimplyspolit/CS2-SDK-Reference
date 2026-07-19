#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Ability_Invoker_InvokedBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Invoker_IceWall : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            std::int32_t num_wall_elements; // 0x6b8            
            float wall_element_spacing; // 0x6bc            
            float wall_element_radius; // 0x6c0            
            std::int32_t vector_cast_range; // 0x6c4            
            std::int32_t slow; // 0x6c8            
            float damage_per_second; // 0x6cc            
            float duration; // 0x6d0            
            float slow_duration; // 0x6d4            
            float root_damage; // 0x6d8            
            float root_duration; // 0x6dc            
            float tick_interval; // 0x6e0            
            float wall_total_length; // 0x6e4            
            float wall_width; // 0x6e8            
            uint8_t _pad06ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_IceWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_IceWall) == 0x6f0);
    };
};
