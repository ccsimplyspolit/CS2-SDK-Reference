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
        // Size: 0x108
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataComponentValidGrandParents
        // static metadata: MPropertyFriendlyName "Filter Faces By Open Edges"
        // static metadata: MPropertyDescription
        #pragma pack(push, 1)
        class CSmartPropSelectionCriteria_TopoEdgeCountCriteria : public source2sdk::smartprops::CSmartPropSelectionCriteria
        {
        public:
            // metadata: MPropertyFriendlyName "Edge Count"
            // metadata: MPropertyDescription "Iterate through faces with 'n' open edges (edges with only one neighboring face)."
            CSmartPropAttributeInt m_nTargetOpenEdgeCount; // 0x48            
            // metadata: MPropertyFriendlyName "Use Closed Edges"
            // metadata: MPropertyDescription "When true, we only consider closed edges (edges with exactly two neighboring faces)."
            CSmartPropAttributeBool m_bInvert; // 0x88            
            // metadata: MPropertyFriendlyName "Enforce Shared Vert"
            // metadata: MPropertyDescription "When true, only consider open/closed edges that share a vert with another open/closed edge."
            CSmartPropAttributeBool m_bSharedVert; // 0xc8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropSelectionCriteria_TopoEdgeCountCriteria because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropSelectionCriteria_TopoEdgeCountCriteria) == 0x108);
    };
};
