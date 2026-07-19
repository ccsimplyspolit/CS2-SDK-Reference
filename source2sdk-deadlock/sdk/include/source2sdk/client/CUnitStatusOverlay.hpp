#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc00
        // Has VTable
        #pragma pack(push, 1)
        class CUnitStatusOverlay : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CUnitStatusOverlay) == 0xc00);
    };
};
