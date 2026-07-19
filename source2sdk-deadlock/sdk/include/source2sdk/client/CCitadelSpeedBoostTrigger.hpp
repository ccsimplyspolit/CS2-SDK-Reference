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
        // Size: 0xa80
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelSpeedBoostTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_flMovespeedOverride; // 0xa78            
            uint8_t _pad0a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSpeedBoostTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSpeedBoostTrigger) == 0xa80);
    };
};
