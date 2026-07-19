#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_NPC_Neutral_SinnersSacrifice.hpp"

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
        // Size: 0x1c40
        // Has VTable
        #pragma pack(push, 1)
        class C_NPC_Neutral_SinnersSacrifice_Hideout : public source2sdk::client::C_NPC_Neutral_SinnersSacrifice
        {
        public:
            uint8_t _pad1c38[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_NPC_Neutral_SinnersSacrifice_Hideout) == 0x1c40);
    };
};
