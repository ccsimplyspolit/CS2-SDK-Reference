#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompositeMaterialInputLooseVariableType_t.hpp"
#include "source2sdk/compositematerialslib/CompositeMaterialInputTextureType_t.hpp"
#include "source2sdk/compositematerialslib/CompositeMaterialVarSystemVar_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
        // Size: 0x288
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct CompositeMaterialInputLooseVariable_t
        {
        public:
            // metadata: MPropertyFriendlyName "Name"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strName; // 0x0            
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Expose Externally"
            bool m_bExposeExternally; // 0x8            
            uint8_t _pad0009[0x7]; // 0x9
            // metadata: MPropertyFriendlyName "Exposed Friendly Name"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strExposedFriendlyName; // 0x10            
            // metadata: MPropertyFriendlyName "Exposed Friendly Group"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strExposedFriendlyGroupName; // 0x18            
            // metadata: MPropertyFriendlyName "Exposed Fixed Range"
            // metadata: MPropertyAttrStateCallback
            bool m_bExposedVariableIsFixedRange; // 0x20            
            uint8_t _pad0021[0x7]; // 0x21
            // metadata: MPropertyFriendlyName "Exposed SetVisible When True"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strExposedVisibleWhenTrue; // 0x28            
            // metadata: MPropertyFriendlyName "Exposed SetHidden When True"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strExposedHiddenWhenTrue; // 0x30            
            // metadata: MPropertyFriendlyName "Exposed Value List"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strExposedValueList; // 0x38            
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Type"
            source2sdk::compositematerialslib::CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x40            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertyAttrStateCallback
            bool m_bValueBoolean; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            // metadata: MPropertyFriendlyName "X Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_nValueIntX; // 0x48            
            // metadata: MPropertyFriendlyName "Y Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_nValueIntY; // 0x4c            
            // metadata: MPropertyFriendlyName "Z Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_nValueIntZ; // 0x50            
            // metadata: MPropertyFriendlyName "W Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_nValueIntW; // 0x54            
            // metadata: MPropertyFriendlyName "Specify Min/Max"
            // metadata: MPropertyAttrStateCallback
            bool m_bHasFloatBounds; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            // metadata: MPropertyFriendlyName "X Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0.0 1.0"
            float m_flValueFloatX; // 0x5c            
            // metadata: MPropertyFriendlyName "X Min"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatX_Min; // 0x60            
            // metadata: MPropertyFriendlyName "X Max"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatX_Max; // 0x64            
            // metadata: MPropertyFriendlyName "Y Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0.0 1.0"
            float m_flValueFloatY; // 0x68            
            // metadata: MPropertyFriendlyName "Y Min"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatY_Min; // 0x6c            
            // metadata: MPropertyFriendlyName "Y Max"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatY_Max; // 0x70            
            // metadata: MPropertyFriendlyName "Z Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0.0 1.0"
            float m_flValueFloatZ; // 0x74            
            // metadata: MPropertyFriendlyName "Z Min"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatZ_Min; // 0x78            
            // metadata: MPropertyFriendlyName "Z Max"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatZ_Max; // 0x7c            
            // metadata: MPropertyFriendlyName "W Value"
            // metadata: MPropertyAttrStateCallback
            // metadata: MPropertyAttributeRange "0.0 1.0"
            float m_flValueFloatW; // 0x80            
            // metadata: MPropertyFriendlyName "W Min"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatW_Min; // 0x84            
            // metadata: MPropertyFriendlyName "W Max"
            // metadata: MPropertyAttrStateCallback
            float m_flValueFloatW_Max; // 0x88            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertyAttrStateCallback
            Color m_cValueColor4; // 0x8c            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertyAttrStateCallback
            source2sdk::compositematerialslib::CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x90            
            uint8_t _pad0094[0x4]; // 0x94
            // metadata: MPropertyFriendlyName "Material"
            // metadata: MPropertyAttrStateCallback
            // m_strResourceMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_strResourceMaterial;
            char m_strResourceMaterial[0xe0]; // 0x98            
            // metadata: MPropertyFriendlyName "Texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strTextureContentAssetPath; // 0x178            
            // metadata: MPropertyHideField
            // m_strTextureRuntimeResourcePath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase>> m_strTextureRuntimeResourcePath;
            char m_strTextureRuntimeResourcePath[0xe0]; // 0x180            
            // metadata: MPropertyHideField
            CUtlString m_strTextureCompilationVtexTemplate; // 0x260            
            // metadata: MPropertyFriendlyName "Texture Type"
            // metadata: MPropertyAttrStateCallback
            source2sdk::compositematerialslib::CompositeMaterialInputTextureType_t m_nTextureType; // 0x268            
            uint8_t _pad026c[0x4]; // 0x26c
            // metadata: MPropertyFriendlyName "String"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strString; // 0x270            
            // metadata: MPropertyFriendlyName "Layout XML"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strPanoramaPanelPath; // 0x278            
            // metadata: MPropertyFriendlyName "Render Resolution"
            // metadata: MPropertyAttrStateCallback
            std::int32_t m_nPanoramaRenderRes; // 0x280            
            uint8_t _pad0284[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strName) == 0x0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_bExposeExternally) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strExposedFriendlyName) == 0x10);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strExposedFriendlyGroupName) == 0x18);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_bExposedVariableIsFixedRange) == 0x20);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strExposedVisibleWhenTrue) == 0x28);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strExposedHiddenWhenTrue) == 0x30);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strExposedValueList) == 0x38);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nVariableType) == 0x40);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_bValueBoolean) == 0x44);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nValueIntX) == 0x48);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nValueIntY) == 0x4c);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nValueIntZ) == 0x50);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nValueIntW) == 0x54);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_bHasFloatBounds) == 0x58);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatX) == 0x5c);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatX_Min) == 0x60);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatX_Max) == 0x64);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatY) == 0x68);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatY_Min) == 0x6c);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatY_Max) == 0x70);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatZ) == 0x74);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatZ_Min) == 0x78);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatZ_Max) == 0x7c);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatW) == 0x80);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatW_Min) == 0x84);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_flValueFloatW_Max) == 0x88);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_cValueColor4) == 0x8c);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nValueSystemVar) == 0x90);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strResourceMaterial) == 0x98);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strTextureContentAssetPath) == 0x178);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strTextureRuntimeResourcePath) == 0x180);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strTextureCompilationVtexTemplate) == 0x260);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nTextureType) == 0x268);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strString) == 0x270);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_strPanoramaPanelPath) == 0x278);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t, m_nPanoramaRenderRes) == 0x280);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t) == 0x288);
    };
};
