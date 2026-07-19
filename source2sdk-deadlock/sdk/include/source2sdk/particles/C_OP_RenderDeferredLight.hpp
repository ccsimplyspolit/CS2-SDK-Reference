#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Size: 0x920
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderDeferredLight : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "projected texture use alpha test window"
            // metadata: MPropertySuppressExpr "!m_bUseTexture"
            bool m_bUseAlphaTestWindow; // 0x228            
            // metadata: MPropertyFriendlyName "projected texture light"
            bool m_bUseTexture; // 0x229            
            uint8_t _pad022a[0x2]; // 0x22a
            // metadata: MPropertyStartGroup "+Renderer Modifiers"
            // metadata: MPropertyFriendlyName "radius scale"
            // metadata: MPropertySortPriority "700"
            float m_flRadiusScale; // 0x22c            
            // metadata: MPropertyFriendlyName "alpha scale"
            // metadata: MPropertySortPriority "700"
            float m_flAlphaScale; // 0x230            
            // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x234            
            // metadata: MPropertyFriendlyName "color blend"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x238            
            // metadata: MPropertyFriendlyName "color blend type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x8f0            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "spotlight distance"
            float m_flLightDistance; // 0x8f4            
            // metadata: MPropertyFriendlyName "light start falloff"
            float m_flStartFalloff; // 0x8f8            
            // metadata: MPropertyFriendlyName "spotlight distance falloff"
            float m_flDistanceFalloff; // 0x8fc            
            // metadata: MPropertyFriendlyName "spotlight FoV"
            float m_flSpotFoV; // 0x900            
            // metadata: MPropertyFriendlyName "projected texture alpha test point scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "!m_bUseTexture"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x904            
            // metadata: MPropertyFriendlyName "projected texture alpha test range scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "!m_bUseTexture"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x908            
            // metadata: MPropertyFriendlyName "projected texture alpha test sharpness scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "!m_bUseTexture"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x90c            
            // metadata: MPropertyFriendlyName "texture"
            // metadata: MPropertySuppressExpr "!m_bUseTexture"
            // m_hTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hTexture;
            char m_hTexture[0x8]; // 0x910            
            // metadata: MPropertyFriendlyName "HSV Shift Control Point"
            std::int32_t m_nHSVShiftControlPoint; // 0x918            
            uint8_t _pad091c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderDeferredLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderDeferredLight) == 0x920);
    };
};
