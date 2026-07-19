#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCSGrenade.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x10a0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSmokeGrenade : public source2sdk::server::CBaseCSGrenade
        {
        public:
            uint8_t _pad1090[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CSmokeGrenade has no schema binary (size is a guess)
    };
};
