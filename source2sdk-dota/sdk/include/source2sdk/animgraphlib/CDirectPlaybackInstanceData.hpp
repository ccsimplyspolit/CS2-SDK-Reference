#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/SequenceData.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x148
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDirectPlaybackInstanceData
        {
        public:
            Vector m_vTargetPosition; // 0x0            
            float m_flTargetFacing; // 0xc            
            float m_flInterpEndTime; // 0x10            
            float m_weights[4]; // 0x14            
            source2sdk::animgraphlib::SequenceData m_sequences[4]; // 0x24            
            std::uint32_t m_currentSequenceIndex; // 0x104            
            // m_currentSequenceData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint64_t> m_currentSequenceData;
            char m_currentSequenceData[0x10]; // 0x108            
            float m_flFadeInTime; // 0x118            
            float m_flFadeOutTime; // 0x11c            
            // m_flForcedCycle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flForcedCycle;
            char m_flForcedCycle[0xc]; // 0x120            
            uint8_t _pad012c[0x4]; // 0x12c
            bool m_bResetPending; // 0x130            
            uint8_t _pad0131[0x7]; // 0x131
            // m_SequenceCycleZeroTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_SequenceCycleZeroTime;
            char m_SequenceCycleZeroTime[0xc]; // 0x138            
            uint8_t _pad0144[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_vTargetPosition) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_flTargetFacing) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_flInterpEndTime) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_weights) == 0x14);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_sequences) == 0x24);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_currentSequenceIndex) == 0x104);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_currentSequenceData) == 0x108);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_flFadeInTime) == 0x118);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_flFadeOutTime) == 0x11c);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_flForcedCycle) == 0x120);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_bResetPending) == 0x130);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectPlaybackInstanceData, m_SequenceCycleZeroTime) == 0x138);
        
        static_assert(sizeof(source2sdk::animgraphlib::CDirectPlaybackInstanceData) == 0x148);
    };
};
