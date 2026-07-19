#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x1f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InheritFromParentParticles : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "scale"
            float m_flScale; // 0x1e0            
            // metadata: MPropertyFriendlyName "inherited field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1e4            
            // metadata: MPropertyFriendlyName "particle increment amount"
            std::int32_t m_nIncrement; // 0x1e8            
            // metadata: MPropertyFriendlyName "random parent particle distribution"
            bool m_bRandomDistribution; // 0x1ec            
            uint8_t _pad01ed[0x3]; // 0x1ed
            // metadata: MPropertyFriendlyName "random seed"
            std::int32_t m_nRandomSeed; // 0x1f0            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InheritFromParentParticles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InheritFromParentParticles) == 0x1f8);
    };
};
