#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompositeMaterialInputContainerSourceType_t.hpp"
#include "source2sdk/compositematerialslib/CompositeMaterialInputLooseVariable_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: compositematerialslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace compositematerialslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x138
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct CompositeMaterialInputContainer_t
        {
        public:
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Enabled"
            bool m_bEnabled; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Input Container Source"
            // metadata: MPropertyAttrStateCallback
            source2sdk::compositematerialslib::CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4            
            // metadata: MPropertyFriendlyName "Specific Material"
            // metadata: MPropertyAttrStateCallback
            // m_strSpecificContainerMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_strSpecificContainerMaterial;
            char m_strSpecificContainerMaterial[0xe0]; // 0x8            
            // metadata: MPropertyFriendlyName "Attribute Name"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strAttrName; // 0xe8            
            // metadata: MPropertyFriendlyName "Alias"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strAlias; // 0xf0            
            // metadata: MPropertyFriendlyName "Variables"
            // metadata: MPropertyAttrStateCallback
            // m_vecLooseVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t> m_vecLooseVariables;
            char m_vecLooseVariables[0x18]; // 0xf8            
            // metadata: MPropertyFriendlyName "Attribute Name"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strAttrNameForVar; // 0x110            
            // metadata: MPropertyFriendlyName "Expose Externally"
            // metadata: MPropertyAttrStateCallback
            bool m_bExposeExternally; // 0x118            
            uint8_t _pad0119[0x1f];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_bEnabled) == 0x0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_nCompositeMaterialInputContainerSourceType) == 0x4);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_strSpecificContainerMaterial) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_strAttrName) == 0xe8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_strAlias) == 0xf0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_vecLooseVariables) == 0xf8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_strAttrNameForVar) == 0x110);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t, m_bExposeExternally) == 0x118);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompositeMaterialInputContainer_t) == 0x138);
    };
};
