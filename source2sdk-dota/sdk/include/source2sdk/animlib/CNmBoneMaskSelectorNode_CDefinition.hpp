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
        // Size: 0x78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBoneMaskSelectorNode_CDefinition : public source2sdk::animlib::CNmBoneMaskValueNode_CDefinition
        {
        public:
            std::int16_t m_defaultMaskNodeIdx; // 0x10            
            std::int16_t m_parameterValueNodeIdx; // 0x12            
            bool m_bSwitchDynamically; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            // m_maskNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::int16_t,8> m_maskNodeIndices;
            char m_maskNodeIndices[0x18]; // 0x18            
            // m_parameterValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,7> m_parameterValues;
            char m_parameterValues[0x40]; // 0x30            
            float m_flBlendTimeSeconds; // 0x70            
            uint8_t _pad0074[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBoneMaskSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBoneMaskSelectorNode_CDefinition) == 0x78);
    };
};
