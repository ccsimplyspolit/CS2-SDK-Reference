#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseValue.hpp"
#include "source2sdk/pulse_system/PulseTestEnumColor_t.hpp"
#include "source2sdk/pulse_system/PulseTestEnumFlags_t.hpp"

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
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Test Enums"
        #pragma pack(push, 1)
        class CPulseCell_TestEnums : public source2sdk::pulse_runtime_lib::CPulseCell_BaseValue
        {
        public:
            source2sdk::pulse_system::PulseTestEnumColor_t m_nReferenceColor; // 0x48            
            source2sdk::pulse_system::PulseTestEnumFlags_t m_nReferenceFlags; // 0x4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_TestEnums because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_TestEnums) == 0x50);
    };
};
