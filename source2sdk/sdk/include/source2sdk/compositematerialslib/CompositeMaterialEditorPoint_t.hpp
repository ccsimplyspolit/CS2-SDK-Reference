#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompositeMaterialAssemblyProcedure_t.hpp"
#include "source2sdk/compositematerialslib/CompositeMaterial_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x218
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CompositeMaterialEditorPoint_t
        {
        public:
            // metadata: MPropertyGroupName "Preview Model"
            // metadata: MPropertyFriendlyName "Target Model"
            // m_ModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_ModelName;
            char m_ModelName[0xe0]; // 0x0            
            // metadata: MPropertyGroupName "Preview Model"
            // metadata: MPropertyFriendlyName "Animation"
            std::int32_t m_nSequenceIndex; // 0xe0            
            // metadata: MPropertyGroupName "Preview Model"
            // metadata: MPropertyFriendlyName "Animation Cycle"
            // metadata: MPropertyAttributeRange "0.0 1.0"
            float m_flCycle; // 0xe4            
            // metadata: MPropertyGroupName "Preview Model"
            // metadata: MPropertyFriendlyName "Model Preview State"
            // metadata: MPropertyAttributeEditor "CompositeMaterialUserModelStateSetting"
            KeyValues3 m_KVModelStateChoices; // 0xe8            
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyGroupName "Preview Model"
            // metadata: MPropertyFriendlyName "Enable Child Model"
            bool m_bEnableChildModel; // 0xf8            
            uint8_t _pad00f9[0x7]; // 0xf9
            // metadata: MPropertyGroupName "Preview Model"
            // metadata: MPropertyFriendlyName "Child Model"
            // metadata: MPropertyAttrStateCallback
            // m_ChildModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_ChildModelName;
            char m_ChildModelName[0xe0]; // 0x100            
            // metadata: MPropertyGroupName "Composite Material Assembly"
            // metadata: MPropertyFriendlyName "Composite Material Assembly Procedures"
            // m_vecCompositeMaterialAssemblyProcedures has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompositeMaterialAssemblyProcedure_t> m_vecCompositeMaterialAssemblyProcedures;
            char m_vecCompositeMaterialAssemblyProcedures[0x18]; // 0x1e0            
            // metadata: MPropertyFriendlyName "Generated Composite Materials"
            // m_vecCompositeMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompositeMaterial_t> m_vecCompositeMaterials;
            char m_vecCompositeMaterials[0x18]; // 0x1f8            
            uint8_t _pad0210[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_ModelName) == 0x0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_nSequenceIndex) == 0xe0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_flCycle) == 0xe4);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_KVModelStateChoices) == 0xe8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_bEnableChildModel) == 0xf8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_ChildModelName) == 0x100);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_vecCompositeMaterialAssemblyProcedures) == 0x1e0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t, m_vecCompositeMaterials) == 0x1f8);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t) == 0x218);
    };
};
