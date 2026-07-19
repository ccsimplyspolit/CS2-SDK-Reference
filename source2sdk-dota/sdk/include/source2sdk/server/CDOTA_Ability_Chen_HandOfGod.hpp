#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x598
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Chen_HandOfGod : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CDOTA_Ability_Chen_HandOfGod has no schema binary (size is a guess)
    };
};
