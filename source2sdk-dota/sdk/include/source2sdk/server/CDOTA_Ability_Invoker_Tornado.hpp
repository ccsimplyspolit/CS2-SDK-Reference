#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"

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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_Tornado : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float vision_distance; // 0x590            
            float end_vision_duration; // 0x594            
            float lift_duration; // 0x598            
            float base_damage; // 0x59c            
            float quas_damage; // 0x5a0            
            float wex_damage; // 0x5a4            
            float twister_duration; // 0x5a8            
            float twister_distance_interval; // 0x5ac            
            float twister_damage; // 0x5b0            
            uint8_t _pad05b4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_Tornado) == 0x5c8);
    };
};
