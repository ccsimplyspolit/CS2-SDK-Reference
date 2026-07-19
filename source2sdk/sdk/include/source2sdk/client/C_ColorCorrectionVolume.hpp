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
        // Size: 0x12c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_LastEnterWeight; // 0x1098            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0x109c            
            // metadata: MNotSaved
            float m_LastExitWeight; // 0x10a0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0x10a4            
            // metadata: MNotSaved
            bool m_bEnabled; // 0x10a8            
            uint8_t _pad10a9[0x3]; // 0x10a9
            // metadata: MNotSaved
            float m_MaxWeight; // 0x10ac            
            // metadata: MNotSaved
            float m_FadeDuration; // 0x10b0            
            // metadata: MNotSaved
            float m_Weight; // 0x10b4            
            // metadata: MNotSaved
            char m_lookupFilename[512]; // 0x10b8            
            uint8_t _pad12b8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0x12c0);
    };
};
