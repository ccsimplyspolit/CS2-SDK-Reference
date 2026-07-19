#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathSimple.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathNode;
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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathWithDynamicNodes : public source2sdk::server::CPathSimple
        {
        public:
            // m_vecPathNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CPathNode>> m_vecPathNodes;
            char m_vecPathNodes[0x18]; // 0x5a0            
            uint8_t _pad05b8[0x8]; // 0x5b8
            CTransform m_xInitialPathWorldToLocal; // 0x5c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathWithDynamicNodes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathWithDynamicNodes) == 0x5e0);
    };
};
