#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPulseGraphInstance_ServerEntity.hpp"

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
        // Size: 0x1c8
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphInstance_GameBlackboard : public source2sdk::server::CPulseGraphInstance_ServerEntity
        {
        public:
            uint8_t _pad01b8[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CPulseGraphInstance_GameBlackboard has no schema binary (size is a guess)
    };
};
