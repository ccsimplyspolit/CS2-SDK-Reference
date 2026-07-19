#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmFloatValueNode_CDefinition.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmFloatSelectorNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            // m_conditionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::int16_t,5> m_conditionNodeIndices;
            char m_conditionNodeIndices[0x18]; // 0x10            
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<float,5> m_values;
            char m_values[0x20]; // 0x28            
            float m_flDefaultValue; // 0x48            
            float m_flEaseTime; // 0x4c            
            source2sdk::animlib::NmEasingOperation_t m_easingOp; // 0x50            
            uint8_t _pad0051[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatSelectorNode_CDefinition) == 0x58);
    };
};
