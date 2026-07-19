#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompMatMutatorCondition_t.hpp"
#include "source2sdk/compositematerialslib/CompMatPropertyMutatorType_t.hpp"
#include "source2sdk/compositematerialslib/CompositeMaterialInputLooseVariable_t.hpp"

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
        // Size: 0x390
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct CompMatPropertyMutator_t
        {
        public:
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Enabled"
            bool m_bEnabled; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Mutator Command"
            // metadata: MPropertyAttrStateCallback
            source2sdk::compositematerialslib::CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4            
            // metadata: MPropertyFriendlyName "Container to Init With"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strInitWith_Container; // 0x8            
            // metadata: MPropertyFriendlyName "Input Container"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyProperty_InputContainerSrc; // 0x10            
            // metadata: MPropertyFriendlyName "Input Container Property"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyProperty_InputContainerProperty; // 0x18            
            // metadata: MPropertyFriendlyName "Target Property"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyProperty_TargetProperty; // 0x20            
            // metadata: MPropertyFriendlyName "Seed Input Var"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28            
            // metadata: MPropertyFriendlyName "Input Vars"
            // metadata: MPropertyAttrStateCallback
            // m_vecRandomRollInputVars_InputVarsToRoll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomRollInputVars_InputVarsToRoll;
            char m_vecRandomRollInputVars_InputVarsToRoll[0x18]; // 0x30            
            // metadata: MPropertyFriendlyName "Input Container"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48            
            // metadata: MPropertyFriendlyName "Input Container"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50            
            // metadata: MPropertyFriendlyName "Find Suffix"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58            
            // metadata: MPropertyFriendlyName "Replace Suffix"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertyAttrStateCallback
            source2sdk::compositematerialslib::CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68            
            // metadata: MPropertyFriendlyName "Target Texture Param"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strGenerateTexture_TargetParam; // 0x2f0            
            // metadata: MPropertyFriendlyName "Initial Container"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strGenerateTexture_InitialContainer; // 0x2f8            
            // metadata: MPropertyFriendlyName "Resolution"
            // metadata: MPropertyAttrStateCallback
            std::int32_t m_nResolution; // 0x300            
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Scratch Target"
            // metadata: MPropertyAttrStateCallback
            bool m_bIsScratchTarget; // 0x304            
            uint8_t _pad0305[0x3]; // 0x305
            // metadata: MPropertyFriendlyName "Compression Format"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strCompressionFormat; // 0x308            
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Splat Debug info on Texture"
            // metadata: MPropertyAttrStateCallback
            bool m_bSplatDebugInfo; // 0x310            
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Capture in RenderDoc"
            // metadata: MPropertyAttrStateCallback
            bool m_bCaptureInRenderDoc; // 0x311            
            uint8_t _pad0312[0x6]; // 0x312
            // metadata: MPropertyFriendlyName "Texture Generation Instructions"
            // metadata: MPropertyAttrStateCallback
            // m_vecTexGenInstructions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompMatPropertyMutator_t> m_vecTexGenInstructions;
            char m_vecTexGenInstructions[0x18]; // 0x318            
            // metadata: MPropertyFriendlyName "Mutators"
            // metadata: MPropertyAttrStateCallback
            // m_vecConditionalMutators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompMatPropertyMutator_t> m_vecConditionalMutators;
            char m_vecConditionalMutators[0x18]; // 0x330            
            // metadata: MPropertyFriendlyName "Container to Pop"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strPopInputQueue_Container; // 0x348            
            // metadata: MPropertyFriendlyName "Input Container"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strDrawText_InputContainerSrc; // 0x350            
            // metadata: MPropertyFriendlyName "Input Container Property"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strDrawText_InputContainerProperty; // 0x358            
            // metadata: MPropertyFriendlyName "Text Position"
            // metadata: MPropertyAttrStateCallback
            Vector2D m_vecDrawText_Position; // 0x360            
            // metadata: MPropertyFriendlyName "Text Color"
            // metadata: MPropertyAttrStateCallback
            Color m_colDrawText_Color; // 0x368            
            uint8_t _pad036c[0x4]; // 0x36c
            // metadata: MPropertyFriendlyName "Font"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strDrawText_Font; // 0x370            
            // metadata: MPropertyFriendlyName "Conditions"
            // metadata: MPropertyAttrStateCallback
            // m_vecConditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompMatMutatorCondition_t> m_vecConditions;
            char m_vecConditions[0x18]; // 0x378            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_bEnabled) == 0x0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_nMutatorCommandType) == 0x4);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strInitWith_Container) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyProperty_InputContainerSrc) == 0x10);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyProperty_InputContainerProperty) == 0x18);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyProperty_TargetProperty) == 0x20);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strRandomRollInputVars_SeedInputVar) == 0x28);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_vecRandomRollInputVars_InputVarsToRoll) == 0x30);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyMatchingKeys_InputContainerSrc) == 0x48);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyKeysWithSuffix_InputContainerSrc) == 0x50);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyKeysWithSuffix_FindSuffix) == 0x58);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCopyKeysWithSuffix_ReplaceSuffix) == 0x60);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_nSetValue_Value) == 0x68);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strGenerateTexture_TargetParam) == 0x2f0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strGenerateTexture_InitialContainer) == 0x2f8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_nResolution) == 0x300);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_bIsScratchTarget) == 0x304);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strCompressionFormat) == 0x308);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_bSplatDebugInfo) == 0x310);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_bCaptureInRenderDoc) == 0x311);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_vecTexGenInstructions) == 0x318);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_vecConditionalMutators) == 0x330);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strPopInputQueue_Container) == 0x348);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strDrawText_InputContainerSrc) == 0x350);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strDrawText_InputContainerProperty) == 0x358);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_vecDrawText_Position) == 0x360);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_colDrawText_Color) == 0x368);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_strDrawText_Font) == 0x370);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatPropertyMutator_t, m_vecConditions) == 0x378);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompMatPropertyMutator_t) == 0x390);
    };
};
