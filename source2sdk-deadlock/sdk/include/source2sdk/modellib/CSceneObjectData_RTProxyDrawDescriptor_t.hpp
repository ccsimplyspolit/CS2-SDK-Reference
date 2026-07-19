#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CMaterialDrawDescriptor.hpp"
#include "source2sdk/modellib/VertexAlbedoFormat_t.hpp"

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
        // Size: 0x140
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CSceneObjectData_RTProxyDrawDescriptor_t
        {
        public:
            source2sdk::modellib::CMaterialDrawDescriptor m_drawDesc; // 0x0            
            matrix3x4_t m_mWorldFromLocal; // 0x108            
            source2sdk::modellib::VertexAlbedoFormat_t m_nVertexAlbedoFormat; // 0x138            
            std::int8_t m_nVertexAlbedoVB; // 0x139            
            std::uint16_t m_nVertexAlbedoOffset; // 0x13a            
            std::uint16_t m_nVertexAlbedoStride; // 0x13c            
            uint8_t _pad013e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_drawDesc) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_mWorldFromLocal) == 0x108);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoFormat) == 0x138);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoVB) == 0x139);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoOffset) == 0x13a);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoStride) == 0x13c);
        
        static_assert(sizeof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t) == 0x140);
    };
};
