#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityDruidBasePlant.hpp"

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
        // Size: 0x1260
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelAbilityDruidPlantHealingTree : public source2sdk::client::CCitadelAbilityDruidBasePlant
        {
        public:
            uint8_t _pad11e0[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadelAbilityDruidPlantHealingTree has no schema binary (size is a guess)
    };
};
