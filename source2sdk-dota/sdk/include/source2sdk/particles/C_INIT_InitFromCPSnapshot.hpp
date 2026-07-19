#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_INIT_InitFromCPSnapshot : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nControlPointNumber; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nControlPointNumber < 0"
            CUtlString m_strSnapshotSubset; // 0x1e8            
            // metadata: MPropertyFriendlyName "field to read"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1f0            
            // metadata: MPropertyFriendlyName "field to write"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f4            
            // metadata: MPropertyFriendlyName "local space control point number"
            std::int32_t m_nLocalSpaceCP; // 0x1f8            
            // metadata: MPropertyFriendlyName "random order"
            bool m_bRandom; // 0x1fc            
            // metadata: MPropertyFriendlyName "reverse order"
            // metadata: MPropertySuppressExpr "m_bRandom == true"
            bool m_bReverse; // 0x1fd            
            uint8_t _pad01fe[0x2]; // 0x1fe
            // metadata: MPropertyFriendlyName "Snapshot increment amount"
            // metadata: MPropertySuppressExpr "m_bRandom == true"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x200            
            // metadata: MPropertyFriendlyName "Manual Snapshot Index"
            // metadata: MPropertySuppressExpr "m_bRandom == true"
            source2sdk::particleslib::CPerParticleFloatInput m_nManualSnapshotIndex; // 0x370            
            // metadata: MPropertyFriendlyName "random seed"
            // metadata: MPropertySuppressExpr "m_bRandom == false"
            std::int32_t m_nRandomSeed; // 0x4e0            
            // metadata: MPropertyFriendlyName "local space angles"
            bool m_bLocalSpaceAngles; // 0x4e4            
            uint8_t _pad04e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitFromCPSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitFromCPSnapshot) == 0x4e8);
    };
};
