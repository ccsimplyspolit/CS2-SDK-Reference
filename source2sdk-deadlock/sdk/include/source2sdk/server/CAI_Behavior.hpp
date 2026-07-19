#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Behavior : public source2sdk::client::CAI_Component
        {
        public:
            bool m_bActive; // 0x50            
            // metadata: MNotSaved
            bool m_bOverrode; // 0x51            
            uint8_t _pad0052[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Behavior because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Behavior) == 0x58);
    };
};
