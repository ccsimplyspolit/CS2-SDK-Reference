#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelPlayer_MovementServices.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x3a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelFamiliarClone_MovementServices : public source2sdk::server::CCitadelPlayer_MovementServices
        {
        public:
            uint8_t _pad02f8[0xa8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadelFamiliarClone_MovementServices has no schema binary (size is a guess)
    };
};
