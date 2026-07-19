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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_IceWall : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            VectorWS m_vEndPosition; // 0x590            
            std::int32_t num_wall_elements; // 0x59c            
            float wall_element_spacing; // 0x5a0            
            float wall_element_radius; // 0x5a4            
            std::int32_t vector_cast_range; // 0x5a8            
            std::int32_t slow; // 0x5ac            
            float damage_per_second; // 0x5b0            
            float duration; // 0x5b4            
            float slow_duration; // 0x5b8            
            float root_damage; // 0x5bc            
            float root_duration; // 0x5c0            
            float tick_interval; // 0x5c4            
            float wall_total_length; // 0x5c8            
            float wall_width; // 0x5cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_IceWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_IceWall) == 0x5d0);
    };
};
