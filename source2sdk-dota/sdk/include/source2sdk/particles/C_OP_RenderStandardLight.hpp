#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleLightBehaviorChoiceList_t.hpp"
#include "source2sdk/particles/ParticleLightFogLightingMode_t.hpp"
#include "source2sdk/particles/ParticleLightTypeChoiceList_t.hpp"
#include "source2sdk/particles/StandardLightingAttenuationStyle_t.hpp"
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
        // Size: 0x17b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderStandardLight : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "light type"
            source2sdk::particles::ParticleLightTypeChoiceList_t m_nLightType; // 0x228            
            // metadata: MPropertyFriendlyName "maximum light count"
            // metadata: MPropertyAttributeRange "1 512"
            std::uint16_t m_nMaxAllowed; // 0x22c            
            uint8_t _pad022e[0x2]; // 0x22e
            // metadata: MPropertyFriendlyName "color blend"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x230            
            // metadata: MPropertyFriendlyName "color blend type"
            source2sdk::particleslib::ParticleColorBlendType_t m_nColorBlendType; // 0x8e8            
            uint8_t _pad08ec[0x4]; // 0x8ec
            // metadata: MPropertyFriendlyName "light style"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/light_styles.vdata )"
            CUtlString m_strLightStyle; // 0x8f0            
            // metadata: MPropertyFriendlyName "light style time"
            // metadata: MPropertySuppressExpr "m_strLightStyle == ''"
            source2sdk::particleslib::CPerParticleFloatInput m_flLightStyleTime; // 0x8f8            
            // metadata: MPropertyFriendlyName "intensity"
            source2sdk::particleslib::CPerParticleFloatInput m_flIntensity; // 0xa68            
            // metadata: MPropertyFriendlyName "cast shadows"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            bool m_bCastShadows; // 0xbd8            
            // metadata: MPropertyFriendlyName "dynamic bounce (RTGI)"
            // metadata: MPropertySuppressExpr "!m_bCastShadows || m_nLightType == PARTICLE_LIGHT_TYPE_FX || mod == csgo"
            bool m_bDynamicBounce; // 0xbd9            
            uint8_t _pad0bda[0x6]; // 0xbda
            // metadata: MPropertyFriendlyName "bounce scale"
            // metadata: MPropertySuppressExpr "!m_bDynamicBounce"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBounceScale; // 0xbe0            
            // metadata: MPropertyFriendlyName "inner cone angle"
            // metadata: MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flTheta; // 0xd50            
            // metadata: MPropertyFriendlyName "outer cone angle"
            // metadata: MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flPhi; // 0xec0            
            // metadata: MPropertyFriendlyName "light radius multiplier"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusMultiplier; // 0x1030            
            // metadata: MPropertyFriendlyName "attenuation type"
            source2sdk::particles::StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0x11a0            
            uint8_t _pad11a4[0x4]; // 0x11a4
            // metadata: MPropertyFriendlyName "falloff linearity"
            // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flFalloffLinearity; // 0x11a8            
            // metadata: MPropertyFriendlyName "falloff fifty percent"
            // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0x1318            
            // metadata: MPropertyFriendlyName "falloff zero percent"
            // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x1488            
            // metadata: MPropertyFriendlyName "render diffuse"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            bool m_bRenderDiffuse; // 0x15f8            
            // metadata: MPropertyFriendlyName "render specular"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            bool m_bRenderSpecular; // 0x15f9            
            uint8_t _pad15fa[0x6]; // 0x15fa
            // metadata: MPropertyFriendlyName "light cookie string"
            CUtlString m_lightCookie; // 0x1600            
            // metadata: MPropertyFriendlyName "light priority"
            std::int32_t m_nPriority; // 0x1608            
            // metadata: MPropertyFriendlyName "fog lighting mode"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            source2sdk::particles::ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x160c            
            // metadata: MPropertyFriendlyName "fog contribution"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1610            
            // metadata: MPropertyFriendlyName "capsule behavior"
            source2sdk::particles::ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x1780            
            // metadata: MPropertyStartGroup "Capsule Light Controls"
            // metadata: MPropertyFriendlyName "capsule length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
            float m_flCapsuleLength; // 0x1784            
            // metadata: MPropertyFriendlyName "reverse point order"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
            bool m_bReverseOrder; // 0x1788            
            // metadata: MPropertyFriendlyName "Closed loop"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
            bool m_bClosedLoop; // 0x1789            
            uint8_t _pad178a[0x2]; // 0x178a
            // metadata: MPropertyFriendlyName "Anchor point source"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            source2sdk::particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x178c            
            // metadata: MPropertyFriendlyName "max length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flMaxLength; // 0x1790            
            // metadata: MPropertyFriendlyName "min length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flMinLength; // 0x1794            
            // metadata: MPropertyFriendlyName "ignore delta time"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            bool m_bIgnoreDT; // 0x1798            
            uint8_t _pad1799[0x3]; // 0x1799
            // metadata: MPropertyFriendlyName "constrain radius to no more than this times the length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flConstrainRadiusToLengthRatio; // 0x179c            
            // metadata: MPropertyFriendlyName "amount to scale trail length by"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flLengthScale; // 0x17a0            
            // metadata: MPropertyFriendlyName "how long before a trail grows to its full length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flLengthFadeInTime; // 0x17a4            
            uint8_t _pad17a8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderStandardLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderStandardLight) == 0x17b0);
    };
};
