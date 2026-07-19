#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPathWithDynamicNodes;
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
        // Size: 0x650
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathNode : public source2sdk::client::C_PointEntity
        {
        public:
            Vector m_vInTangentLocal; // 0x5f0            
            Vector m_vOutTangentLocal; // 0x5fc            
            CUtlString m_strParentPathUniqueID; // 0x608            
            CUtlString m_strPathNodeParameter; // 0x610            
            uint8_t _pad0618[0x8]; // 0x618
            CTransformWS m_xWSPrevParent; // 0x620            
            // m_hPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CPathWithDynamicNodes> m_hPath;
            char m_hPath[0x4]; // 0x640            
            uint8_t _pad0644[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPathNode) == 0x650);
    };
};
