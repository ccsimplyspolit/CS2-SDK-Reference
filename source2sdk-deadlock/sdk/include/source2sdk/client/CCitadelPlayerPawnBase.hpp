#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BasePlayerPawn.hpp"

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
        // Size: 0x10d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPlayerPawnBase : public source2sdk::client::C_BasePlayerPawn
        {
        public:
            uint8_t _pad10c0[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayerPawnBase) == 0x10d8);
    };
};
