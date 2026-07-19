#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseTriggerAbility.hpp"

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
        // Size: 0x1380
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_KillSummonTrigger : public source2sdk::client::CCitadelBaseTriggerAbility
        {
        public:
            VectorWS m_vLaunchPosition; // 0x11e8            
            QAngle m_qLaunchAngle; // 0x11f4            
            uint8_t _pad1200[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_KillSummonTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_KillSummonTrigger) == 0x1380);
    };
};
