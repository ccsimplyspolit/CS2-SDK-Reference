#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelBulletRedirectVolume : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0780[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadelBulletRedirectVolume has no schema binary (size is a guess)
    };
};
