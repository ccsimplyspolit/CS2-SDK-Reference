#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc0
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimGraphControllerBase
        {
        public:
            uint8_t _pad0000[0x4c]; // 0x0
            source2sdk::client::ExternalAnimGraphHandle_t m_hExternalGraph; // 0x4c            
            uint8_t _pad0050[0x70];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnimGraphControllerBase, m_hExternalGraph) == 0x4c);
        
        static_assert(sizeof(source2sdk::client::CAnimGraphControllerBase) == 0xc0);
    };
};
