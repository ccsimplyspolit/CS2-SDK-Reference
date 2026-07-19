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
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CNetworkOriginCellCoordQuantizedVector
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::uint16_t m_cellX; // 0x10            
            std::uint16_t m_cellY; // 0x12            
            std::uint16_t m_cellZ; // 0x14            
            std::uint16_t m_nOutsideWorld; // 0x16            
            CNetworkedQuantizedFloat m_vecX; // 0x18            
            CNetworkedQuantizedFloat m_vecY; // 0x20            
            CNetworkedQuantizedFloat m_vecZ; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_cellX) == 0x10);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_cellY) == 0x12);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_cellZ) == 0x14);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_nOutsideWorld) == 0x16);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_vecX) == 0x18);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_vecY) == 0x20);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_vecZ) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector) == 0x30);
    };
};
