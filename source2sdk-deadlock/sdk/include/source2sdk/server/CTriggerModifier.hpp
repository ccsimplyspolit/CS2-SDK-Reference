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
        class CTriggerModifier : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iszModifierName; // 0x8e0            
            CUtlStringToken m_tModifier; // 0x8e8            
            uint8_t _pad08ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerModifier) == 0x8f0);
    };
};
