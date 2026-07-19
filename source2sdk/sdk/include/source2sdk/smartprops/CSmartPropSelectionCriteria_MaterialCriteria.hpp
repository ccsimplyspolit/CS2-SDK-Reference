#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropSelectionCriteria.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataComponentValidGrandParents
        // static metadata: MPropertyFriendlyName "Filter Faces By Material"
        // static metadata: MPropertyDescription
        #pragma pack(push, 1)
        class CSmartPropSelectionCriteria_MaterialCriteria : public source2sdk::smartprops::CSmartPropSelectionCriteria
        {
        public:
            // metadata: MPropertyFriendlyName "Material"
            // metadata: MPropertyDescription "Target material name."
            CSmartPropAttributeMaterialName m_material; // 0x48            
            // metadata: MPropertyFriendlyName "Invert"
            // metadata: MPropertyDescription "When true, discard faces with matching material."
            CSmartPropAttributeBool m_bInvert; // 0x88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropSelectionCriteria_MaterialCriteria because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropSelectionCriteria_MaterialCriteria) == 0xc8);
    };
};
