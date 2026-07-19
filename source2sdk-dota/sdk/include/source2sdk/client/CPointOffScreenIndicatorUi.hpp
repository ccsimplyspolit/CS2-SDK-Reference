#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_PointClientUIWorldPanel;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd00
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointOffScreenIndicatorUi : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // metadata: MNotSaved
            bool m_bBeenEnabled; // 0xcf0            
            // metadata: MNotSaved
            bool m_bHide; // 0xcf1            
            uint8_t _pad0cf2[0x2]; // 0xcf2
            // metadata: MNotSaved
            float m_flSeenTargetTime; // 0xcf4            
            // metadata: MNotSaved
            source2sdk::client::C_PointClientUIWorldPanel* m_pTargetPanel; // 0xcf8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointOffScreenIndicatorUi because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointOffScreenIndicatorUi) == 0xd00);
    };
};
