#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xda0
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class CBasePropDoor : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0ba0[0x10]; // 0xba0
            float m_flAutoReturnDelay; // 0xbb0            
            uint8_t _pad0bb4[0x4]; // 0xbb4
            // metadata: MNotSaved
            // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePropDoor>> m_hDoorList;
            char m_hDoorList[0x18]; // 0xbb8            
            std::int32_t m_nHardwareType; // 0xbd0            
            bool m_bNeedsHardware; // 0xbd4            
            uint8_t _pad0bd5[0x3]; // 0xbd5
            source2sdk::client::DoorState_t m_eDoorState; // 0xbd8            
            bool m_bLocked; // 0xbdc            
            bool m_bNoNPCs; // 0xbdd            
            uint8_t _pad0bde[0x2]; // 0xbde
            VectorWS m_closedPosition; // 0xbe0            
            QAngle m_closedAngles; // 0xbec            
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBlocker;
            char m_hBlocker[0x4]; // 0xbf8            
            bool m_bFirstBlocked; // 0xbfc            
            uint8_t _pad0bfd[0x3]; // 0xbfd
            source2sdk::server::locksound_t m_ls; // 0xc00            
            bool m_bForceClosed; // 0xc20            
            uint8_t _pad0c21[0x3]; // 0xc21
            VectorWS m_vecLatchWorldPosition; // 0xc24            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0xc30            
            float m_flSpeed; // 0xc34            
            uint8_t _pad0c38[0x18]; // 0xc38
            CGameSoundEventName m_SoundMoving; // 0xc50            
            CGameSoundEventName m_SoundOpen; // 0xc58            
            CGameSoundEventName m_SoundClose; // 0xc60            
            CGameSoundEventName m_SoundLock; // 0xc68            
            CGameSoundEventName m_SoundUnlock; // 0xc70            
            CGameSoundEventName m_SoundLatch; // 0xc78            
            // metadata: MNotSaved
            CGameSoundEventName m_SoundPound; // 0xc80            
            CGameSoundEventName m_SoundJiggle; // 0xc88            
            CGameSoundEventName m_SoundLockedAnim; // 0xc90            
            // metadata: MNotSaved
            std::int32_t m_numCloseAttempts; // 0xc98            
            // metadata: MNotSaved
            CUtlStringToken m_nPhysicsMaterial; // 0xc9c            
            CUtlSymbolLarge m_SlaveName; // 0xca0            
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xca8            
            uint8_t _pad0cac[0x4]; // 0xcac
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0xcb0            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0xcc8            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xce0            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xcf8            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xd10            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xd28            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0xd40            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xd58            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xd70            
            source2sdk::entity2::CEntityIOOutput m_OnAjarOpen; // 0xd88            
            
            // Datamap fields:
            // void InputOpen; // 0x0
            // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
            // float InputOpenAwayFromActivator; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPlayerOpen; // 0x0
            // void InputPlayerClose; // 0x0
            // bool InputSetNoNPCs; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePropDoor) == 0xda0);
    };
};
