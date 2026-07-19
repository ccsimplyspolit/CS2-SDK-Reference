#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/SpriteCardPerParticleScale_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"

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
        // Size: 0xa30
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TextureControls_t
        {
        public:
            // metadata: MPropertyFriendlyName "horizontal texture scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0            
            // metadata: MPropertyFriendlyName "vertical texture scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x170            
            // metadata: MPropertyFriendlyName "horizontal texture offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2e0            
            // metadata: MPropertyFriendlyName "vertical texture offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x450            
            // metadata: MPropertyFriendlyName "texture rotation / animation rate scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x5c0            
            // metadata: MPropertyFriendlyName "Infinite Zoom Scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flZoomScale; // 0x730            
            // metadata: MPropertyFriendlyName "Distortion Amount"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDistortion; // 0x8a0            
            // metadata: MPropertyFriendlyName "Randomize Initial Offset"
            bool m_bRandomizeOffsets; // 0xa10            
            // metadata: MPropertyFriendlyName "Clamp UVs"
            bool m_bClampUVs; // 0xa11            
            uint8_t _pad0a12[0x2]; // 0xa12
            // metadata: MPropertyFriendlyName "per-particle scalar for blend"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0xa14            
            // metadata: MPropertyFriendlyName "per-particle scalar for scale"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleScale; // 0xa18            
            // metadata: MPropertyFriendlyName "per-particle scalar for horizontal offset"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0xa1c            
            // metadata: MPropertyFriendlyName "per-particle scalar for vertical offset"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0xa20            
            // metadata: MPropertyFriendlyName "per-particle scalar for rotation"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0xa24            
            // metadata: MPropertyFriendlyName "per-particle scalar for zoom"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0xa28            
            // metadata: MPropertyFriendlyName "per-particle scalar for distortion"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0xa2c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in TextureControls_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::TextureControls_t) == 0xa30);
    };
};
