#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CNavLinkAreaEntity_NpcUserList_t.hpp"
#include "source2sdk/server/CNavLinkConnectionSave.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CRelativeTransform.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
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
        #pragma pack(push, 1)
        class CNavLinkAreaEntity : public source2sdk::server::CPointEntity
        {
        public:
            float m_flWidth; // 0x4a0            
            Vector m_vLocatorOffset; // 0x4a4            
            QAngle m_qLocatorAnglesOffset; // 0x4b0            
            uint8_t _pad04bc[0x4]; // 0x4bc
            CUtlSymbolLarge m_strEndLocatorParentName; // 0x4c0            
            // m_hEndLocatorParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndLocatorParent;
            char m_hEndLocatorParent[0x4]; // 0x4c8            
            uint8_t _pad04cc[0x4]; // 0x4cc
            source2sdk::server::CRelativeTransform m_endLocator; // 0x4d0            
            CUtlSymbolLarge m_strMovementForward; // 0x500            
            CUtlSymbolLarge m_strMovementReverse; // 0x508            
            uint8_t _pad0510[0x30]; // 0x510
            bool m_bEnabled; // 0x540            
            bool m_bAllowCrossMovableConnections; // 0x541            
            uint8_t _pad0542[0x6]; // 0x542
            CUtlSymbolLarge m_strFilterName; // 0x548            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x550            
            uint8_t _pad0554[0x4]; // 0x554
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkStart; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x570            
            bool m_bIsTerminus; // 0x588            
            uint8_t _pad0589[0x7]; // 0x589
            // m_vecSavedConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CNavLinkConnectionSave> m_vecSavedConnections;
            char m_vecSavedConnections[0x18]; // 0x590            
            // m_vecNpcUsersByNavLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CNavLinkAreaEntity_NpcUserList_t> m_vecNpcUsersByNavLink;
            char m_vecNpcUsersByNavLink[0x18]; // 0x5a8            
            CUtlSymbolLarge m_szListenForAnimTag; // 0x5c0            
            bool m_bIsListeningForAnimTag; // 0x5c8            
            uint8_t _pad05c9[0xf]; // 0x5c9
            source2sdk::entity2::CEntityIOOutput m_OnAnimTagFired; // 0x5d8            
            source2sdk::entity2::CEntityIOOutput m_OnAnimTagStart; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnAnimTagEnd; // 0x608            
            std::int32_t m_nProcessOrder; // 0x620            
            std::int32_t m_nSplits; // 0x624            
            uint8_t _pad0628[0x8];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputUpdate; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkAreaEntity) == 0x630);
    };
};
