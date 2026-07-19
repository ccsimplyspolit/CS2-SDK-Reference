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
        // Size: 0x978
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseDoor : public source2sdk::server::CBaseToggle
        {
        public:
            uint8_t _pad07f0[0x10]; // 0x7f0
            QAngle m_angMoveEntitySpace; // 0x800            
            Vector m_vecMoveDirParentSpace; // 0x80c            
            // metadata: MNotSaved
            source2sdk::server::locksound_t m_ls; // 0x818            
            bool m_bForceClosed; // 0x838            
            bool m_bDoorGroup; // 0x839            
            bool m_bLocked; // 0x83a            
            bool m_bIgnoreDebris; // 0x83b            
            bool m_bNoNPCs; // 0x83c            
            uint8_t _pad083d[0x3]; // 0x83d
            source2sdk::server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x840            
            float m_flBlockDamage; // 0x844            
            CGameSoundEventName m_NoiseMoving; // 0x848            
            CGameSoundEventName m_NoiseArrived; // 0x850            
            CGameSoundEventName m_NoiseMovingClosed; // 0x858            
            CGameSoundEventName m_NoiseArrivedClosed; // 0x860            
            CUtlSymbolLarge m_ChainTarget; // 0x868            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0x870            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0x888            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x8a0            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x8b8            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x8d0            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0x900            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0x918            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0x930            
            bool m_bLoopMoveSound; // 0x948            
            uint8_t _pad0949[0x1f]; // 0x949
            bool m_bCreateNavObstacle; // 0x968            
            uint8_t _pad0969[0x3]; // 0x969
            float m_flSpeed; // 0x96c            
            // metadata: MNotSaved
            bool m_isChaining; // 0x970            
            // metadata: MNotSaved
            bool m_bIsUsable; // 0x971            
            uint8_t _pad0972[0x6];
            
            // Datamap fields:
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetToggleState; // 0x0
            // bool InputSetNoNPCs; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseDoor) == 0x978);
    };
};
