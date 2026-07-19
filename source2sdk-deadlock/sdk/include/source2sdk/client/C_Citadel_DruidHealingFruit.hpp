#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"

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
        // Size: 0xcc0
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_DruidHealingFruit : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0cb0[0x10];
            // Datamap fields:
            // CHandle< CBaseEntity > ability; // 0x7fffffff
            // CHandle< CBaseEntity > caster; // 0x7fffffff
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: C_Citadel_DruidHealingFruit has no schema binary (size is a guess)
    };
};
