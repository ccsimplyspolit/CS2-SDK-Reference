#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseTriggerAbility.hpp"

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
        // Size: 0x1118
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_KillSummonTrigger : public source2sdk::server::CCitadelBaseTriggerAbility
        {
        public:
            VectorWS m_vLaunchPosition; // 0xf80            
            QAngle m_qLaunchAngle; // 0xf8c            
            uint8_t _pad0f98[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_KillSummonTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_KillSummonTrigger) == 0x1118);
    };
};
