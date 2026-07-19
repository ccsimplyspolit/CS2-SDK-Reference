#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CParticleMassCalculationParameters.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        // Size: 0xe60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_BasicMovement : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "gravity"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_Gravity; // 0x1d8            
            // metadata: MPropertyFriendlyName "drag"
            // metadata: MPropertyAttributeRange "-1 1"
            source2sdk::particleslib::CParticleCollectionFloatInput m_fDrag; // 0x890            
            // metadata: MPropertyFriendlyName "Mass controls"
            source2sdk::particles::CParticleMassCalculationParameters m_massControls; // 0xa00            
            // metadata: MPropertyFriendlyName "max constraint passes"
            std::int32_t m_nMaxConstraintPasses; // 0xe58            
            // metadata: MPropertyFriendlyName "use new code"
            bool m_bUseNewCode; // 0xe5c            
            uint8_t _pad0e5d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_BasicMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_BasicMovement) == 0xe60);
    };
};
