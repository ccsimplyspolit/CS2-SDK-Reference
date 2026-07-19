#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x1500
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
        // static metadata: MNetworkVarNames "bool m_bIsSpeedBursting"
        #pragma pack(push, 1)
        class CCitadel_Ability_FlameDash : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flDashEndTime; // 0x11d8            
            // metadata: MNetworkEnable
            bool m_bIsSpeedBursting; // 0x11f0            
            uint8_t _pad11f1[0x30f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlameDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FlameDash) == 0x1500);
    };
};
