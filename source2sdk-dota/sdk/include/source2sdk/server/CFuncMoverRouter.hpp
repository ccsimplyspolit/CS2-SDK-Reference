#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMoverRouter : public source2sdk::server::CLogicalEntity
        {
        public:
            std::int32_t m_nMoverIndex; // 0x498            
            bool m_bRouteToAllMovers; // 0x49c            
            uint8_t _pad049d[0x3]; // 0x49d
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x4a0            
            uint8_t _pad04a4[0x4]; // 0x4a4
            CUtlSymbolLarge m_iszPathMoverName; // 0x4a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMoverRouter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMoverRouter) == 0x4b0);
    };
};
