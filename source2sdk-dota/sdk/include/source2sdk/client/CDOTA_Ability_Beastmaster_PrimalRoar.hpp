#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Beastmaster_PrimalRoar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float duration; // 0x6a8            
            float slow_duration; // 0x6ac            
            std::int32_t side_damage; // 0x6b0            
            float damage_radius; // 0x6b4            
            std::int32_t path_width; // 0x6b8            
            float push_duration; // 0x6bc            
            float push_distance; // 0x6c0            
            std::int32_t damage; // 0x6c4            
            float movement_speed_duration; // 0x6c8            
            uint8_t _pad06cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Beastmaster_PrimalRoar) == 0x6d0);
    };
};
