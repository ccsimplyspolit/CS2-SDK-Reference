#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct AI_FreePassParams_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float timeToTrigger; // 0x8            
            float duration; // 0xc            
            float moveTolerance; // 0x10            
            float refillRate; // 0x14            
            float coverDist; // 0x18            
            float peekTime; // 0x1c            
            float peekTimeAfterDamage; // 0x20            
            float peekEyeDist; // 0x24            
            float peekEyeDistZ; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, timeToTrigger) == 0x8);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, duration) == 0xc);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, moveTolerance) == 0x10);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, refillRate) == 0x14);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, coverDist) == 0x18);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, peekTime) == 0x1c);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, peekTimeAfterDamage) == 0x20);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, peekEyeDist) == 0x24);
        static_assert(offsetof(source2sdk::server::AI_FreePassParams_t, peekEyeDistZ) == 0x28);
        
        static_assert(sizeof(source2sdk::server::AI_FreePassParams_t) == 0x30);
    };
};
