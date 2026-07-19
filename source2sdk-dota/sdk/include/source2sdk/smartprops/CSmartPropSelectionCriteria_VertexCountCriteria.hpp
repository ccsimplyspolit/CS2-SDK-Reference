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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataComponentValidGrandParents
        // static metadata: MPropertyFriendlyName "Filter Faces By Vertex Count"
        // static metadata: MPropertyDescription
        #pragma pack(push, 1)
        class CSmartPropSelectionCriteria_VertexCountCriteria : public source2sdk::smartprops::CSmartPropSelectionCriteria
        {
        public:
            // metadata: MPropertyFriendlyName "Target Vertex Count"
            // metadata: MPropertyDescription "Iterate through faces with target vertex count."
            CSmartPropAttributeInt m_nTargetVertexCount; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropSelectionCriteria_VertexCountCriteria because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropSelectionCriteria_VertexCountCriteria) == 0x88);
    };
};
