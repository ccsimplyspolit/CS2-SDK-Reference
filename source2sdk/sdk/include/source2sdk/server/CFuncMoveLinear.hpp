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
        // Size: 0x878
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMoveLinear : public source2sdk::server::CBaseToggle
        {
        public:
            source2sdk::server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x7f0            
            QAngle m_angMoveEntitySpace; // 0x7f4            
            Vector m_vecMoveDirParentSpace; // 0x800            
            uint8_t _pad080c[0x4]; // 0x80c
            CGameSoundEventName m_soundStart; // 0x810            
            CGameSoundEventName m_soundStop; // 0x818            
            CUtlSymbolLarge m_currentSound; // 0x820            
            float m_flBlockDamage; // 0x828            
            float m_flStartPosition; // 0x82c            
            uint8_t _pad0830[0x8]; // 0x830
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x838            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x850            
            float m_flSpeed; // 0x868            
            bool m_bCreateMovableNavMesh; // 0x86c            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x86d            
            bool m_bCreateNavObstacle; // 0x86e            
            uint8_t _pad086f[0x9];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // float InputSetPosition; // 0x0
            // float InputSetSpeed; // 0x0
            // CUtlSymbolLarge InputTeleportToTarget; // 0x0
            // float InputResetPosition; // 0x0
            // float InputSetMoveDistanceFromStart; // 0x0
            // float InputSetMoveDistanceFromEnd; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMoveLinear) == 0x878);
    };
};
