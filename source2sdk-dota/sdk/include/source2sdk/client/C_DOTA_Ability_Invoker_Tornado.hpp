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
        class C_DOTA_Ability_Invoker_Tornado : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float vision_distance; // 0x6b8            
            float end_vision_duration; // 0x6bc            
            float lift_duration; // 0x6c0            
            float base_damage; // 0x6c4            
            float quas_damage; // 0x6c8            
            float wex_damage; // 0x6cc            
            float twister_duration; // 0x6d0            
            float twister_distance_interval; // 0x6d4            
            float twister_damage; // 0x6d8            
            uint8_t _pad06dc[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_Tornado) == 0x6f0);
    };
};
