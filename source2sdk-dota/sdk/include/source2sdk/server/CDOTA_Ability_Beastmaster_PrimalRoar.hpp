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
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Beastmaster_PrimalRoar : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x580            
            float slow_duration; // 0x584            
            std::int32_t side_damage; // 0x588            
            float damage_radius; // 0x58c            
            std::int32_t path_width; // 0x590            
            float push_duration; // 0x594            
            float push_distance; // 0x598            
            std::int32_t damage; // 0x59c            
            float movement_speed_duration; // 0x5a0            
            uint8_t _pad05a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Beastmaster_PrimalRoar) == 0x5a8);
    };
};
