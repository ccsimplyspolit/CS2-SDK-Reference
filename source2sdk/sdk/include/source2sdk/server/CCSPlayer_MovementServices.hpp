#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCSPlayerAnimationState.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSPlayerLegacyJump.hpp"
#include "source2sdk/server/CCSPlayerModernJump.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"

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
        // Standard-layout class: false
        // Size: 0xfe0
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_MovementServices : public source2sdk::server::CPlayer_MovementServices_Humanoid
        {
        public:
            uint8_t _pad0290[0x80]; // 0x290
            source2sdk::client::CCSPlayerAnimationState m_AnimationState; // 0x310            
            bool m_bUsingGroundTopologyOffset; // 0x3f0            
            uint8_t _pad03f1[0x3]; // 0x3f1
            float m_flUsingGroundTopologyOffsetTransitionSmoothing; // 0x3f4            
            Vector m_vecLadderNormal; // 0x3f8            
            std::int32_t m_nLadderSurfacePropIndex; // 0x404            
            bool m_bDucked; // 0x408            
            uint8_t _pad0409[0x3]; // 0x409
            float m_flDuckAmount; // 0x40c            
            float m_flDuckSpeed; // 0x410            
            bool m_bDuckOverride; // 0x414            
            bool m_bDesiresDuck; // 0x415            
            bool m_bDucking; // 0x416            
            uint8_t _pad0417[0x1]; // 0x417
            float m_flDuckRootOffset; // 0x418            
            float m_flDuckViewOffset; // 0x41c            
            float m_flLastDuckTime; // 0x420            
            float m_flBombPlantViewOffset; // 0x424            
            uint8_t _pad0428[0x8]; // 0x428
            Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x430            
            bool m_duckUntilOnGround; // 0x438            
            bool m_bHasWalkMovedSinceLastJump; // 0x439            
            bool m_bInStuckTest; // 0x43a            
            uint8_t _pad043b[0x20d]; // 0x43b
            std::int32_t m_nTraceCount; // 0x648            
            std::int32_t m_StuckLast; // 0x64c            
            bool m_bSpeedCropped; // 0x650            
            uint8_t _pad0651[0x3]; // 0x651
            std::int32_t m_nOldWaterLevel; // 0x654            
            float m_flWaterEntryTime; // 0x658            
            Vector m_vecForward; // 0x65c            
            Vector m_vecLeft; // 0x668            
            Vector m_vecUp; // 0x674            
            std::int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x680            
            bool m_bMadeFootstepNoise; // 0x684            
            uint8_t _pad0685[0x3]; // 0x685
            std::int32_t m_iFootsteps; // 0x688            
            source2sdk::entity2::GameTime_t m_fStashGrenadeParameterWhen; // 0x68c            
            bool m_bUseFrictionStashedSpeed; // 0x690            
            uint8_t _pad0691[0x3]; // 0x691
            float m_flUseFrictionStashedSpeedUntilFrac; // 0x694            
            float m_flFrictionStashedSpeed; // 0x698            
            float m_flStamina; // 0x69c            
            float m_flHeightAtJumpStart; // 0x6a0            
            float m_flMaxJumpHeightThisJump; // 0x6a4            
            float m_flMaxJumpHeightLastJump; // 0x6a8            
            float m_flStaminaAtJumpStart; // 0x6ac            
            float m_flVelMulAtJumpStart; // 0x6b0            
            float m_flAccumulatedJumpError; // 0x6b4            
            source2sdk::server::CCSPlayerLegacyJump m_LegacyJump; // 0x6b8            
            source2sdk::server::CCSPlayerModernJump m_ModernJump; // 0x6d0            
            source2sdk::entity2::GameTick_t m_nLastJumpTick; // 0x708            
            float m_flLastJumpFrac; // 0x70c            
            float m_flLastJumpVelocityZ; // 0x710            
            bool m_bJumpApexPending; // 0x714            
            uint8_t _pad0715[0x3]; // 0x715
            float m_flTicksSinceLastSurfingDetected; // 0x718            
            uint8_t _pad071c[0x8c]; // 0x71c
            Vector2D m_vecWalkWishVel; // 0x7a8            
            uint8_t _pad07b0[0x820]; // 0x7b0
            bool m_bHasEverProcessedCommand; // 0xfd0            
            uint8_t _pad0fd1[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_MovementServices) == 0xfe0);
    };
};
