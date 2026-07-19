#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CMaterialDrawDescriptor_RigidMeshPart_t.hpp"
#include "source2sdk/modellib/CRenderBufferBinding.hpp"
#include "source2sdk/modellib/RenderPrimitiveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x118
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMaterialDrawDescriptor
        {
        public:
            float m_flUvDensity; // 0x0            
            Vector m_vTintColor; // 0x4            
            float m_flAlpha; // 0x10            
            uint8_t _pad0014[0x2]; // 0x14
            std::uint16_t m_nNumMeshlets; // 0x16            
            uint8_t _pad0018[0x4]; // 0x18
            std::uint32_t m_nFirstMeshlet; // 0x1c            
            std::uint32_t m_nAppliedIndexOffset; // 0x20            
            std::uint8_t m_nDepthVertexBufferIndex; // 0x24            
            std::uint8_t m_nMeshletPackedIVBIndex; // 0x25            
            uint8_t _pad0026[0x2]; // 0x26
            // m_rigidMeshParts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t> m_rigidMeshParts;
            char m_rigidMeshParts[0x10]; // 0x28            
            // m_rootBvhNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<std::uint16_t> m_rootBvhNodes;
            char m_rootBvhNodes[0x10]; // 0x38            
            source2sdk::modellib::RenderPrimitiveType_t m_nPrimitiveType; // 0x48            
            std::int32_t m_nBaseVertex; // 0x4c            
            std::int32_t m_nVertexCount; // 0x50            
            std::int32_t m_nStartIndex; // 0x54            
            std::int32_t m_nIndexCount; // 0x58            
            uint8_t _pad005c[0x64]; // 0x5c
            source2sdk::modellib::CRenderBufferBinding m_indexBuffer; // 0xc0            
            source2sdk::modellib::CRenderBufferBinding m_meshletPackedIVB; // 0xe0            
            uint8_t _pad0100[0x10]; // 0x100
            // m_material has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_material;
            char m_material[0x8]; // 0x110            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_flUvDensity) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_vTintColor) == 0x4);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_flAlpha) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nNumMeshlets) == 0x16);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nFirstMeshlet) == 0x1c);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nAppliedIndexOffset) == 0x20);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nDepthVertexBufferIndex) == 0x24);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nMeshletPackedIVBIndex) == 0x25);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_rigidMeshParts) == 0x28);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_rootBvhNodes) == 0x38);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nPrimitiveType) == 0x48);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nBaseVertex) == 0x4c);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nVertexCount) == 0x50);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nStartIndex) == 0x54);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nIndexCount) == 0x58);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_indexBuffer) == 0xc0);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_meshletPackedIVB) == 0xe0);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_material) == 0x110);
        
        static_assert(sizeof(source2sdk::modellib::CMaterialDrawDescriptor) == 0x118);
    };
};
