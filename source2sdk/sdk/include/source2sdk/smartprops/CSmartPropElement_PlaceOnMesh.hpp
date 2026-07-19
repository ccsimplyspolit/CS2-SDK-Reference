#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeOrientationMode.hpp"
#include "source2sdk/smartprops/CSmartPropElement_Deformer.hpp"

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
        // Size: 0xe8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataExperimentalNodeSet
        // static metadata: MPropertyFriendlyName "Place on Mesh"
        // static metadata: MPropertyDescription "Place Children on Mesh Components."
        #pragma pack(push, 1)
        class CSmartPropElement_PlaceOnMesh : public source2sdk::smartprops::CSmartPropElement_Deformer
        {
        public:
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Orientation Mode"
            // metadata: MPropertyDescription "Determine how child elements are oriented when mapped to face."
            source2sdk::smartprops::CSmartPropAttributeOrientationMode m_nPickMode; // 0xa0            
            // metadata: MPropertyDescription
            CUtlString m_MeshName; // 0xe0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_PlaceOnMesh because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_PlaceOnMesh) == 0xe8);
    };
};
