#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xd98
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_LastEnterWeight; // 0xb70            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xb74            
            // metadata: MNotSaved
            float m_LastExitWeight; // 0xb78            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xb7c            
            // metadata: MNotSaved
            bool m_bEnabled; // 0xb80            
            uint8_t _pad0b81[0x3]; // 0xb81
            // metadata: MNotSaved
            float m_MaxWeight; // 0xb84            
            // metadata: MNotSaved
            float m_FadeDuration; // 0xb88            
            // metadata: MNotSaved
            float m_Weight; // 0xb8c            
            // metadata: MNotSaved
            char m_lookupFilename[512]; // 0xb90            
            uint8_t _pad0d90[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xd98);
    };
};
