#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
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
        // Size: 0x250
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderScreenShake : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "duration scale"
            float m_flDurationScale; // 0x228            
            // metadata: MPropertyFriendlyName "radius scale"
            float m_flRadiusScale; // 0x22c            
            // metadata: MPropertyFriendlyName "frequence scale"
            float m_flFrequencyScale; // 0x230            
            // metadata: MPropertyFriendlyName "amplitude scale"
            float m_flAmplitudeScale; // 0x234            
            // metadata: MPropertyFriendlyName "radius field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nRadiusField; // 0x238            
            // metadata: MPropertyFriendlyName "duration field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nDurationField; // 0x23c            
            // metadata: MPropertyFriendlyName "frequency field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFrequencyField; // 0x240            
            // metadata: MPropertyFriendlyName "amplitude field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nAmplitudeField; // 0x244            
            // metadata: MPropertyFriendlyName "control point of shake recipient (-1 = global)"
            std::int32_t m_nFilterCP; // 0x248            
            uint8_t _pad024c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderScreenShake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderScreenShake) == 0x250);
    };
};
