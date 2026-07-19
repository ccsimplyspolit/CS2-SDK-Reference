#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        class C_INIT_RandomVector : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "min"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "max"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecMax; // 0x1ec            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8            
            // metadata: MPropertyFriendlyName "Random number generator controls"
            source2sdk::particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1fc            
            uint8_t _pad0204[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomVector) == 0x208);
    };
};
