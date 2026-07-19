#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSGO_PreviewPlayer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x3500
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_CSGO_TeamPreviewModel : public source2sdk::client::C_CSGO_PreviewPlayer
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: C_CSGO_TeamPreviewModel has no schema binary (size is a guess)
    };
};
