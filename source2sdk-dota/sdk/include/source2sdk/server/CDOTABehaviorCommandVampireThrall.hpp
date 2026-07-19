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
        // Size: 0x188
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandVampireThrall
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x150            
            uint8_t _pad0154[0x4]; // 0x154
            float m_flTargetRange; // 0x158            
            bool m_bDeny; // 0x15c            
            bool m_bInvisBreak; // 0x15d            
            bool m_bNightmareAttack; // 0x15e            
            bool m_bTurningToTarget; // 0x15f            
            bool m_bHasPositionOrder; // 0x160            
            bool m_bIsAggressive; // 0x161            
            uint8_t _pad0162[0x2]; // 0x162
            float m_flTargetAngle; // 0x164            
            Vector m_vFollowOffset; // 0x168            
            VectorWS m_vMoveToPosition; // 0x174            
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMaster;
            char m_hMaster[0x4]; // 0x180            
            uint8_t _pad0184[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_hTarget) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_flTargetRange) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bDeny) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bInvisBreak) == 0x15d);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bNightmareAttack) == 0x15e);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bTurningToTarget) == 0x15f);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bHasPositionOrder) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bIsAggressive) == 0x161);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_flTargetAngle) == 0x164);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_vFollowOffset) == 0x168);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_vMoveToPosition) == 0x174);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_hMaster) == 0x180);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandVampireThrall) == 0x188);
    };
};
