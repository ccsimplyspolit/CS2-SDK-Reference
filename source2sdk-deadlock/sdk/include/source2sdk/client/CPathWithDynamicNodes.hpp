#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPathSimple.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPathNode;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x740
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CPathNode > m_vecPathNodes"
        // static metadata: MNetworkVarNames "CTransform m_xInitialPathWorldToLocal"
        #pragma pack(push, 1)
        class CPathWithDynamicNodes : public source2sdk::client::CPathSimple
        {
        public:
            // metadata: MNetworkEnable
            // m_vecPathNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CPathNode>> m_vecPathNodes;
            char m_vecPathNodes[0x18]; // 0x700            
            uint8_t _pad0718[0x8]; // 0x718
            // metadata: MNetworkEnable
            CTransform m_xInitialPathWorldToLocal; // 0x720            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathWithDynamicNodes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPathWithDynamicNodes) == 0x740);
    };
};
