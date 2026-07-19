#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
#include "source2sdk/server/locksound_t.hpp"

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
        // Size: 0x980
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsUsable"
        #pragma pack(push, 1)
        class CBaseDoor : public source2sdk::server::CBaseToggle
        {
        public:
            uint8_t _pad0800[0x10]; // 0x800
            QAngle m_angMoveEntitySpace; // 0x810            
            Vector m_vecMoveDirParentSpace; // 0x81c            
            // metadata: MNotSaved
            source2sdk::server::locksound_t m_ls; // 0x828            
            bool m_bForceClosed; // 0x848            
            bool m_bDoorGroup; // 0x849            
            bool m_bLocked; // 0x84a            
            bool m_bIgnoreDebris; // 0x84b            
            bool m_bNoNPCs; // 0x84c            
            uint8_t _pad084d[0x3]; // 0x84d
            source2sdk::server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x850            
            float m_flBlockDamage; // 0x854            
            CUtlSymbolLarge m_NoiseMoving; // 0x858            
            CUtlSymbolLarge m_NoiseArrived; // 0x860            
            CUtlSymbolLarge m_NoiseMovingClosed; // 0x868            
            CUtlSymbolLarge m_NoiseArrivedClosed; // 0x870            
            CUtlSymbolLarge m_ChainTarget; // 0x878            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0x880            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0x898            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x8c8            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x8e0            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x8f8            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0x910            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0x928            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0x940            
            bool m_bLoopMoveSound; // 0x958            
            uint8_t _pad0959[0x1f]; // 0x959
            bool m_bCreateNavObstacle; // 0x978            
            // metadata: MNotSaved
            bool m_isChaining; // 0x979            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bIsUsable; // 0x97a            
            uint8_t _pad097b[0x5];
            
            // Datamap fields:
            // void m_nMovingSoundGUID; // 0x95c
            //  m_ls.sLockedSound; // 0x830
            //  m_ls.sUnlockedSound; // 0x838
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetToggleState; // 0x0
            // bool InputSetNoNPCs; // 0x0
            // void CBaseDoorDoorTouch; // 0x0
            // void CBaseDoorDoorGoUp; // 0x0
            // void CBaseDoorDoorGoDown; // 0x0
            // void CBaseDoorDoorHitTop; // 0x0
            // void CBaseDoorDoorHitBottom; // 0x0
            // void CBaseDoorMovingSoundThink; // 0x0
            // void CBaseDoorCloseAreaPortalsThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseDoor) == 0x980);
    };
};
