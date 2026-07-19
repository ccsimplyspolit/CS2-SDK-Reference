#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ModelReference_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/RenderModelSubModelFieldType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0x2ca8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderModels : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Only Render in effects bloom pass"
            // metadata: MPropertySortPriority "1100"
            bool m_bOnlyRenderInEffectsBloomPass; // 0x228            
            // metadata: MPropertyFriendlyName "Only Render in effects water pass"
            // metadata: MPropertySortPriority "1050"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bOnlyRenderInEffectsWaterPass; // 0x229            
            // metadata: MPropertyFriendlyName "Use Mixed Resolution Rendering"
            // metadata: MPropertySortPriority "1200"
            bool m_bUseMixedResolutionRendering; // 0x22a            
            // metadata: MPropertyFriendlyName "Only Render in effects game overlay pass"
            // metadata: MPropertySortPriority "1210"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bOnlyRenderInEffecsGameOverlay; // 0x22b            
            uint8_t _pad022c[0x4]; // 0x22c
            // metadata: MPropertyFriendlyName "models"
            // metadata: MParticleRequireDefaultArrayEntry
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "775"
            // m_ModelList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ModelReference_t> m_ModelList;
            char m_ModelList[0x18]; // 0x230            
            // metadata: MPropertyFriendlyName "bodygroup field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nBodyGroupField; // 0x248            
            // metadata: MPropertyFriendlyName "submodel field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nSubModelField; // 0x24c            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "ignore normal"
            // metadata: MPropertySortPriority "750"
            bool m_bIgnoreNormal; // 0x250            
            // metadata: MPropertyFriendlyName "orient model z to normal"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_bIgnoreNormal"
            bool m_bOrientZ; // 0x251            
            // metadata: MPropertyFriendlyName "center mesh"
            // metadata: MPropertySortPriority "750"
            bool m_bCenterOffset; // 0x252            
            uint8_t _pad0253[0x5]; // 0x253
            // metadata: MPropertyFriendlyName "model local offset"
            // metadata: MPropertySortPriority "750"
            source2sdk::particleslib::CPerParticleVecInput m_vecLocalOffset; // 0x258            
            // metadata: MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
            // metadata: MPropertySortPriority "750"
            source2sdk::particleslib::CPerParticleVecInput m_vecLocalRotation; // 0x910            
            // metadata: MPropertyStartGroup "Model Scale"
            // metadata: MPropertyFriendlyName "ignore radius"
            // metadata: MPropertySortPriority "700"
            bool m_bIgnoreRadius; // 0xfc8            
            uint8_t _pad0fc9[0x3]; // 0xfc9
            // metadata: MPropertyFriendlyName "model scale CP"
            // metadata: MPropertySortPriority "700"
            std::int32_t m_nModelScaleCP; // 0xfcc            
            // metadata: MPropertyFriendlyName "model component scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CPerParticleVecInput m_vecComponentScale; // 0xfd0            
            // metadata: MPropertyFriendlyName "apply scales in local model space"
            // metadata: MPropertySortPriority "700"
            bool m_bLocalScale; // 0x1688            
            uint8_t _pad1689[0x3]; // 0x1689
            // metadata: MPropertyFriendlyName "model size cull bloat"
            // metadata: MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
            std::int32_t m_nSizeCullBloat; // 0x168c            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animated"
            // metadata: MPropertySortPriority "500"
            bool m_bAnimated; // 0x1690            
            uint8_t _pad1691[0x7]; // 0x1691
            // metadata: MPropertyFriendlyName "animation rate"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            source2sdk::particleslib::CPerParticleFloatInput m_flAnimationRate; // 0x1698            
            // metadata: MPropertyFriendlyName "scale animation rate"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bScaleAnimationRate; // 0x1808            
            // metadata: MPropertyFriendlyName "force looping animations"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bForceLoopingAnimation; // 0x1809            
            // metadata: MPropertyFriendlyName "reset animation frame on stop"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bResetAnimOnStop; // 0x180a            
            // metadata: MPropertyFriendlyName "set animation frame manually"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bManualAnimFrame; // 0x180b            
            // metadata: MPropertyFriendlyName "animation rate scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bScaleAnimationRate)"
            source2sdk::particles::ParticleAttributeIndex_t m_nAnimationScaleField; // 0x180c            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animation sequence field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            source2sdk::particles::ParticleAttributeIndex_t m_nAnimationField; // 0x1810            
            // metadata: MPropertyFriendlyName "manual animation frame field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
            source2sdk::particles::ParticleAttributeIndex_t m_nManualFrameField; // 0x1814            
            // metadata: MPropertyFriendlyName "activity override"
            // metadata: MPropertySuppressExpr "mod != dota"
            // metadata: MPropertySortPriority "500"
            char m_ActivityName[256]; // 0x1818            
            // metadata: MPropertyFriendlyName "sequence override"
            // metadata: MPropertySuppressExpr "mod == dota"
            // metadata: MPropertySortPriority "500"
            char m_SequenceName[256]; // 0x1918            
            // metadata: MPropertyFriendlyName "Enable Cloth Simulation"
            bool m_bEnableClothSimulation; // 0x1a18            
            // metadata: MPropertyFriendlyName "With Cloth Effect"
            // metadata: MPropertySortPriority "500"
            char m_ClothEffectName[64]; // 0x1a19            
            uint8_t _pad1a59[0x7]; // 0x1a59
            // metadata: MPropertyStartGroup "Material"
            // metadata: MPropertyFriendlyName "material override"
            // metadata: MPropertySortPriority "600"
            // m_hOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial;
            char m_hOverrideMaterial[0x8]; // 0x1a60            
            // metadata: MPropertyFriendlyName "override translucent materials"
            // metadata: MPropertySortPriority "600"
            bool m_bOverrideTranslucentMaterials; // 0x1a68            
            uint8_t _pad1a69[0x7]; // 0x1a69
            // metadata: MPropertyFriendlyName "skin number"
            // metadata: MPropertySortPriority "600"
            source2sdk::particleslib::CPerParticleFloatInput m_nSkin; // 0x1a70            
            // metadata: MPropertyFriendlyName "material variables"
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "600"
            // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::MaterialVariable_t> m_MaterialVars;
            char m_MaterialVars[0x18]; // 0x1be0            
            // metadata: MPropertyStartGroup "Model Overrides"
            // metadata: MPropertyFriendlyName "render filter"
            source2sdk::particleslib::CPerParticleFloatInput m_flRenderFilter; // 0x1bf8            
            // metadata: MPropertyFriendlyName "model list selection override"
            source2sdk::particleslib::CPerParticleFloatInput m_flManualModelSelection; // 0x1d68            
            // metadata: MPropertyFriendlyName "input model"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x1ed8            
            // metadata: MPropertyFriendlyName "model LOD"
            std::int32_t m_nLOD; // 0x1f38            
            // metadata: MPropertyFriendlyName "model override economy loadout slot type"
            char m_EconSlotName[256]; // 0x1f3c            
            // metadata: MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
            bool m_bOriginalModel; // 0x203c            
            // metadata: MPropertyFriendlyName "suppress tinting of the model"
            bool m_bSuppressTint; // 0x203d            
            uint8_t _pad203e[0x2]; // 0x203e
            // metadata: MPropertyFriendlyName "SubModel Field Type"
            source2sdk::particles::RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x2040            
            // metadata: MPropertyFriendlyName "disable shadows"
            bool m_bDisableShadows; // 0x2044            
            // metadata: MPropertyFriendlyName "disable depth prepass"
            bool m_bDisableDepthPrepass; // 0x2045            
            // metadata: MPropertyFriendlyName "accept decals"
            bool m_bAcceptsDecals; // 0x2046            
            // metadata: MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
            bool m_bForceDrawInterlevedWithSiblings; // 0x2047            
            // metadata: MPropertyFriendlyName "do not draw in particle pass"
            bool m_bDoNotDrawInParticlePass; // 0x2048            
            // metadata: MPropertyFriendlyName "allow approximate transforms (cpu optimizaiton)"
            bool m_bAllowApproximateTransforms; // 0x2049            
            // metadata: MPropertyFriendlyName "render attribute"
            char m_szRenderAttribute[260]; // 0x204a            
            uint8_t _pad214e[0x2]; // 0x214e
            // metadata: MPropertyStartGroup "+Renderer Modifiers"
            // metadata: MPropertyFriendlyName "Radius Scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x2150            
            // metadata: MPropertyFriendlyName "alpha scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x22c0            
            // metadata: MPropertyFriendlyName "rotation roll scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x2430            
            // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x25a0            
            uint8_t _pad25a4[0x4]; // 0x25a4
            // metadata: MPropertyFriendlyName "color blend"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x25a8            
            // metadata: MPropertyFriendlyName "color blend type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x2c60            
            uint8_t _pad2c64[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderModels because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderModels) == 0x2ca8);
    };
};
