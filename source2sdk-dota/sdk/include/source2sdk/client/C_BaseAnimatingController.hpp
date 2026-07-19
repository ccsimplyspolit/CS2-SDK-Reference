#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/C_CSequenceTransitioner2.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        #pragma pack(push, 1)
        class C_BaseAnimatingController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            source2sdk::client::CNetworkedSequenceOperation m_baseLayer; // 0x10            
            bool m_bSequenceFinished; // 0x38            
            uint8_t _pad0039[0x3]; // 0x39
            float m_flGroundSpeed; // 0x3c            
            float m_flLastEventCycle; // 0x40            
            source2sdk::entity2::GameTime_t m_flLastEventAnimTime; // 0x44            
            float m_flSoundSyncTime; // 0x48            
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x4c            
            source2sdk::entity2::GameTime_t m_flPrevAnimTime; // 0x54            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x58            
            float m_flPoseParameter[24]; // 0x5c            
            bool m_bNetworkedAnimationInputsChanged; // 0xbc            
            std::uint8_t m_nPrevNewSequenceParity; // 0xbd            
            std::uint8_t m_nPrevResetEventsParity; // 0xbe            
            bool m_bPlaybackRateLocked; // 0xbf            
            std::int32_t m_nNewSequenceParity; // 0xc0            
            std::int32_t m_nResetEventsParity; // 0xc4            
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0xc8            
            float m_flCachedSequenceCycleRate; // 0xcc            
            float m_flCachedGroundSpeed; // 0xd0            
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0xd4            
            uint8_t _pad00d5[0x29b]; // 0xd5
            source2sdk::client::C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x370            
            source2sdk::animationsystem::HSequence m_hLastAnimEventSequence; // 0x528            
            uint8_t _pad052c[0xbc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseAnimatingController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseAnimatingController) == 0x5e8);
    };
};
