#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/DevTriggerType_t.hpp"

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
        // Size: 0x8e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelDevTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            source2sdk::server::DevTriggerType_t m_eDevTriggerType; // 0x8e0            
            uint8_t _pad08e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelDevTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelDevTrigger) == 0x8e8);
    };
};
