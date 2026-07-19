#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TimeScalingValue_t
        {
        public:
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenIncludeLabel
            // metadata: MPropertyFriendlyName "Base"
            float m_flBase; // 0x0            
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenIncludeLabel
            // metadata: MPropertyFriendlyName "Growth Per Minute"
            float m_flPerMinuteAfterStart; // 0x4            
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenIncludeLabel
            // metadata: MPropertyFriendlyName "Growth Start Minute"
            float m_flStartMinute; // 0x8            
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenIncludeLabel
            // metadata: MPropertyFriendlyName "Max Value"
            float m_flMaxValue; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TimeScalingValue_t, m_flBase) == 0x0);
        static_assert(offsetof(source2sdk::client::TimeScalingValue_t, m_flPerMinuteAfterStart) == 0x4);
        static_assert(offsetof(source2sdk::client::TimeScalingValue_t, m_flStartMinute) == 0x8);
        static_assert(offsetof(source2sdk::client::TimeScalingValue_t, m_flMaxValue) == 0xc);
        
        static_assert(sizeof(source2sdk::client::TimeScalingValue_t) == 0x10);
    };
};
