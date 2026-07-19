#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseTask.hpp"

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
        // Size: 0x90
        // Has VTable
        #pragma pack(push, 1)
        class CNmChainLookatTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nChainEndBoneIdx; // 0x58            
            std::int32_t m_nNumBonesInChain; // 0x5c            
            Vector m_chainForwardDir; // 0x60            
            float m_flBlendWeight; // 0x6c            
            float m_flHorizontalAngleLimitDegrees; // 0x70            
            float m_flVerticalAngleLimitDegrees; // 0x74            
            Vector m_lookatTarget; // 0x78            
            bool m_bIsTargetInWorldSpace; // 0x84            
            bool m_bIsRunningFromDeserializedData; // 0x85            
            uint8_t _pad0086[0x2]; // 0x86
            float m_flHorizontalAngleDegrees; // 0x88            
            float m_flVerticalAngleDegrees; // 0x8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainLookatTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainLookatTask) == 0x90);
    };
};
