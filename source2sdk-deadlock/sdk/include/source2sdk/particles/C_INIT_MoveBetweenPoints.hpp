#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        // Size: 0x918
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_MoveBetweenPoints : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "minimum speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flSpeedMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "maximum speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flSpeedMax; // 0x350            
            // metadata: MPropertyFriendlyName "end spread"
            source2sdk::particleslib::CPerParticleFloatInput m_flEndSpread; // 0x4c0            
            // metadata: MPropertyFriendlyName "start offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flStartOffset; // 0x630            
            // metadata: MPropertyFriendlyName "end offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flEndOffset; // 0x7a0            
            // metadata: MPropertyFriendlyName "end control point"
            std::int32_t m_nEndControlPointNumber; // 0x910            
            // metadata: MPropertyFriendlyName "bias lifetime by trail length"
            bool m_bTrailBias; // 0x914            
            uint8_t _pad0915[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_MoveBetweenPoints because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_MoveBetweenPoints) == 0x918);
    };
};
