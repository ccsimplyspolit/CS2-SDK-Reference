#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_UseServices.hpp"

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
        // Size: 0x48
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_UseServices : public source2sdk::client::CPlayer_UseServices
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_UseServices) == 0x48);
    };
};
