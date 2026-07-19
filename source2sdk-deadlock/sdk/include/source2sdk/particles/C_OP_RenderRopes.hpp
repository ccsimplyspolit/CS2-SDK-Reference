#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
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
        // Size: 0x32b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderRopes : public source2sdk::particles::CBaseRendererSource2
        {
        public:
            // metadata: MPropertyStartGroup "Screenspace Fading and culling"
            // metadata: MPropertyFriendlyName "enable fading and clamping"
            // metadata: MPropertySortPriority "1000"
            bool m_bEnableFadingAndClamping; // 0x2df0            
            uint8_t _pad2df1[0x3]; // 0x2df1
            // metadata: MPropertyFriendlyName "minimum visual screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flMinSize; // 0x2df4            
            // metadata: MPropertyFriendlyName "maximum visual screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flMaxSize; // 0x2df8            
            // metadata: MPropertyFriendlyName "start fade screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flStartFadeSize; // 0x2dfc            
            // metadata: MPropertyFriendlyName "end fade and cull screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flEndFadeSize; // 0x2e00            
            // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flStartFadeDot; // 0x2e04            
            // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flEndFadeDot; // 0x2e08            
            // metadata: MPropertyStartGroup "Rope Tesselation"
            // metadata: MPropertyFriendlyName "amount to taper the width of the trail end by"
            float m_flRadiusTaper; // 0x2e0c            
            // metadata: MPropertyFriendlyName "minium number of quads per render segment"
            // metadata: MPropertySortPriority "850"
            std::int32_t m_nMinTesselation; // 0x2e10            
            // metadata: MPropertyFriendlyName "maximum number of quads per render segment"
            std::int32_t m_nMaxTesselation; // 0x2e14            
            // metadata: MPropertyFriendlyName "tesselation resolution scale factor"
            float m_flTessScale; // 0x2e18            
            uint8_t _pad2e1c[0x4]; // 0x2e1c
            // metadata: MPropertyStartGroup "+Rope Global UV Controls"
            // metadata: MPropertyFriendlyName "global texture V World Size"
            // metadata: MPropertySortPriority "800"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2e20            
            // metadata: MPropertyFriendlyName "global texture V Scroll Rate"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2f90            
            // metadata: MPropertyFriendlyName "global texture V Offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x3100            
            // metadata: MPropertyFriendlyName "global texture V Params CP"
            std::int32_t m_nTextureVParamsCP; // 0x3270            
            // metadata: MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
            bool m_bClampV; // 0x3274            
            uint8_t _pad3275[0x3]; // 0x3275
            // metadata: MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
            // metadata: MPropertyFriendlyName "scale CP start"
            std::int32_t m_nScaleCP1; // 0x3278            
            // metadata: MPropertyFriendlyName "scale CP end"
            std::int32_t m_nScaleCP2; // 0x327c            
            // metadata: MPropertyFriendlyName "scale V world size by CP distance"
            float m_flScaleVSizeByControlPointDistance; // 0x3280            
            // metadata: MPropertyFriendlyName "scale V scroll rate by CP distance"
            float m_flScaleVScrollByControlPointDistance; // 0x3284            
            // metadata: MPropertyFriendlyName "scale V offset by CP distance"
            float m_flScaleVOffsetByControlPointDistance; // 0x3288            
            uint8_t _pad328c[0x1]; // 0x328c
            // metadata: MPropertyStartGroup "Rope Global UV Controls"
            // metadata: MPropertyFriendlyName "Use scalar attribute for texture coordinate"
            bool m_bUseScalarForTextureCoordinate; // 0x328d            
            uint8_t _pad328e[0x2]; // 0x328e
            // metadata: MPropertyFriendlyName "scalar to use for texture coordinate"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
            source2sdk::particles::ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x3290            
            // metadata: MPropertyFriendlyName "scale value to map attribute to texture coordinate"
            // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
            float m_flScalarAttributeTextureCoordScale; // 0x3294            
            // metadata: MPropertyStartGroup "Rope Order Controls"
            // metadata: MPropertyFriendlyName "reverse point order"
            // metadata: MPropertySortPriority "800"
            bool m_bReverseOrder; // 0x3298            
            // metadata: MPropertyFriendlyName "Closed loop"
            bool m_bClosedLoop; // 0x3299            
            uint8_t _pad329a[0x2]; // 0x329a
            // metadata: MPropertyFriendlyName "attribute to use for rope segment id"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nSplitField; // 0x329c            
            // metadata: MPropertyFriendlyName "sort by rope segment id"
            // metadata: MPropertySuppressExpr "m_nSplitField == PARTICLE_ATTRIBUTE_UNUSED"
            bool m_bSortBySegmentID; // 0x32a0            
            uint8_t _pad32a1[0x3]; // 0x32a1
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "orientation_type"
            // metadata: MPropertySortPriority "750"
            source2sdk::particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x32a4            
            // metadata: MPropertyFriendlyName "attribute to use for normal"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x32a8            
            // metadata: MPropertyStartGroup "Material"
            // metadata: MPropertyFriendlyName "draw as opaque"
            bool m_bDrawAsOpaque; // 0x32ac            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "generate normals for cylinder"
            bool m_bGenerateNormals; // 0x32ad            
            uint8_t _pad32ae[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderRopes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderRopes) == 0x32b0);
    };
};
