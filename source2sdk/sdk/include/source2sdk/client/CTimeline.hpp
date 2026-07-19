#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IntervalTimer.hpp"
#include "source2sdk/client/TimelineCompression_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x228
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTimeline : public source2sdk::client::IntervalTimer
        {
        public:
            float m_flValues[64]; // 0x10            
            std::int32_t m_nValueCounts[64]; // 0x110            
            std::int32_t m_nBucketCount; // 0x210            
            float m_flInterval; // 0x214            
            float m_flFinalValue; // 0x218            
            source2sdk::client::TimelineCompression_t m_nCompressionType; // 0x21c            
            bool m_bStopped; // 0x220            
            uint8_t _pad0221[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTimeline because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CTimeline) == 0x228);
    };
};
