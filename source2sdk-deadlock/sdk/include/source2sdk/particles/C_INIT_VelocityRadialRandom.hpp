#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        // Size: 0x1248
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_VelocityRadialRandom : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "per-particle center point"
            bool m_bPerParticleCenter; // 0x1e0            
            uint8_t _pad01e1[0x3]; // 0x1e1
            // metadata: MPropertyFriendlyName "control point number"
            // metadata: MPropertySuppressExpr "m_bPerParticleCenter == true"
            std::int32_t m_nControlPointNumber; // 0x1e4            
            // metadata: MPropertyFriendlyName "radial center point"
            // metadata: MPropertySuppressExpr "m_bPerParticleCenter == false"
            source2sdk::particleslib::CPerParticleVecInput m_vecPosition; // 0x1e8            
            // metadata: MPropertyFriendlyName "radial center forward"
            // metadata: MPropertySuppressExpr "m_bPerParticleCenter == false"
            source2sdk::particleslib::CPerParticleVecInput m_vecFwd; // 0x8a0            
            // metadata: MPropertyFriendlyName "random speed min"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMin; // 0xf58            
            // metadata: MPropertyFriendlyName "random speed max"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x10c8            
            // metadata: MPropertyFriendlyName "local space scale"
            Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1238            
            uint8_t _pad1244[0x1]; // 0x1244
            // metadata: MPropertyFriendlyName "ignore delta time"
            bool m_bIgnoreDelta; // 0x1245            
            uint8_t _pad1246[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_VelocityRadialRandom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_VelocityRadialRandom) == 0x1248);
    };
};
