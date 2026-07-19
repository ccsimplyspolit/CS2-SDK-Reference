#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

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
        // Size: 0x608
        // Has VTable
        #pragma pack(push, 1)
        class CInfoKOTHSpawnLocation : public source2sdk::client::C_PointEntity
        {
        public:
            uint8_t _pad05f0[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CInfoKOTHSpawnLocation has no schema binary (size is a guess)
    };
};
