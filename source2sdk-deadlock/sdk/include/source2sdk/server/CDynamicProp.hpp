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
        // Size: 0xcd0
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class CDynamicProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0c20[0x8]; // 0xc20
            bool m_bCreateNavObstacle; // 0xc28            
            bool m_bNavObstacleUpdatesOverridden; // 0xc29            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0xc2a            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0xc2b            
            uint8_t _pad0c2c[0x4]; // 0xc2c
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc30            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc48            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc60            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xc78            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xc90            
            CUtlSymbolLarge m_iszIdleAnim; // 0xca8            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcb0            
            bool m_bRandomizeCycle; // 0xcb4            
            bool m_bStartDisabled; // 0xcb5            
            bool m_bFiredStartEndOutput; // 0xcb6            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0xcb7            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0xcb8            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xcb9            
            uint8_t _pad0cba[0x2]; // 0xcba
            std::int32_t m_iInitialGlowState; // 0xcbc            
            std::int32_t m_nGlowRange; // 0xcc0            
            std::int32_t m_nGlowRangeMin; // 0xcc4            
            Color m_glowColor; // 0xcc8            
            std::int32_t m_nGlowTeam; // 0xccc            
            
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
            // void CDynamicPropAnimThink; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0xcd0);
    };
};
