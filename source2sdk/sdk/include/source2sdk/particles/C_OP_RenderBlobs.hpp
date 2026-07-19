#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderBlobs : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "cube width"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_cubeWidth; // 0x228            
            // metadata: MPropertyFriendlyName "cutoff radius"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x398            
            // metadata: MPropertyFriendlyName "render radius"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_renderRadius; // 0x508            
            // metadata: MPropertyFriendlyName "(optional) vertex buffer size (k)"
            // metadata: MPropertyAttributeRange "0 1024"
            std::uint32_t m_nVertexCountKb; // 0x678            
            // metadata: MPropertyFriendlyName "(optional) index buffer size (k)"
            // metadata: MPropertyAttributeRange "0 1024"
            std::uint32_t m_nIndexCountKb; // 0x67c            
            // metadata: MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
            std::int32_t m_nScaleCP; // 0x680            
            uint8_t _pad0684[0x4]; // 0x684
            // metadata: MPropertyFriendlyName "material variables"
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "600"
            // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::MaterialVariable_t> m_MaterialVars;
            char m_MaterialVars[0x18]; // 0x688            
            uint8_t _pad06a0[0x18]; // 0x6a0
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x6b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderBlobs because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderBlobs) == 0x6c0);
    };
};
