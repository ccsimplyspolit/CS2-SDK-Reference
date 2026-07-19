#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

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
        // Size: 0xbc0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CFuncRetakeBarrier : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0ba0[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CFuncRetakeBarrier) == 0xbc0);
    };
};
