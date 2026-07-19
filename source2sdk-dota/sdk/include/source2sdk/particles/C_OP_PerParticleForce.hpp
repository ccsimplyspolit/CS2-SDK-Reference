#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
        // Size: 0xa18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PerParticleForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "force scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flForceScale; // 0x1e8            
            // metadata: MPropertyFriendlyName "force to apply"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vForce; // 0x358            
            // metadata: MPropertyFriendlyName "local space control point"
            std::int32_t m_nCP; // 0xa10            
            uint8_t _pad0a14[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PerParticleForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PerParticleForce) == 0xa18);
    };
};
