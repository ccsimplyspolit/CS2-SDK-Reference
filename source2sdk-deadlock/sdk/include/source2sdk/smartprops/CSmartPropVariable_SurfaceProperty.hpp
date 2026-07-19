#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropVariable.hpp"

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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Surface Property"
        // static metadata: MPropertyDescription "Surface Property Variable"
        #pragma pack(push, 1)
        class CSmartPropVariable_SurfaceProperty : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            // metadata: MPropertyFriendlyName "Default Surface Property"
            // metadata: MPropertyCustomFGDType "surface_properties"
            CUtlString m_DefaultValue; // 0x38            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_SurfaceProperty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_SurfaceProperty) == 0x40);
    };
};
