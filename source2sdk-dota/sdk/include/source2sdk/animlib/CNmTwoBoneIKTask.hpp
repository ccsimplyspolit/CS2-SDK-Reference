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
        // Size: 0xf0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmTwoBoneIKTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nEffectorBoneIdx; // 0x70            
            std::int32_t m_nEffectorTargetBoneIdx; // 0x74            
            uint8_t _pad0078[0x8]; // 0x78
            CTransform m_targetTransform; // 0x80            
            source2sdk::animlib::CNmTarget m_effectorTarget; // 0xa0            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            float m_flBlendWeight; // 0xd4            
            bool m_bIsTargetInWorldSpace; // 0xd8            
            bool m_bIsRunningFromDeserializedData; // 0xd9            
            uint8_t _pad00da[0x2]; // 0xda
            float m_flChainRotationWeight; // 0xdc            
            CGlobalSymbol m_debugEffectorBoneID; // 0xe0            
            uint8_t _pad00e8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTwoBoneIKTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTwoBoneIKTask) == 0xf0);
    };
};
