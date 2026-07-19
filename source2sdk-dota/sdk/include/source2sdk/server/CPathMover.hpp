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
        struct CFuncMoverRouter;
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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathMover : public source2sdk::server::CPathWithDynamicNodes
        {
        public:
            // m_vecMovers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CFuncMover>> m_vecMovers;
            char m_vecMovers[0x18]; // 0x5e0            
            // m_vecSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CPathMoverEntitySpawner>> m_vecSpawners;
            char m_vecSpawners[0x18]; // 0x5f8            
            CUtlSymbolLarge m_iszMoverSpawnerName; // 0x610            
            // m_hMoverRouter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncMoverRouter> m_hMoverRouter;
            char m_hMoverRouter[0x4]; // 0x618            
            uint8_t _pad061c[0x4]; // 0x61c
            CUtlSymbolLarge m_iszMoverRouterName; // 0x620            
            float m_flSampleSpacing; // 0x628            
            uint8_t _pad062c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMover) == 0x630);
    };
};
