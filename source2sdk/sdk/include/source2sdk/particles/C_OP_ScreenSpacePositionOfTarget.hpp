#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
#include "source2sdk/particleslib/ParticleSetMethod_t.hpp"

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
        // Size: 0xa10
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ScreenSpacePositionOfTarget : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "target position"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecTargetPosition; // 0x1d8            
            // metadata: MPropertyFriendlyName "output behindness"
            bool m_bOututBehindness; // 0x890            
            uint8_t _pad0891[0x3]; // 0x891
            // metadata: MPropertyFriendlyName "behindness output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particles::ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x894            
            // metadata: MPropertyFriendlyName "behindness output remap"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particleslib::CParticleRemapFloatInput m_flBehindOutputRemap; // 0x898            
            // metadata: MPropertyFriendlyName "behindness set value method"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particleslib::ParticleSetMethod_t m_nBehindSetMethod; // 0xa08            
            uint8_t _pad0a0c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ScreenSpacePositionOfTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ScreenSpacePositionOfTarget) == 0xa10);
    };
};
