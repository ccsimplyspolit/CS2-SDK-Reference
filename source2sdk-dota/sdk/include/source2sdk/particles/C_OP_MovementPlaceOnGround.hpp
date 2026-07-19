#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleTraceMissBehavior_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
        // Size: 0xac0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MovementPlaceOnGround : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x1d8            
            // metadata: MPropertyFriendlyName "max trace length"
            float m_flMaxTraceLength; // 0x348            
            // metadata: MPropertyFriendlyName "CP movement tolerance"
            float m_flTolerance; // 0x34c            
            // metadata: MPropertyFriendlyName "trace direction"
            source2sdk::particleslib::CPerParticleVecInput m_vecTraceDir; // 0x350            
            // metadata: MPropertyFriendlyName "trace offset"
            float m_flTraceOffset; // 0xa08            
            // metadata: MPropertyFriendlyName "interpolation rate"
            float m_flLerpRate; // 0xa0c            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0xa10            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0xa90            
            // metadata: MPropertyFriendlyName "reference CP 1"
            std::int32_t m_nRefCP1; // 0xa94            
            // metadata: MPropertyFriendlyName "reference CP 2"
            std::int32_t m_nRefCP2; // 0xa98            
            // metadata: MPropertyFriendlyName "interploation distance tolerance cp"
            std::int32_t m_nLerpCP; // 0xa9c            
            uint8_t _pad0aa0[0x8]; // 0xaa0
            // metadata: MPropertyFriendlyName "No Collision Behavior"
            source2sdk::particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0xaa8            
            // metadata: MPropertyFriendlyName "include default contents trace hulls"
            bool m_bIncludeShotHull; // 0xaac            
            // metadata: MPropertyFriendlyName "include water"
            bool m_bIncludeWater; // 0xaad            
            uint8_t _pad0aae[0x2]; // 0xaae
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0xab0            
            // metadata: MPropertyFriendlyName "treat offset as scalar of particle radius"
            bool m_bScaleOffset; // 0xab1            
            uint8_t _pad0ab2[0x2]; // 0xab2
            // metadata: MPropertyFriendlyName "preserve initial Z-offset relative to cp"
            std::int32_t m_nPreserveOffsetCP; // 0xab4            
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            std::int32_t m_nIgnoreCP; // 0xab8            
            uint8_t _pad0abc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementPlaceOnGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementPlaceOnGround) == 0xac0);
    };
};
