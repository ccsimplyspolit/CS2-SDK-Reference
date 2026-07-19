#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseTask.hpp"
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/NmIKBlendMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd0
        // Has VTable
        #pragma pack(push, 1)
        class CNmTwoBoneIKTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nEffectorBoneIdx; // 0x58            
            std::int32_t m_nEffectorTargetBoneIdx; // 0x5c            
            CTransform m_targetTransform; // 0x60            
            source2sdk::animlib::CNmTarget m_effectorTarget; // 0x80            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0xb0            
            uint8_t _pad00b1[0x3]; // 0xb1
            float m_flBlendWeight; // 0xb4            
            bool m_bIsTargetInWorldSpace; // 0xb8            
            bool m_bIsRunningFromDeserializedData; // 0xb9            
            uint8_t _pad00ba[0x2]; // 0xba
            float m_flReferencePoseTwistWeight; // 0xbc            
            CGlobalSymbol m_debugEffectorBoneID; // 0xc0            
            uint8_t _pad00c8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTwoBoneIKTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTwoBoneIKTask) == 0xd0);
    };
};
