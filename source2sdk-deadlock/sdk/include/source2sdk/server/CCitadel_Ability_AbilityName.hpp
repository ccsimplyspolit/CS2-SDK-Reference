#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseTriggerAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Doorman_Doorway;
    };
};

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
        // Size: 0xf88
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_AbilityName : public source2sdk::server::CCitadelBaseTriggerAbility
        {
        public:
            source2sdk::server::CCitadel_Ability_Doorman_Doorway* m_hDoorwayAbility; // 0xf80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_AbilityName because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_AbilityName) == 0xf88);
    };
};
