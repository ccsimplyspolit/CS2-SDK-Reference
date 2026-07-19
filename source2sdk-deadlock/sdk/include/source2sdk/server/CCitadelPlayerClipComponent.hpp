#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPlayerClipComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerClipComponent) == 0x20);
    };
};
