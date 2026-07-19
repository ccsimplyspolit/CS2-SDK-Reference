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
        // Size: 0x3e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_BeltFed_Magazine : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bInitialized; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            float m_flSpinUpRateOverride; // 0xd4            
            float m_flSpinUpDecayOverride; // 0xd8            
            float m_flMaxCycleTimeOverride; // 0xdc            
            float m_flMaxBurstFireCooldownOverride; // 0xe0            
            uint8_t _pad00e4[0x304];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BeltFed_Magazine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BeltFed_Magazine) == 0x3e8);
    };
};
