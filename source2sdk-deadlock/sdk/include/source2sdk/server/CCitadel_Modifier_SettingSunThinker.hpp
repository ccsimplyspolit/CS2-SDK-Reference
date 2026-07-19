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
        // Size: 0xf8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SettingSunThinker : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flTickInterval; // 0xd0            
            float m_flRadius; // 0xd4            
            float m_CenterRadius; // 0xd8            
            float m_CenterDamage; // 0xdc            
            float m_OuterDamage; // 0xe0            
            float m_StunDuration; // 0xe4            
            float m_TargetingDuration; // 0xe8            
            float m_ShootDuration; // 0xec            
            bool m_bTargetingCompleted; // 0xf0            
            bool m_bSecondHit; // 0xf1            
            bool m_bTwoHits; // 0xf2            
            uint8_t _pad00f3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_SettingSunThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_SettingSunThinker) == 0xf8);
    };
};
