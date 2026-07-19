#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_NPC_TrooperNeutral.hpp"

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
        // Size: 0x1c10
        // Has VTable
        #pragma pack(push, 1)
        class C_NPC_TrooperNeutralNodeMover : public source2sdk::client::C_NPC_TrooperNeutral
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_NPC_TrooperNeutralNodeMover) == 0x1c10);
    };
};
