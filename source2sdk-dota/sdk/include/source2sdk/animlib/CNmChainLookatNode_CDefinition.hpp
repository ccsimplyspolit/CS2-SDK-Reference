#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"

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
        class CNmChainLookatNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            CGlobalSymbol m_endEffectorBoneID; // 0x18            
            Vector m_endEffectorForwardAxis; // 0x20            
            Vector m_endEffectorOffset; // 0x2c            
            std::int16_t m_nLookatTargetNodeIdx; // 0x38            
            std::int16_t m_nEnabledNodeIdx; // 0x3a            
            float m_flBlendTimeSeconds; // 0x3c            
            // m_chainWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<float,5> m_chainWeights;
            char m_chainWeights[0x30]; // 0x40            
            std::uint8_t m_nChainLength; // 0x70            
            bool m_bIsTargetInWorldSpace; // 0x71            
            uint8_t _pad0072[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainLookatNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainLookatNode_CDefinition) == 0x78);
    };
};
