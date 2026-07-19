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
        // Size: 0xed0
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
        // static metadata: MNetworkVarNames "bool m_bLocked"
        // static metadata: MNetworkVarNames "bool m_bNoNPCs"
        // static metadata: MNetworkVarNames "Vector m_closedPosition"
        // static metadata: MNetworkVarNames "QAngle m_closedAngles"
        // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
        #pragma pack(push, 1)
        class CBasePropDoor : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0cd0[0x10]; // 0xcd0
            float m_flAutoReturnDelay; // 0xce0            
            uint8_t _pad0ce4[0x4]; // 0xce4
            // metadata: MNotSaved
            // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePropDoor>> m_hDoorList;
            char m_hDoorList[0x18]; // 0xce8            
            std::int32_t m_nHardwareType; // 0xd00            
            bool m_bNeedsHardware; // 0xd04            
            uint8_t _pad0d05[0x3]; // 0xd05
            // metadata: MNetworkEnable
            source2sdk::client::DoorState_t m_eDoorState; // 0xd08            
            // metadata: MNetworkEnable
            bool m_bLocked; // 0xd0c            
            // metadata: MNetworkEnable
            bool m_bNoNPCs; // 0xd0d            
            uint8_t _pad0d0e[0x2]; // 0xd0e
            // metadata: MNetworkEnable
            Vector m_closedPosition; // 0xd10            
            // metadata: MNetworkEnable
            QAngle m_closedAngles; // 0xd1c            
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBlocker;
            char m_hBlocker[0x4]; // 0xd28            
            bool m_bFirstBlocked; // 0xd2c            
            uint8_t _pad0d2d[0x3]; // 0xd2d
            source2sdk::server::locksound_t m_ls; // 0xd30            
            bool m_bForceClosed; // 0xd50            
            uint8_t _pad0d51[0x3]; // 0xd51
            VectorWS m_vecLatchWorldPosition; // 0xd54            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0xd60            
            uint8_t _pad0d64[0x14]; // 0xd64
            CUtlSymbolLarge m_SoundMoving; // 0xd78            
            CUtlSymbolLarge m_SoundOpen; // 0xd80            
            CUtlSymbolLarge m_SoundClose; // 0xd88            
            CUtlSymbolLarge m_SoundLock; // 0xd90            
            CUtlSymbolLarge m_SoundUnlock; // 0xd98            
            CUtlSymbolLarge m_SoundLatch; // 0xda0            
            // metadata: MNotSaved
            CUtlSymbolLarge m_SoundPound; // 0xda8            
            CUtlSymbolLarge m_SoundJiggle; // 0xdb0            
            CUtlSymbolLarge m_SoundLockedAnim; // 0xdb8            
            // metadata: MNotSaved
            std::int32_t m_numCloseAttempts; // 0xdc0            
            // metadata: MNotSaved
            CUtlStringToken m_nPhysicsMaterial; // 0xdc4            
            CUtlSymbolLarge m_SlaveName; // 0xdc8            
            // metadata: MNetworkEnable
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xdd0            
            uint8_t _pad0dd4[0x4]; // 0xdd4
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0xdd8            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0xdf0            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xe08            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xe20            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xe38            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xe50            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0xe68            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xe80            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xe98            
            source2sdk::entity2::CEntityIOOutput m_OnAjarOpen; // 0xeb0            
            uint8_t _pad0ec8[0x8];
            
            // Datamap fields:
            // void m_hSoundMoving; // 0xd64
            //  m_ls.sLockedSound; // 0xd38
            //  m_ls.sUnlockedSound; // 0xd40
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
            // void CBasePropDoorDoorOpenMoveDone; // 0x0
            // void CBasePropDoorDoorCloseMoveDone; // 0x0
            // void CBasePropDoorDoorAutoCloseThink; // 0x0
            // void CBasePropDoorDisableAreaPortalThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePropDoor) == 0xed0);
    };
};
