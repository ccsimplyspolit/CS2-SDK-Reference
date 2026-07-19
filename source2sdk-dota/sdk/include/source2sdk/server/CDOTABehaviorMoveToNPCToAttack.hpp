#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorMoveToNPCToAttack
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            uint8_t _pad0150[0x8]; // 0x150
            bool m_bMovingToLastKnownTargetPosition; // 0x158            
            uint8_t _pad0159[0x7]; // 0x159
            source2sdk::server::CountdownTimer m_AttackDelay; // 0x160            
            source2sdk::server::CountdownTimer m_ChaseLimit; // 0x178            
            bool m_bInAttackPosition; // 0x190            
            bool m_bTurningToTarget; // 0x191            
            uint8_t _pad0192[0x2]; // 0x192
            float m_flTargetAngle; // 0x194            
            bool m_bAttackMove; // 0x198            
            uint8_t _pad0199[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bMovingToLastKnownTargetPosition) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_AttackDelay) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_ChaseLimit) == 0x178);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bInAttackPosition) == 0x190);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bTurningToTarget) == 0x191);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_flTargetAngle) == 0x194);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack, m_bAttackMove) == 0x198);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorMoveToNPCToAttack) == 0x1a0);
    };
};
