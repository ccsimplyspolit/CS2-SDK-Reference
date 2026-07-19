#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/modellib/VertexAlbedoFormat_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x44
        // Has Trivial Constructor
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RTProxyBLAS_t
        {
        public:
            std::uint32_t m_nFirstIndex; // 0x0            
            std::uint32_t m_nIndexCount; // 0x4            
            std::uint32_t m_nVBByteOffset; // 0x8            
            std::uint32_t m_nBaseVertex; // 0xc            
            std::uint16_t m_nVertexCount; // 0x10            
            source2sdk::modellib::VertexAlbedoFormat_t m_albedoFormat; // 0x12            
            uint8_t _pad0013[0x1]; // 0x13
            source2sdk::mathlib_extended::AABB_t m_boundLs; // 0x14            
            Vector m_vVertexOriginLs; // 0x2c            
            Vector m_vVertexExtentLs; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nFirstIndex) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nIndexCount) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nVBByteOffset) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nBaseVertex) == 0xc);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nVertexCount) == 0x10);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_albedoFormat) == 0x12);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_boundLs) == 0x14);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_vVertexOriginLs) == 0x2c);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_vVertexExtentLs) == 0x38);
        
        static_assert(sizeof(source2sdk::worldrenderer::RTProxyBLAS_t) == 0x44);
    };
};
