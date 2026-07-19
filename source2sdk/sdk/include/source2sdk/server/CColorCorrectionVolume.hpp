#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb08
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CColorCorrectionVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            float m_MaxWeight; // 0x8e8            
            float m_FadeDuration; // 0x8ec            
            float m_Weight; // 0x8f0            
            char m_lookupFilename[512]; // 0x8f4            
            float m_LastEnterWeight; // 0xaf4            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xaf8            
            float m_LastExitWeight; // 0xafc            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xb00            
            uint8_t _pad0b04[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrectionVolume) == 0xb08);
    };
};
