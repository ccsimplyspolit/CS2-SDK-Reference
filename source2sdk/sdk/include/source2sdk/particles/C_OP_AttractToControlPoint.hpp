#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_AttractToControlPoint : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "component scale"
            // metadata: MVectorIsCoordinate
            Vector m_vecComponentScale; // 0x1e8            
            uint8_t _pad01f4[0x4]; // 0x1f4
            // metadata: MPropertyFriendlyName "amount of force (or Max Force)"
            source2sdk::particleslib::CPerParticleFloatInput m_fForceAmount; // 0x1f8            
            // metadata: MPropertyFriendlyName "event horizon threshold distance for max force"
            source2sdk::particleslib::CPerParticleFloatInput m_fMinimumDistance; // 0x368            
            // metadata: MPropertyFriendlyName "falloff power"
            float m_fFalloffPower; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            // metadata: MPropertyFriendlyName "input position transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x4e0            
            // metadata: MPropertyFriendlyName "Min Pullforce"
            source2sdk::particleslib::CPerParticleFloatInput m_fForceAmountMin; // 0x548            
            // metadata: MPropertyFriendlyName "Apply Min Pullforce"
            bool m_bApplyMinForce; // 0x6b8            
            uint8_t _pad06b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_AttractToControlPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_AttractToControlPoint) == 0x6c0);
    };
};
