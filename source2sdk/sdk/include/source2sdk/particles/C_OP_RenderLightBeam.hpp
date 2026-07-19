#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleLightFogLightingMode_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/ParticleColorBlendType_t.hpp"

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
        // Size: 0x1f98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderLightBeam : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "maximum light count"
            // metadata: MPropertyAttributeRange "1 512"
            std::uint16_t m_nMaxAllowed; // 0x228            
            uint8_t _pad022a[0x6]; // 0x22a
            // metadata: MPropertyFriendlyName "Color Blend"
            source2sdk::particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x230            
            // metadata: MPropertyFriendlyName "Color Blend Type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::ParticleColorBlendType_t m_nColorBlendType; // 0x8e8            
            uint8_t _pad08ec[0x4]; // 0x8ec
            // metadata: MPropertyFriendlyName "light style"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/light_styles.vdata )"
            CUtlString m_strLightStyle; // 0x8f0            
            // metadata: MPropertyFriendlyName "light style time"
            // metadata: MPropertySuppressExpr "m_strLightStyle == ''"
            source2sdk::particleslib::CPerParticleFloatInput m_flLightStyleTime; // 0x8f8            
            // metadata: MPropertyFriendlyName "Lumens Per Meter"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0xa68            
            // metadata: MPropertyFriendlyName "Number Of Lights To Create"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flNumberOfLightsToCreate; // 0xbd8            
            // metadata: MPropertyFriendlyName "Shadows"
            // metadata: MPropertySuppressExpr "mod == csgo"
            bool m_bCastShadows; // 0xd48            
            // metadata: MPropertyFriendlyName "Dynamic Bounce (RTGI)"
            // metadata: MPropertySuppressExpr "!m_bCastShadows || mod == csgo"
            bool m_bDynamicBounce; // 0xd49            
            uint8_t _pad0d4a[0x6]; // 0xd4a
            // metadata: MPropertyFriendlyName "Bounce Scale"
            // metadata: MPropertySuppressExpr "!m_bDynamicBounce"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBounceScale; // 0xd50            
            // metadata: MPropertyFriendlyName "Skirt"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSkirt; // 0xec0            
            // metadata: MPropertyFriendlyName "Range"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRange; // 0x1030            
            // metadata: MPropertyFriendlyName "Thickness"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flThickness; // 0x11a0            
            // metadata: MPropertyFriendlyName "Inner Cone Angle"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInnerConeAngle; // 0x1310            
            // metadata: MPropertyFriendlyName "Outer Cone Angle"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOuterConeAngle; // 0x1480            
            // metadata: MPropertyFriendlyName "Cone Angle Offset"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecConeRotationOffset; // 0x15f0            
            // metadata: MPropertyFriendlyName "fog lighting mode"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            source2sdk::particles::ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x1ca8            
            uint8_t _pad1cac[0x4]; // 0x1cac
            // metadata: MPropertyFriendlyName "fog contribution"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1cb0            
            // metadata: MPropertyFriendlyName "render filter"
            source2sdk::particleslib::CPerParticleFloatInput m_flRenderFilter; // 0x1e20            
            // metadata: MPropertyFriendlyName "debug orientation"
            bool m_bDebugOrientation; // 0x1f90            
            uint8_t _pad1f91[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderLightBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderLightBeam) == 0x1f98);
    };
};
