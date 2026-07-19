#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/modellib/CMaterialDrawDescriptor.hpp"
#include "source2sdk/modellib/CMeshletDescriptor.hpp"
#include "source2sdk/modellib/CSceneObjectData_RTProxyDrawDescriptor_t.hpp"

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
        // Size: 0xb8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSceneObjectData
        {
        public:
            Vector m_vMinBounds; // 0x0            
            Vector m_vMaxBounds; // 0xc            
            // m_drawCalls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CMaterialDrawDescriptor> m_drawCalls;
            char m_drawCalls[0x10]; // 0x18            
            // m_drawBounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::mathlib_extended::AABB_t> m_drawBounds;
            char m_drawBounds[0x10]; // 0x28            
            // m_meshlets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CMeshletDescriptor> m_meshlets;
            char m_meshlets[0x10]; // 0x38            
            // m_rtProxyDrawCalls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t> m_rtProxyDrawCalls;
            char m_rtProxyDrawCalls[0x10]; // 0x48            
            Vector4D m_vTintColor; // 0x58            
            uint8_t _pad0068[0x50];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_vMinBounds) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_vMaxBounds) == 0xc);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_drawCalls) == 0x18);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_drawBounds) == 0x28);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_meshlets) == 0x38);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_rtProxyDrawCalls) == 0x48);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_vTintColor) == 0x58);
        
        static_assert(sizeof(source2sdk::modellib::CSceneObjectData) == 0xb8);
    };
};
