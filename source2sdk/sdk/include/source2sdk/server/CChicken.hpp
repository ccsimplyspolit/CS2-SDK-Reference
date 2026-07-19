#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EChickenActivity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x30c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CChicken : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0ba0[0x20]; // 0xba0
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0xbc0            
            source2sdk::server::CountdownTimer m_updateTimer; // 0xeb8            
            VectorWS m_stuckAnchor; // 0xed0            
            uint8_t _pad0edc[0x4]; // 0xedc
            source2sdk::server::CountdownTimer m_collisionStuckTimer; // 0xee0            
            bool m_isOnGround; // 0xef8            
            uint8_t _pad0ef9[0x3]; // 0xef9
            Vector m_vFallVelocity; // 0xefc            
            source2sdk::client::EChickenActivity m_desiredActivity; // 0xf08            
            source2sdk::client::EChickenActivity m_currentActivity; // 0xf0c            
            source2sdk::server::CountdownTimer m_activityTimer; // 0xf10            
            float m_turnRate; // 0xf28            
            // m_fleeFrom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_fleeFrom;
            char m_fleeFrom[0x4]; // 0xf2c            
            source2sdk::server::CountdownTimer m_moveRateThrottleTimer; // 0xf30            
            source2sdk::server::CountdownTimer m_startleTimer; // 0xf48            
            source2sdk::server::CountdownTimer m_vocalizeTimer; // 0xf60            
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_leader;
            char m_leader[0x4]; // 0xf78            
            uint8_t _pad0f7c[0x14]; // 0xf7c
            source2sdk::server::CountdownTimer m_reuseTimer; // 0xf90            
            source2sdk::server::CountdownTimer m_jumpTimer; // 0xfa8            
            float m_flLastJumpTime; // 0xfc0            
            uint8_t _pad0fc4[0x200c]; // 0xfc4
            source2sdk::server::CountdownTimer m_repathTimer; // 0x2fd0            
            uint8_t _pad2fe8[0x80]; // 0x2fe8
            VectorWS m_vecPathGoal; // 0x3068            
            source2sdk::entity2::GameTime_t m_flActiveFollowStartTime; // 0x3074            
            source2sdk::server::CountdownTimer m_followMinuteTimer; // 0x3078            
            uint8_t _pad3090[0x8]; // 0x3090
            source2sdk::server::CountdownTimer m_BlockDirectionTimer; // 0x3098            
            uint8_t _pad30b0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChicken because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CChicken) == 0x30c0);
    };
};
