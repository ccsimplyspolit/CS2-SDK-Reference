#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathWithDynamicNodes.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMoverEntitySpawner;
    };
};

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
        // Size: 0x620
        // Has VTable
        #pragma pack(push, 1)
        class CPathMover : public source2sdk::server::CPathWithDynamicNodes
        {
        public:
            // m_vecMovers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CFuncMover>> m_vecMovers;
            char m_vecMovers[0x18]; // 0x5f0            
            // m_hMoverSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMoverEntitySpawner> m_hMoverSpawner;
            char m_hMoverSpawner[0x4]; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            CUtlSymbolLarge m_iszMoverSpawnerName; // 0x610            
            uint8_t _pad0618[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMover) == 0x620);
    };
};
