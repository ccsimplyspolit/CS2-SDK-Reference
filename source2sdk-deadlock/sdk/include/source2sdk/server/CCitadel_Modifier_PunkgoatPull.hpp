#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatPull : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flDamageToDealAtEnd; // 0xd0            
            float m_flDamageLeftToDealOverPull; // 0xd4            
            float m_flDamageOverPullAccumulator; // 0xd8            
            Vector m_vPullToLocation; // 0xdc            
            bool m_bAllowTrackTarget; // 0xe8            
            uint8_t _pad00e9[0x3]; // 0xe9
            float m_flCurrentVerticalSpeed; // 0xec            
            uint8_t _pad00f0[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatPull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PunkgoatPull) == 0x2f0);
    };
};
