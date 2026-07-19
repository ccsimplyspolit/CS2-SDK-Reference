#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoneMaskValueNode_CDefinition.hpp"

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
        // Size: 0x20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBoneMaskSwitchNode_CDefinition : public source2sdk::animlib::CNmBoneMaskValueNode_CDefinition
        {
        public:
            std::int16_t m_nSwitchValueNodeIdx; // 0x10            
            std::int16_t m_nTrueValueNodeIdx; // 0x12            
            std::int16_t m_nFalseValueNodeIdx; // 0x14            
            uint8_t _pad0016[0x2]; // 0x16
            float m_flBlendTimeSeconds; // 0x18            
            bool m_bSwitchDynamically; // 0x1c            
            uint8_t _pad001d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBoneMaskSwitchNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBoneMaskSwitchNode_CDefinition) == 0x20);
    };
};
