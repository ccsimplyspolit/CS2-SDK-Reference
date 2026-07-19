#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        #pragma pack(push, 1)
        struct CNavLinkAreaEntity_NpcUserList_t
        {
        public:
            // m_vecUsers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CAI_BaseNPC>> m_vecUsers;
            char m_vecUsers[0x18]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkAreaEntity_NpcUserList_t, m_vecUsers) == 0x0);
        
        static_assert(sizeof(source2sdk::server::CNavLinkAreaEntity_NpcUserList_t) == 0x18);
    };
};
