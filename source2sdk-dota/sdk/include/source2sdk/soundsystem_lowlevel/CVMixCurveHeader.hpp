#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixCurveHeader
        {
        public:
            std::uint32_t m_nControlPointCount; // 0x0            
            std::uint32_t m_nControlPointStart; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCurveHeader, m_nControlPointCount) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCurveHeader, m_nControlPointStart) == 0x4);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixCurveHeader) == 0x8);
    };
};
