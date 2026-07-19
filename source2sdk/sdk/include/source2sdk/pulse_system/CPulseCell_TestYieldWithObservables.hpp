#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x220
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_TestYieldWithObservables : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            float m_flWatchForFloatValue; // 0xd8            
            uint8_t _pad00dc[0x4]; // 0xdc
            // m_LiveFloatValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CPulseObservableExpression<float> m_LiveFloatValue;
            char m_LiveFloatValue[0x78]; // 0xe0            
            CUtlString m_WatchForStringValue; // 0x158            
            // m_LiveStringValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CPulseObservableExpression<CUtlString> m_LiveStringValue;
            char m_LiveStringValue[0x78]; // 0x160            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x1d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_TestYieldWithObservables because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_TestYieldWithObservables) == 0x220);
    };
};
