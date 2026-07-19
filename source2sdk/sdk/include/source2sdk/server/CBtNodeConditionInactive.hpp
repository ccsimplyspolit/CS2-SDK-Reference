#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBtNodeCondition.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x98
        // Has VTable
        #pragma pack(push, 1)
        class CBtNodeConditionInactive : public source2sdk::server::CBtNodeCondition
        {
        public:
            uint8_t _pad0060[0x18]; // 0x60
            float m_flRoundStartThresholdSeconds; // 0x78            
            float m_flSensorInactivityThresholdSeconds; // 0x7c            
            source2sdk::server::CountdownTimer m_SensorInactivityTimer; // 0x80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBtNodeConditionInactive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBtNodeConditionInactive) == 0x98);
    };
};
