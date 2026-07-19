#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/MoveLinearAuthoredPos_t.hpp"

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
        // Size: 0x888
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecVelocity"
        // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
        #pragma pack(push, 1)
        class CFuncMoveLinear : public source2sdk::server::CBaseToggle
        {
        public:
            source2sdk::server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x800            
            QAngle m_angMoveEntitySpace; // 0x804            
            Vector m_vecMoveDirParentSpace; // 0x810            
            uint8_t _pad081c[0x4]; // 0x81c
            CUtlSymbolLarge m_soundStart; // 0x820            
            CUtlSymbolLarge m_soundStop; // 0x828            
            CUtlSymbolLarge m_currentSound; // 0x830            
            float m_flBlockDamage; // 0x838            
            float m_flStartPosition; // 0x83c            
            uint8_t _pad0840[0x8]; // 0x840
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x848            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x860            
            bool m_bCreateMovableNavMesh; // 0x878            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x879            
            bool m_bCreateNavObstacle; // 0x87a            
            uint8_t _pad087b[0xd];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncMoveLinearNavObstacleThink; // 0x0
            // void CFuncMoveLinearNavMovableThink; // 0x0
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // float InputSetPosition; // 0x0
            // float InputSetSpeed; // 0x0
            // CUtlSymbolLarge InputTeleportToTarget; // 0x0
            // float InputResetPosition; // 0x0
            // float InputSetMoveDistanceFromStart; // 0x0
            // float InputSetMoveDistanceFromEnd; // 0x0
            // void CFuncMoveLinearStopMoveSound; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMoveLinear) == 0x888);
    };
};
