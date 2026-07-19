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
        // Size: 0x948
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerTrooperDetector : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e0[0x60]; // 0x8e0
            float m_flRadius; // 0x940            
            uint8_t _pad0944[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerTrooperDetector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerTrooperDetector) == 0x948);
    };
};
