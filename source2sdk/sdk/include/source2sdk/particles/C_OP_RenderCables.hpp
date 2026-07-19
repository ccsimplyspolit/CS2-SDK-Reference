#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/FloatInputMaterialVariable_t.hpp"
#include "source2sdk/particles/TextureRepetitionMode_t.hpp"
#include "source2sdk/particles/VecInputMaterialVariable_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/ParticleColorBlendType_t.hpp"
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
        // Size: 0x1540
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderCables : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyStartGroup "Renderer Modifiers"
            // metadata: MPropertyFriendlyName "Radius Scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x228            
            // metadata: MPropertyFriendlyName "alpha scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x398            
            // metadata: MPropertyFriendlyName "color blend"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x508            
            // metadata: MPropertyFriendlyName "color blend type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::ParticleColorBlendType_t m_nColorBlendType; // 0xbc0            
            uint8_t _pad0bc4[0x4]; // 0xbc4
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "cable material"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmat, *extraFilterString=(shader=cables.vfx) )"
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0xbc8            
            // metadata: MPropertyFriendlyName "texture repetition mode"
            source2sdk::particles::TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xbd0            
            uint8_t _pad0bd4[0x4]; // 0xbd4
            // metadata: MPropertyFriendlyName "texture repetitions"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xbd8            
            // metadata: MPropertyFriendlyName "texture repetitions around cable"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xd48            
            // metadata: MPropertyFriendlyName "color map offset along path"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xeb8            
            // metadata: MPropertyFriendlyName "color map offset around cable"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flColorMapOffsetU; // 0x1028            
            // metadata: MPropertyFriendlyName "normal map offset along path"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x1198            
            // metadata: MPropertyFriendlyName "normal map offset around cable"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1308            
            // metadata: MPropertyFriendlyName "draw caps at each end of the cable"
            bool m_bDrawCableCaps; // 0x1478            
            uint8_t _pad1479[0x3]; // 0x1479
            // metadata: MPropertyFriendlyName "cable end cap shape factor"
            // metadata: MPropertyAttributeRange "0 2"
            float m_flCapRoundness; // 0x147c            
            // metadata: MPropertyFriendlyName "cable end cap offset amount"
            // metadata: MPropertyAttributeRange "0 2"
            float m_flCapOffsetAmount; // 0x1480            
            // metadata: MPropertyFriendlyName "tessellation scale factor"
            float m_flTessScale; // 0x1484            
            // metadata: MPropertyFriendlyName "minimum steps between particles"
            std::int32_t m_nMinTesselation; // 0x1488            
            // metadata: MPropertyFriendlyName "maximum steps between particles"
            std::int32_t m_nMaxTesselation; // 0x148c            
            // metadata: MPropertyFriendlyName "roundness factor"
            // metadata: MPropertyAttributeRange "0 3"
            std::int32_t m_nRoundness; // 0x1490            
            // metadata: MPropertyFriendlyName "force roundness factor fixed"
            bool m_nForceRoundnessFixed; // 0x1494            
            // metadata: MPropertyFriendlyName "Only Render in effects bloom pass"
            // metadata: MPropertySortPriority "1100"
            bool m_bOnlyRenderInEffectsBloomPass; // 0x1495            
            uint8_t _pad1496[0x2]; // 0x1496
            // metadata: MPropertyFriendlyName "diffuse lighting origin"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleTransformInput m_LightingTransform; // 0x1498            
            // metadata: MPropertyFriendlyName "material float variables"
            // m_MaterialFloatVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::particles::FloatInputMaterialVariable_t> m_MaterialFloatVars;
            char m_MaterialFloatVars[0x10]; // 0x1500            
            uint8_t _pad1510[0x10]; // 0x1510
            // metadata: MPropertyFriendlyName "material vector variables"
            // m_MaterialVecVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::particles::VecInputMaterialVariable_t> m_MaterialVecVars;
            char m_MaterialVecVars[0x10]; // 0x1520            
            uint8_t _pad1530[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderCables because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderCables) == 0x1540);
    };
};
