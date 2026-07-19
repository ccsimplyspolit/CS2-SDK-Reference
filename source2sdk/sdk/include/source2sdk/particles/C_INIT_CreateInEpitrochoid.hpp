#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
        // Size: 0x818
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateInEpitrochoid : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent1; // 0x1e0            
            // metadata: MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent2; // 0x1e4            
            // metadata: MPropertyFriendlyName "input transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x1e8            
            // metadata: MPropertyFriendlyName "particle density"
            source2sdk::particleslib::CPerParticleFloatInput m_flParticleDensity; // 0x250            
            // metadata: MPropertyFriendlyName "point offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x3c0            
            // metadata: MPropertyFriendlyName "radius 1"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadius1; // 0x530            
            // metadata: MPropertyFriendlyName "radius 2"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadius2; // 0x6a0            
            // metadata: MPropertyFriendlyName "use particle count instead of creation time"
            bool m_bUseCount; // 0x810            
            // metadata: MPropertyFriendlyName "local space"
            bool m_bUseLocalCoords; // 0x811            
            // metadata: MPropertyFriendlyName "offset from existing position"
            bool m_bOffsetExistingPos; // 0x812            
            uint8_t _pad0813[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateInEpitrochoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateInEpitrochoid) == 0x818);
    };
};
