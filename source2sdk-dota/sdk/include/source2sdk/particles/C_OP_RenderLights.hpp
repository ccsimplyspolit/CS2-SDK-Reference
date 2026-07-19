#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/C_OP_RenderPoints.hpp"
#include "source2sdk/particleslib/AnimationType_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MObsoleteParticleFunction
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderLights : public source2sdk::particles::C_OP_RenderPoints
        {
        public:
            // metadata: MPropertyFriendlyName "animation rate"
            float m_flAnimationRate; // 0x230            
            // metadata: MPropertyFriendlyName "animation type"
            source2sdk::particleslib::AnimationType_t m_nAnimationType; // 0x234            
            // metadata: MPropertyFriendlyName "set animation value in FPS"
            bool m_bAnimateInFPS; // 0x238            
            uint8_t _pad0239[0x3]; // 0x239
            // metadata: MPropertyFriendlyName "minimum visual size"
            float m_flMinSize; // 0x23c            
            // metadata: MPropertyFriendlyName "maximum visual size"
            float m_flMaxSize; // 0x240            
            // metadata: MPropertyFriendlyName "size at which to start fading"
            float m_flStartFadeSize; // 0x244            
            // metadata: MPropertyFriendlyName "size at which to fade away"
            float m_flEndFadeSize; // 0x248            
            uint8_t _pad024c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderLights because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderLights) == 0x250);
    };
};
