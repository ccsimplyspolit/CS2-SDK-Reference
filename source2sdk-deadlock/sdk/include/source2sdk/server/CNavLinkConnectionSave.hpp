#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/NavAreaSave_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x2c
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CNavLinkConnectionSave
        {
        public:
            // metadata: MNotSaved
            // m_hLinkEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLinkEntity;
            char m_hLinkEntity[0x4]; // 0x0            
            std::uint32_t m_nLinkArea; // 0x4            
            source2sdk::server::NavAreaSave_t m_otherArea; // 0x8            
            Vector m_vPortalALocal; // 0x10            
            Vector m_vPortalBLocal; // 0x1c            
            bool m_bIsEntry; // 0x28            
            uint8_t _pad0029[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkConnectionSave, m_hLinkEntity) == 0x0);
        static_assert(offsetof(source2sdk::server::CNavLinkConnectionSave, m_nLinkArea) == 0x4);
        static_assert(offsetof(source2sdk::server::CNavLinkConnectionSave, m_otherArea) == 0x8);
        static_assert(offsetof(source2sdk::server::CNavLinkConnectionSave, m_vPortalALocal) == 0x10);
        static_assert(offsetof(source2sdk::server::CNavLinkConnectionSave, m_vPortalBLocal) == 0x1c);
        static_assert(offsetof(source2sdk::server::CNavLinkConnectionSave, m_bIsEntry) == 0x28);
        
        static_assert(sizeof(source2sdk::server::CNavLinkConnectionSave) == 0x2c);
    };
};
