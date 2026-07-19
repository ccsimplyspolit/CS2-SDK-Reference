#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCSPlayerAnimationState_AirAction_t.hpp"
#include "source2sdk/client/CCSPlayerAnimationState_Direction_t.hpp"
#include "source2sdk/client/CCSPlayerAnimationState_GroundMoveState_t.hpp"
#include "source2sdk/client/CCSPlayerAnimationState_MoveType_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xe0
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CCSPlayerAnimationState
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            source2sdk::client::CCSPlayerAnimationState_MoveType_t m_currentMoveType; // 0x18            
            source2sdk::client::CCSPlayerAnimationState_GroundMoveState_t m_groundMoveState; // 0x19            
            source2sdk::client::CCSPlayerAnimationState_Direction_t m_groundActionDirection; // 0x1a            
            source2sdk::client::CCSPlayerAnimationState_AirAction_t m_airAction; // 0x1b            
            bool m_bWasOnGroundLastUpdate; // 0x1c            
            bool m_bWasStationaryLastUpdate; // 0x1d            
            uint8_t _pad001e[0x2]; // 0x1e
            source2sdk::entity2::GameTick_t m_actionStartTick; // 0x20            
            source2sdk::entity2::GameTick_t m_staticAimTimerStartTick; // 0x24            
            source2sdk::entity2::GameTick_t m_plantAndTurnStartTick; // 0x28            
            float m_flTurnOnSpotAngle; // 0x2c            
            float m_flPreviousAimYaw; // 0x30            
            float m_flPreviousHorizontalSpeed; // 0x34            
            float m_flFootIKOffsetLeft; // 0x38            
            float m_flFootIKOffsetRight; // 0x3c            
            float m_flWeaponDropPercentageDueToMovement; // 0x40            
            float m_flWeaponDropSmoothDampVelocity; // 0x44            
            uint8_t _pad0048[0x98];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_currentMoveType) == 0x18);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_groundMoveState) == 0x19);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_groundActionDirection) == 0x1a);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_airAction) == 0x1b);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_bWasOnGroundLastUpdate) == 0x1c);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_bWasStationaryLastUpdate) == 0x1d);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_actionStartTick) == 0x20);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_staticAimTimerStartTick) == 0x24);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_plantAndTurnStartTick) == 0x28);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flTurnOnSpotAngle) == 0x2c);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flPreviousAimYaw) == 0x30);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flPreviousHorizontalSpeed) == 0x34);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flFootIKOffsetLeft) == 0x38);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flFootIKOffsetRight) == 0x3c);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flWeaponDropPercentageDueToMovement) == 0x40);
        static_assert(offsetof(source2sdk::client::CCSPlayerAnimationState, m_flWeaponDropSmoothDampVelocity) == 0x44);
        
        static_assert(sizeof(source2sdk::client::CCSPlayerAnimationState) == 0xe0);
    };
};
