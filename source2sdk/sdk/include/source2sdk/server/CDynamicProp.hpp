#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0xba0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDynamicProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0af0[0x8]; // 0xaf0
            bool m_bCreateNavObstacle; // 0xaf8            
            bool m_bNavObstacleUpdatesOverridden; // 0xaf9            
            bool m_bUseHitboxesForRenderBox; // 0xafa            
            bool m_bUseAnimGraph; // 0xafb            
            uint8_t _pad0afc[0x4]; // 0xafc
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xb00            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xb18            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xb30            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xb48            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xb60            
            CUtlSymbolLarge m_iszIdleAnim; // 0xb78            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xb80            
            bool m_bRandomizeCycle; // 0xb84            
            bool m_bStartDisabled; // 0xb85            
            bool m_bFiredStartEndOutput; // 0xb86            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0xb87            
            bool m_bCreateMovableSurfaceGraph; // 0xb88            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0xb89            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xb8a            
            uint8_t _pad0b8b[0x1]; // 0xb8b
            std::int32_t m_iInitialGlowState; // 0xb8c            
            std::int32_t m_nGlowRange; // 0xb90            
            std::int32_t m_nGlowRangeMin; // 0xb94            
            Color m_glowColor; // 0xb98            
            std::int32_t m_nGlowTeam; // 0xb9c            
            
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
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0xba0);
    };
};
