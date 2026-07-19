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
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorInvade
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_goalEntity;
            char m_goalEntity[0x4]; // 0x150            
            // m_nextGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_nextGoalEntity;
            char m_nextGoalEntity[0x4]; // 0x154            
            bool m_bReachedFinalGoal; // 0x158            
            bool m_bRequireReachingEndPath; // 0x159            
            uint8_t _pad015a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_goalEntity) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_nextGoalEntity) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_bReachedFinalGoal) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_bRequireReachingEndPath) == 0x159);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorInvade) == 0x160);
    };
};
