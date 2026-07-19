#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathWithDynamicNodes;
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
        // Size: 0x500
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathNode : public source2sdk::server::CPointEntity
        {
        public:
            Vector m_vInTangentLocal; // 0x4a8            
            Vector m_vOutTangentLocal; // 0x4b4            
            CUtlString m_strParentPathUniqueID; // 0x4c0            
            CUtlString m_strPathNodeParameter; // 0x4c8            
            CTransformWS m_xWSPrevParent; // 0x4d0            
            // m_hPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathWithDynamicNodes> m_hPath;
            char m_hPath[0x4]; // 0x4f0            
            uint8_t _pad04f4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathNode) == 0x500);
    };
};
