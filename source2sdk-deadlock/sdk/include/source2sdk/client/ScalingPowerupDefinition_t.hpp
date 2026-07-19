#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EModifierValue.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ScalingPowerupDefinition_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::EModifierValue m_eModifierValue; // 0x8            
            float m_valueMin; // 0xc            
            float m_valueMax; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ScalingPowerupDefinition_t, m_eModifierValue) == 0x8);
        static_assert(offsetof(source2sdk::client::ScalingPowerupDefinition_t, m_valueMin) == 0xc);
        static_assert(offsetof(source2sdk::client::ScalingPowerupDefinition_t, m_valueMax) == 0x10);
        
        static_assert(sizeof(source2sdk::client::ScalingPowerupDefinition_t) == 0x18);
    };
};
