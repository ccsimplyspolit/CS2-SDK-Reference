#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/CReplicationParameters.hpp"
#include "source2sdk/particles/ParticleLightingQuality_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererVecInput.hpp"

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
        // Size: 0x5248
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderSprites : public source2sdk::particles::CBaseRendererSource2
        {
        public:
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "sequence id override"
            // metadata: MPropertySortPriority "500"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2df0            
            // metadata: MPropertyFriendlyName "Sequence Numbers Are Indices (Tools Particles Only)"
            // metadata: MParticleAdvancedField
            bool m_bSequenceNumbersAreRawSequenceIndices; // 0x2f60            
            uint8_t _pad2f61[0x3]; // 0x2f61
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "orientation type"
            // metadata: MPropertySortPriority "750"
            source2sdk::particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2f64            
            // metadata: MPropertyFriendlyName "orientation control point"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            std::int32_t m_nOrientationControlPoint; // 0x2f68            
            // metadata: MPropertyFriendlyName "enable yaw for particles aligned to normals"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            bool m_bUseYawWithNormalAligned; // 0x2f6c            
            uint8_t _pad2f6d[0x3]; // 0x2f6d
            // metadata: MPropertyStartGroup "Fading and culling"
            // metadata: MPropertyFriendlyName "minimum visual screen size"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flMinSize; // 0x2f70            
            // metadata: MPropertyFriendlyName "maximum visual screen size"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flMaxSize; // 0x30e0            
            // metadata: MPropertyFriendlyName "Factor to map size adjustment to alpha"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x3250            
            // metadata: MPropertyFriendlyName "screen size to start fading"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x33c0            
            // metadata: MPropertyFriendlyName "screen size to fade away"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x3530            
            // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flStartFadeDot; // 0x36a0            
            // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flEndFadeDot; // 0x36a4            
            // metadata: MPropertyStartGroup "Distance to alpha coding"
            // metadata: MPropertyFriendlyName "distance alpha"
            // metadata: MPropertySortPriority "0"
            bool m_bDistanceAlpha; // 0x36a8            
            // metadata: MPropertyFriendlyName "use soft edges for distance alpha"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
            bool m_bSoftEdges; // 0x36a9            
            uint8_t _pad36aa[0x2]; // 0x36aa
            // metadata: MPropertyFriendlyName "start value for soft edges for distance alpha"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
            float m_flEdgeSoftnessStart; // 0x36ac            
            // metadata: MPropertyFriendlyName "end value for soft edges for distance alpha"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
            float m_flEdgeSoftnessEnd; // 0x36b0            
            // metadata: MPropertyStartGroup "Outlining"
            // metadata: MPropertyFriendlyName "enable particle outlining"
            // metadata: MPropertySortPriority "0"
            bool m_bOutline; // 0x36b4            
            // metadata: MPropertyFriendlyName "outline color"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            Color m_OutlineColor; // 0x36b5            
            uint8_t _pad36b9[0x3]; // 0x36b9
            // metadata: MPropertyFriendlyName "outline alpha"
            // metadata: MPropertyAttributeRange "0 255"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            std::int32_t m_nOutlineAlpha; // 0x36bc            
            // metadata: MPropertyFriendlyName "outline start 0"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineStart0; // 0x36c0            
            // metadata: MPropertyFriendlyName "outline start 1"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineStart1; // 0x36c4            
            // metadata: MPropertyFriendlyName "outline end 0"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineEnd0; // 0x36c8            
            // metadata: MPropertyFriendlyName "outline end 1"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineEnd1; // 0x36cc            
            // metadata: MPropertyStartGroup "Lighting and Shadows"
            // metadata: MPropertyFriendlyName "lighting mode"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particles::ParticleLightingQuality_t m_nLightingMode; // 0x36d0            
            uint8_t _pad36d4[0x4]; // 0x36d4
            // metadata: MPropertyFriendlyName "lighting override"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "m_nLightingMode != PARTICLE_LIGHTING_OVERRIDE_POSITION && m_nLightingMode != PARTICLE_LIGHTING_OVERRIDE_COLOR && m_nLightingMode != PARTICLE_LIGHTING_ADD_EXTRA_LIGHT"
            source2sdk::particleslib::CParticleCollectionRendererVecInput m_vecLightingOverride; // 0x36d8            
            // metadata: MPropertyFriendlyName "vertex lighting tessellation (0-5)"
            // metadata: MPropertyAttributeRange "0 5"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x3d90            
            // metadata: MPropertyFriendlyName "lighting directionality"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x3f00            
            // metadata: MPropertyFriendlyName "Particle Shadows"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bParticleShadows; // 0x4070            
            uint8_t _pad4071[0x3]; // 0x4071
            // metadata: MPropertyFriendlyName "Shadow Density"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "!m_bParticleShadows"
            float m_flShadowDensity; // 0x4074            
            // metadata: MPropertyStartGroup "Replication"
            // metadata: MPropertyFriendlyName "Replication settings"
            source2sdk::particles::CReplicationParameters m_replicationParameters; // 0x4078            
            uint8_t _pad5240[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderSprites because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderSprites) == 0x5248);
    };
};
