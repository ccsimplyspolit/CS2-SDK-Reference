#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"

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
        // Size: 0xc00
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelDruidHealingFruit : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0bf0[0x10];
            // Datamap fields:
            // CHandle< CBaseEntity > ability; // 0x7fffffff
            // CHandle< CBaseEntity > caster; // 0x7fffffff
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadelDruidHealingFruit has no schema binary (size is a guess)
    };
};
