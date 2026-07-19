#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x528
        // Has VTable
        #pragma pack(push, 1)
        class CInfoHeroTestingController : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04a0[0x88];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CInfoHeroTestingController has no schema binary (size is a guess)
    };
};
