#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x28
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CNetworkOriginQuantizedVector
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            CNetworkedQuantizedFloat m_vecX; // 0x10            
            CNetworkedQuantizedFloat m_vecY; // 0x18            
            CNetworkedQuantizedFloat m_vecZ; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkOriginQuantizedVector, m_vecX) == 0x10);
        static_assert(offsetof(source2sdk::client::CNetworkOriginQuantizedVector, m_vecY) == 0x18);
        static_assert(offsetof(source2sdk::client::CNetworkOriginQuantizedVector, m_vecZ) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CNetworkOriginQuantizedVector) == 0x28);
    };
};
