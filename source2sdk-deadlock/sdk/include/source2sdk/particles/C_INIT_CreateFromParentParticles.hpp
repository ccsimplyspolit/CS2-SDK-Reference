#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

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
        class C_INIT_CreateFromParentParticles : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "inherited velocity scale"
            float m_flVelocityScale; // 0x1e0            
            // metadata: MPropertyFriendlyName "particle increment amount"
            float m_flIncrement; // 0x1e4            
            // metadata: MPropertyFriendlyName "random parent particle distribution"
            bool m_bRandomDistribution; // 0x1e8            
            uint8_t _pad01e9[0x3]; // 0x1e9
            // metadata: MPropertyFriendlyName "random seed"
            std::int32_t m_nRandomSeed; // 0x1ec            
            // metadata: MPropertyFriendlyName "sub frame interpolation"
            bool m_bSubFrame; // 0x1f0            
            // metadata: MPropertyFriendlyName "set rope segment id"
            bool m_bSetRopeSegmentID; // 0x1f1            
            uint8_t _pad01f2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateFromParentParticles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateFromParentParticles) == 0x1f8);
    };
};
