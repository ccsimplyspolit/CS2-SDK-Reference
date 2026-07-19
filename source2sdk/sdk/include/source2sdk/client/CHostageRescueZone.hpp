#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CHostageRescueZoneShim.hpp"

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
        // Size: 0x10b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CHostageRescueZone : public source2sdk::client::CHostageRescueZoneShim
        {
        public:
            uint8_t _pad1098[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CHostageRescueZone) == 0x10b0);
    };
};
