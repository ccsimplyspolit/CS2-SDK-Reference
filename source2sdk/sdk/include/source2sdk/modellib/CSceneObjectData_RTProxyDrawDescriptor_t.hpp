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
        // Size: 0x160
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CSceneObjectData_RTProxyDrawDescriptor_t
        {
        public:
            std::uint32_t m_materialGroupToken; // 0x0            
            std::int32_t m_nSrcDrawIndex; // 0x4            
            source2sdk::modellib::CMaterialDrawDescriptor m_drawDesc; // 0x8            
            matrix3x4_t m_mWorldFromLocal; // 0x120            
            source2sdk::modellib::VertexAlbedoFormat_t m_nVertexAlbedoFormat; // 0x150            
            std::int8_t m_nVertexAlbedoVB; // 0x151            
            std::uint16_t m_nVertexAlbedoOffset; // 0x152            
            std::uint16_t m_nVertexAlbedoStride; // 0x154            
            source2sdk::modellib::VertexAlbedoFormat_t m_nVertexEmissiveFormat; // 0x156            
            std::int8_t m_nVertexEmissiveVB; // 0x157            
            std::uint16_t m_nVertexEmissiveOffset; // 0x158            
            std::uint16_t m_nVertexEmissiveStride; // 0x15a            
            float m_fEmissiveFactor; // 0x15c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_materialGroupToken) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nSrcDrawIndex) == 0x4);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_drawDesc) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_mWorldFromLocal) == 0x120);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoFormat) == 0x150);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoVB) == 0x151);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoOffset) == 0x152);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoStride) == 0x154);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexEmissiveFormat) == 0x156);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexEmissiveVB) == 0x157);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexEmissiveOffset) == 0x158);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexEmissiveStride) == 0x15a);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_fEmissiveFactor) == 0x15c);
        
        static_assert(sizeof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t) == 0x160);
    };
};
