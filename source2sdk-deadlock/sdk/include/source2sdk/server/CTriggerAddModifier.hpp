#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x8f0
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerAddModifier : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_strModifier; // 0x8e0            
            float m_flDuration; // 0x8e8            
            bool m_bMomentary; // 0x8ec            
            uint8_t _pad08ed[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerAddModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerAddModifier) == 0x8f0);
    };
};
