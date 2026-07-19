#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_PestilenceDrone : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0x60];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CNPC_PestilenceDrone has no schema binary (size is a guess)
    };
};
