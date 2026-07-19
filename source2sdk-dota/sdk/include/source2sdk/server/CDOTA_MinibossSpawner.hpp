#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_MinibossSpawner : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad0498[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CDOTA_MinibossSpawner has no schema binary (size is a guess)
    };
};
