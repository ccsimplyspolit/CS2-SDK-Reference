#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmClipReferenceNode_CDefinition.hpp"

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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTargetSelectorNode_CDefinition : public source2sdk::animlib::CNmClipReferenceNode_CDefinition
        {
        public:
            // m_optionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::int16_t,8> m_optionNodeIndices;
            char m_optionNodeIndices[0x18]; // 0x10            
            float m_flOrientationScoreWeight; // 0x28            
            float m_flPositionScoreWeight; // 0x2c            
            std::int16_t m_parameterNodeIdx; // 0x30            
            bool m_bIgnoreInvalidOptions; // 0x32            
            bool m_bIsWorldSpaceTarget; // 0x33            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetSelectorNode_CDefinition) == 0x38);
    };
};
