#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
#include "source2sdk/particleslib/ParticleDirectionNoiseType_t.hpp"

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
        // Size: 0x1fb0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_CurlNoiseForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "noise type"
            source2sdk::particleslib::ParticleDirectionNoiseType_t m_nNoiseType; // 0x1e8            
            uint8_t _pad01ec[0x4]; // 0x1ec
            // metadata: MPropertyFriendlyName "noise frequency"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecNoiseFreq; // 0x1f0            
            // metadata: MPropertyFriendlyName "noise amplitude"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecNoiseScale; // 0x8a8            
            // metadata: MPropertyFriendlyName "offset"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecOffset; // 0xf60            
            // metadata: MPropertyFriendlyName "offset rate"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecOffsetRate; // 0x1618            
            // metadata: MPropertyFriendlyName "worley seed"
            source2sdk::particleslib::CPerParticleFloatInput m_flWorleySeed; // 0x1cd0            
            // metadata: MPropertyFriendlyName "worley jitter"
            source2sdk::particleslib::CPerParticleFloatInput m_flWorleyJitter; // 0x1e40            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CurlNoiseForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CurlNoiseForce) == 0x1fb0);
    };
};
