#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CScaleFunctionVData.hpp"

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
        // Standard-layout class: false
        // Size: 0x80
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CScaleFunctionAbilityPropertySingleStatCurveVData : public source2sdk::client::CScaleFunctionVData
        {
        public:
            CPiecewiseCurve m_statCurve; // 0x40            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScaleFunctionAbilityPropertySingleStatCurveVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CScaleFunctionAbilityPropertySingleStatCurveVData) == 0x80);
    };
};
