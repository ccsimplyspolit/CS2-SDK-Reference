#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f0
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGeneralSpin : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "spin rate degrees"
            std::int32_t m_nSpinRateDegrees; // 0x1d8            
            // metadata: MPropertyFriendlyName "spin rate min"
            std::int32_t m_nSpinRateMinDegrees; // 0x1dc            
            uint8_t _pad01e0[0x4]; // 0x1e0
            // metadata: MPropertyFriendlyName "spin stop time"
            float m_fSpinRateStopTime; // 0x1e4            
            uint8_t _pad01e8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGeneralSpin because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CGeneralSpin) == 0x1f0);
    };
};
