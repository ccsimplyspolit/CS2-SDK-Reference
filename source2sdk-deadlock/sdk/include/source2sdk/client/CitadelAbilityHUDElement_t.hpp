#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelAbilityHUDElementType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPanoramaStyle.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x110
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyArrayElementNameKey "m_strContext"
        #pragma pack(push, 1)
        struct CitadelAbilityHUDElement_t
        {
        public:
            source2sdk::client::ECitadelAbilityHUDElementType_t m_eType; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString m_strContext; // 0x8            
            uint8_t _pad0010[0x8]; // 0x10
            // metadata: MPropertyDescription "Space separated set of classes to add to the panel (ex: "medium superCool noMiddle""
            CUtlString m_strAdditionalClasses; // 0x18            
            // metadata: MPropertyCustomFGDType "panorama_layout"
            // metadata: MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
            CUtlString m_Layout; // 0x20            
            // metadata: MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
            // m_Style has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCPanoramaStyle>> m_Style;
            char m_Style[0xe0]; // 0x28            
            // metadata: MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
            bool m_bReverseProgress; // 0x108            
            // metadata: MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
            bool m_bShowStacksOnProgress; // 0x109            
            uint8_t _pad010a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_eType) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_strContext) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_strAdditionalClasses) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_Layout) == 0x20);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_Style) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_bReverseProgress) == 0x108);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElement_t, m_bShowStacksOnProgress) == 0x109);
        
        static_assert(sizeof(source2sdk::client::CitadelAbilityHUDElement_t) == 0x110);
    };
};
