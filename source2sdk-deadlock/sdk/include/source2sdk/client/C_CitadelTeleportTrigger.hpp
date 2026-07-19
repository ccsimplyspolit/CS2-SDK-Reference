#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xa88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vExitOrigin"
        #pragma pack(push, 1)
        class C_CitadelTeleportTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vExitOrigin; // 0xa78            
            uint8_t _pad0a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelTeleportTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelTeleportTrigger) == 0xa88);
    };
};
