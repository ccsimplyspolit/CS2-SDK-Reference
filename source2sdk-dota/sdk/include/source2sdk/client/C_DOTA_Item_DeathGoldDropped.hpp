#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"

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
        // Size: 0xb60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_DeathGoldDropped : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0ac0[0xa0];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: C_DOTA_Item_DeathGoldDropped has no schema binary (size is a guess)
    };
};
