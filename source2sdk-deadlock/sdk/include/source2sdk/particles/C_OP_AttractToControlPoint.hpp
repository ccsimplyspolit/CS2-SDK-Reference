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
        // Size: 0x550
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
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
            // metadata: MPropertyFriendlyName "falloff power"
            float m_fFalloffPower; // 0x368            
            uint8_t _pad036c[0x4]; // 0x36c
            // metadata: MPropertyFriendlyName "input position transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x370            
            // metadata: MPropertyFriendlyName "Min Pullforce"
            source2sdk::particleslib::CPerParticleFloatInput m_fForceAmountMin; // 0x3d8            
            // metadata: MPropertyFriendlyName "Apply Min Pullforce"
            bool m_bApplyMinForce; // 0x548            
            uint8_t _pad0549[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_AttractToControlPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_AttractToControlPoint) == 0x550);
    };
};
