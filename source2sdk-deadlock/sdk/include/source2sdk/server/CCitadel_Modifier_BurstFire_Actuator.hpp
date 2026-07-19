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
        // Size: 0x480
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_BurstFire_Actuator : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bLastShotInFlight; // 0xd0            
            bool m_bBonusTracked; // 0xd1            
            uint8_t _pad00d2[0x2]; // 0xd2
            std::int32_t m_nHitCounter; // 0xd4            
            std::int32_t m_nTotalBurstFireShots; // 0xd8            
            std::int32_t m_nInitialzedClipSize; // 0xdc            
            std::int32_t m_nBonusPitch; // 0xe0            
            bool m_bInitialized; // 0xe4            
            uint8_t _pad00e5[0x3]; // 0xe5
            std::int32_t m_nIncreasedBurstShotCount; // 0xe8            
            float m_flIntraBurstCycleTime; // 0xec            
            float m_flCycleTimePct; // 0xf0            
            float m_flMaxCycleTimeOverride; // 0xf4            
            float m_flMaxBurstFireCooldownOverride; // 0xf8            
            uint8_t _pad00fc[0x384];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BurstFire_Actuator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BurstFire_Actuator) == 0x480);
    };
};
