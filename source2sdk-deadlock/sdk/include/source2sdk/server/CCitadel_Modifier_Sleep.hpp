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
        // Size: 0x100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Sleep : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_vecSleepModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecSleepModifiers;
            char m_vecSleepModifiers[0x18]; // 0xd0            
            bool m_bIsWakingUp; // 0xe8            
            uint8_t _pad00e9[0x3]; // 0xe9
            float m_flMinSleepDamageToWake; // 0xec            
            float m_flMinSleepTime; // 0xf0            
            float m_flWakeUpDelay; // 0xf4            
            float m_flTotalDamageTakenWhileAsleep; // 0xf8            
            uint8_t _pad00fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Sleep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Sleep) == 0x100);
    };
};
