#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x388
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_EtherealBullets_Watcher : public source2sdk::client::CCitadel_Modifier_BaseEventProc
        {
        public:
            uint8_t _pad01f8[0x184]; // 0x1f8
            bool m_bProcNextHit; // 0x37c            
            uint8_t _pad037d[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_EtherealBullets_Watcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_EtherealBullets_Watcher) == 0x388);
    };
};
