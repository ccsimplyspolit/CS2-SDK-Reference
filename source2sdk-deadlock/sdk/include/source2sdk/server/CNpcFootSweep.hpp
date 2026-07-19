#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/FootSweepPusher_t.hpp"

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
        // Size: 0x900
        // Has VTable
        #pragma pack(push, 1)
        class CNpcFootSweep : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_vecPushers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::FootSweepPusher_t> m_vecPushers;
            char m_vecPushers[0x18]; // 0x8e0            
            bool m_bUseCenterPusher; // 0x8f8            
            bool m_bUseForwardPusher; // 0x8f9            
            uint8_t _pad08fa[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNpcFootSweep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNpcFootSweep) == 0x900);
    };
};
