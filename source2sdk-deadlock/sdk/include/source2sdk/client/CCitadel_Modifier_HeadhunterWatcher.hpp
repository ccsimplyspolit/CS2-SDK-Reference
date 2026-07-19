#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_HeadshotBoosterWatcher.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x418
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HeadhunterWatcher : public source2sdk::client::CCitadel_Modifier_HeadshotBoosterWatcher
        {
        public:
            uint8_t _pad0298[0x180];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HeadhunterWatcher) == 0x418);
    };
};
