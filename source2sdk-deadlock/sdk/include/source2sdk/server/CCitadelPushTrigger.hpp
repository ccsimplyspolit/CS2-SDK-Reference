#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerModifier.hpp"

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
        // Size: 0x908
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPushTrigger : public source2sdk::server::CTriggerModifier
        {
        public:
            Vector m_vPush; // 0x8f0            
            QAngle m_angPushEntitySpace; // 0x8fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPushTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPushTrigger) == 0x908);
    };
};
