#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1078
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_PowerSurge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextProcTime; // 0xf70            
            float m_flBaseCooldown; // 0xf74            
            uint8_t _pad0f78[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PowerSurge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PowerSurge) == 0x1078);
    };
};
