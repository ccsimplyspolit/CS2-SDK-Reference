#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"
#include "source2sdk/animlib/NmIKBlendMode_t.hpp"

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
        class CNmFootIKNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            CGlobalSymbol m_leftEffectorBoneID; // 0x18            
            CGlobalSymbol m_rightEffectorBoneID; // 0x20            
            std::int16_t m_nLeftTargetNodeIdx; // 0x28            
            std::int16_t m_nRightTargetNodeIdx; // 0x2a            
            std::int16_t m_nEnabledNodeIdx; // 0x2c            
            uint8_t _pad002e[0x2]; // 0x2e
            float m_flBlendTimeSeconds; // 0x30            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0x34            
            bool m_bIsTargetInWorldSpace; // 0x35            
            uint8_t _pad0036[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFootIKNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFootIKNode_CDefinition) == 0x38);
    };
};
