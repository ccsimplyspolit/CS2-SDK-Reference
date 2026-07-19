#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseTriggerAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadel_Ability_Doorman_Doorway;
    };
};

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
        // Size: 0x11f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_AbilityName : public source2sdk::client::CCitadelBaseTriggerAbility
        {
        public:
            source2sdk::client::CCitadel_Ability_Doorman_Doorway* m_hDoorwayAbility; // 0x11e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_AbilityName because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_AbilityName) == 0x11f0);
    };
};
