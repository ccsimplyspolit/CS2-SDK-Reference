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
        // Size: 0x6e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Invoker_ChaosMeteor : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float area_of_effect; // 0x6b8            
            float damage_interval; // 0x6bc            
            float vision_distance; // 0x6c0            
            float end_vision_duration; // 0x6c4            
            float main_damage; // 0x6c8            
            float burn_duration; // 0x6cc            
            float burn_dps; // 0x6d0            
            uint8_t _pad06d4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_ChaosMeteor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_ChaosMeteor) == 0x6e8);
    };
};
