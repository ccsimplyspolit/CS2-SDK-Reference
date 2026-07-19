#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CBaseTrailRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
        // Size: 0x45c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_RenderTrails : public source2sdk::particles::CBaseTrailRenderer
        {
        public:
            // metadata: MPropertyStartGroup "Screenspace Fading and culling"
            // metadata: MPropertyFriendlyName "enable fading and clamping"
            // metadata: MPropertySortPriority "1000"
            bool m_bEnableFadingAndClamping; // 0x3258            
            uint8_t _pad3259[0x3]; // 0x3259
            // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flStartFadeDot; // 0x325c            
            // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flEndFadeDot; // 0x3260            
            // metadata: MPropertyStartGroup "+Trail Length"
            // metadata: MPropertyFriendlyName "Anchor point source"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySortPriority "800"
            source2sdk::particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x3264            
            // metadata: MPropertyFriendlyName "max length"
            // metadata: MPropertySortPriority "800"
            float m_flMaxLength; // 0x3268            
            // metadata: MPropertyFriendlyName "min length"
            // metadata: MPropertySortPriority "800"
            float m_flMinLength; // 0x326c            
            // metadata: MPropertyFriendlyName "ignore delta time"
            // metadata: MPropertySortPriority "800"
            bool m_bIgnoreDT; // 0x3270            
            uint8_t _pad3271[0x3]; // 0x3271
            // metadata: MPropertyFriendlyName "constrain radius to no more than this times the length"
            // metadata: MPropertySortPriority "800"
            float m_flConstrainRadiusToLengthRatio; // 0x3274            
            // metadata: MPropertyFriendlyName "amount to scale trail length by"
            float m_flLengthScale; // 0x3278            
            // metadata: MPropertyFriendlyName "how long before a trail grows to its full length"
            float m_flLengthFadeInTime; // 0x327c            
            // metadata: MPropertyStartGroup "Trail Head & Tail"
            // metadata: MPropertyFriendlyName "head taper scale"
            // metadata: MPropertySortPriority "800"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadiusHeadTaper; // 0x3280            
            // metadata: MPropertyFriendlyName "head color scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHeadColorScale; // 0x33f0            
            // metadata: MPropertyFriendlyName "head alpha scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flHeadAlphaScale; // 0x3aa8            
            // metadata: MPropertyFriendlyName "tail taper scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadiusTaper; // 0x3c18            
            // metadata: MPropertyFriendlyName "tail color scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecTailColorScale; // 0x3d88            
            // metadata: MPropertyFriendlyName "tail alpha scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flTailAlphaScale; // 0x4440            
            // metadata: MPropertyStartGroup "Trail UV Controls"
            // metadata: MPropertyFriendlyName "texture UV horizontal Scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "800"
            source2sdk::particles::ParticleAttributeIndex_t m_nHorizCropField; // 0x45b0            
            // metadata: MPropertyFriendlyName "texture UV vertical Scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nVertCropField; // 0x45b4            
            // metadata: MPropertyFriendlyName "Trail forward shift (fraction)"
            float m_flForwardShift; // 0x45b8            
            // metadata: MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
            bool m_bFlipUVBasedOnPitchYaw; // 0x45bc            
            uint8_t _pad45bd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderTrails because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderTrails) == 0x45c0);
    };
};
