#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSGO_TeamPreviewCharacterPosition.hpp"

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
        // Size: 0x13a0
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        #pragma pack(push, 1)
        class C_CSGO_TeamIntroCharacterPosition : public source2sdk::client::C_CSGO_TeamPreviewCharacterPosition
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_CSGO_TeamIntroCharacterPosition) == 0x13a0);
    };
};
