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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Pangolier_Swashbuckle : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float dash_speed; // 0x6a8            
            float start_radius; // 0x6ac            
            float end_radius; // 0x6b0            
            float range; // 0x6b4            
            float damage; // 0x6b8            
            float attack_damage; // 0x6bc            
            std::int32_t procs_onhit_effects; // 0x6c0            
            float slow_duration; // 0x6c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Pangolier_Swashbuckle) == 0x6c8);
    };
};
