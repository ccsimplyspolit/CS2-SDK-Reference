#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"

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
        // Size: 0x9f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDynamicProp : public source2sdk::server::CBreakableProp
        {
        public:
            bool m_bRandomAnimator; // 0x930            
            uint8_t _pad0931[0x3]; // 0x931
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0x934            
            float m_flMinRandAnimDuration; // 0x938            
            float m_flMaxRandAnimDuration; // 0x93c            
            uint8_t _pad0940[0x8]; // 0x940
            bool m_bCreateNavObstacle; // 0x948            
            bool m_bNavObstacleUpdatesOverridden; // 0x949            
            bool m_bUseHitboxesForRenderBox; // 0x94a            
            bool m_bUseAnimGraph; // 0x94b            
            uint8_t _pad094c[0x4]; // 0x94c
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x950            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x968            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x980            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x998            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0x9b0            
            CUtlSymbolLarge m_iszIdleAnim; // 0x9c8            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0x9d0            
            bool m_bRandomizeCycle; // 0x9d4            
            bool m_bStartDisabled; // 0x9d5            
            bool m_bFiredStartEndOutput; // 0x9d6            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0x9d7            
            bool m_bCreateMovableSurfaceGraph; // 0x9d8            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0x9d9            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0x9da            
            uint8_t _pad09db[0x1]; // 0x9db
            std::int32_t m_iInitialGlowState; // 0x9dc            
            std::int32_t m_nGlowRange; // 0x9e0            
            std::int32_t m_nGlowRangeMin; // 0x9e4            
            Color m_glowColor; // 0x9e8            
            std::int32_t m_nGlowTeam; // 0x9ec            
            
            // Datamap fields:
            // CUtlSymbolLarge StartingAnim; // 0x7fffffff
            // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
            // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimation; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
            // CUtlSymbolLarge InputSetDefaultAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetDefaultAnimationNotLooping; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputEnableCollision; // 0x0
            // void InputDisableCollision; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0x9f0);
    };
};
