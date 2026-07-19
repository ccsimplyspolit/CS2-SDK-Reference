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
        // Size: 0x140
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmFootIKTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nLeftEffectorBoneIdx; // 0x70            
            std::int32_t m_nRightEffectorBoneIdx; // 0x74            
            uint8_t _pad0078[0x8]; // 0x78
            CTransform m_leftTargetTransform; // 0x80            
            CTransform m_rightTargetTransform; // 0xa0            
            std::int32_t m_nLeftTargetBoneIdx; // 0xc0            
            std::int32_t m_nRightTargetBoneIdx; // 0xc4            
            uint8_t _pad00c8[0x8]; // 0xc8
            source2sdk::animlib::CNmTarget m_leftTarget; // 0xd0            
            source2sdk::animlib::CNmTarget m_rightTarget; // 0x100            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0x130            
            uint8_t _pad0131[0x3]; // 0x131
            float m_flBlendWeight; // 0x134            
            bool m_bIsTargetInWorldSpace; // 0x138            
            bool m_bIsRunningFromDeserializedData; // 0x139            
            uint8_t _pad013a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFootIKTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFootIKTask) == 0x140);
    };
};
