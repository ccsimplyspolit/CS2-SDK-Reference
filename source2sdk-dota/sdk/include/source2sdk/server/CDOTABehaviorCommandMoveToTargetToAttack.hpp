#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x178
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToTargetToAttack
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x150            
            std::int32_t m_nMovementState; // 0x154            
            bool m_bFailedCast; // 0x158            
            uint8_t _pad0159[0x3]; // 0x159
            float m_flTargetRange; // 0x15c            
            bool m_bDeny; // 0x160            
            bool m_bInvisBreak; // 0x161            
            bool m_bNightmareAttack; // 0x162            
            bool m_bTurningToTarget; // 0x163            
            float m_flTargetAngle; // 0x164            
            VectorWS m_vMoveToOrderPosition; // 0x168            
            uint8_t _pad0174[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_hTarget) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_nMovementState) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_bFailedCast) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_flTargetRange) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_bDeny) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_bInvisBreak) == 0x161);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_bNightmareAttack) == 0x162);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_bTurningToTarget) == 0x163);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_flTargetAngle) == 0x164);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack, m_vMoveToOrderPosition) == 0x168);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToAttack) == 0x178);
    };
};
