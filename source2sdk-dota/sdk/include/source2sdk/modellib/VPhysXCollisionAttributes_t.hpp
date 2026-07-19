#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0xd0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysXCollisionAttributes_t
        {
        public:
            std::int32_t m_nIncludeDetailLayerCount; // 0x0            
            std::uint32_t m_CollisionGroup; // 0x4            
            // m_InteractAs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_InteractAs;
            char m_InteractAs[0x18]; // 0x8            
            // m_InteractWith has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_InteractWith;
            char m_InteractWith[0x18]; // 0x20            
            // m_InteractExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_InteractExclude;
            char m_InteractExclude[0x18]; // 0x38            
            // m_DetailLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_DetailLayers;
            char m_DetailLayers[0x18]; // 0x50            
            CUtlString m_CollisionGroupString; // 0x68            
            // m_InteractAsStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_InteractAsStrings;
            char m_InteractAsStrings[0x18]; // 0x70            
            // m_InteractWithStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_InteractWithStrings;
            char m_InteractWithStrings[0x18]; // 0x88            
            // m_InteractExcludeStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_InteractExcludeStrings;
            char m_InteractExcludeStrings[0x18]; // 0xa0            
            // m_DetailLayerStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_DetailLayerStrings;
            char m_DetailLayerStrings[0x18]; // 0xb8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_nIncludeDetailLayerCount) == 0x0);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_CollisionGroup) == 0x4);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractAs) == 0x8);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractWith) == 0x20);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractExclude) == 0x38);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_DetailLayers) == 0x50);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_CollisionGroupString) == 0x68);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractAsStrings) == 0x70);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractWithStrings) == 0x88);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractExcludeStrings) == 0xa0);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_DetailLayerStrings) == 0xb8);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXCollisionAttributes_t) == 0xd0);
    };
};
