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
        // static metadata: MPropertyFriendlyName "Filter Edges by Angle"
        // static metadata: MPropertyDescription
        #pragma pack(push, 1)
        class CSmartPropSelectionCriteria_EdgeAngleCriteria : public source2sdk::smartprops::CSmartPropSelectionCriteria
        {
        public:
            // metadata: MPropertyFriendlyName "Min Angle"
            // metadata: MPropertyDescription "Angle at closed edge of face."
            CSmartPropAttributeFloat m_flMinAngle; // 0x48            
            // metadata: MPropertyFriendlyName "Max Angle"
            // metadata: MPropertyDescription "Angle at closed edge of face."
            CSmartPropAttributeFloat m_flMaxAngle; // 0x88            
            // metadata: MPropertyFriendlyName "Invert"
            // metadata: MPropertyDescription "When true, discard edges within the angle threshold."
            CSmartPropAttributeBool m_bInvert; // 0xc8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropSelectionCriteria_EdgeAngleCriteria because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropSelectionCriteria_EdgeAngleCriteria) == 0x108);
    };
};
