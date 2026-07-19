#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
        // Size: 0x658
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetFromCPSnapshot : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nControlPointNumber; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nControlPointNumber < 0"
            CUtlString m_strSnapshotSubset; // 0x1e0            
            // metadata: MPropertyFriendlyName "field to read"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1e8            
            // metadata: MPropertyFriendlyName "field to write"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1ec            
            // metadata: MPropertyFriendlyName "local space control point number"
            std::int32_t m_nLocalSpaceCP; // 0x1f0            
            // metadata: MPropertyFriendlyName "random order"
            bool m_bRandom; // 0x1f4            
            // metadata: MPropertyFriendlyName "reverse order"
            bool m_bReverse; // 0x1f5            
            uint8_t _pad01f6[0x2]; // 0x1f6
            // metadata: MPropertyFriendlyName "random seed"
            std::int32_t m_nRandomSeed; // 0x1f8            
            uint8_t _pad01fc[0x4]; // 0x1fc
            // metadata: MPropertyFriendlyName "Snapshot start point"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x200            
            // metadata: MPropertyFriendlyName "Snapshot increment amount"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x370            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x4e0            
            // metadata: MPropertyFriendlyName "Sub-Sample Between Input Points"
            bool m_bSubSample; // 0x650            
            // metadata: MPropertyFriendlyName "Position also sets Previous Position"
            bool m_bPrev; // 0x651            
            uint8_t _pad0652[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetFromCPSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetFromCPSnapshot) == 0x658);
    };
};
