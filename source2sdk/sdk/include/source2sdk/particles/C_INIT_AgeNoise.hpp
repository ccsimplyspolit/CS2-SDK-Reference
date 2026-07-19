#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x208
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_AgeNoise : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "absolute value"
            bool m_bAbsVal; // 0x1e0            
            // metadata: MPropertyFriendlyName "invert absolute value"
            bool m_bAbsValInv; // 0x1e1            
            uint8_t _pad01e2[0x2]; // 0x1e2
            // metadata: MPropertyFriendlyName "time coordinate offset"
            float m_flOffset; // 0x1e4            
            // metadata: MPropertyFriendlyName "start age minimum"
            float m_flAgeMin; // 0x1e8            
            // metadata: MPropertyFriendlyName "start age maximum"
            float m_flAgeMax; // 0x1ec            
            // metadata: MPropertyFriendlyName "time noise coordinate scale"
            float m_flNoiseScale; // 0x1f0            
            // metadata: MPropertyFriendlyName "spatial noise coordinate scale"
            float m_flNoiseScaleLoc; // 0x1f4            
            // metadata: MPropertyFriendlyName "spatial coordinate offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetLoc; // 0x1f8            
            uint8_t _pad0204[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_AgeNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_AgeNoise) == 0x208);
    };
};
