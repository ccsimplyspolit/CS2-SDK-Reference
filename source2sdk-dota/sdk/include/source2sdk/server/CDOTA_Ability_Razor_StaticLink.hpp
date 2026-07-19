#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        class CDOTA_Ability_Razor_StaticLink : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iLinkIndex; // 0x580            
            uint8_t _pad0584[0x4]; // 0x584
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x588            
            float vision_duration; // 0x5a0            
            bool m_bIsAltCastState; // 0x5a4            
            uint8_t _pad05a5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Razor_StaticLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Razor_StaticLink) == 0x5a8);
    };
};
