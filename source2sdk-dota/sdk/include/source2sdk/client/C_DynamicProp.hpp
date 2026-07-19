#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd10
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DynamicProp : public source2sdk::client::C_BreakableProp
        {
        public:
            bool m_bRandomAnimator; // 0xc30            
            uint8_t _pad0c31[0x3]; // 0xc31
            source2sdk::entity2::GameTime_t m_flNextRandAnim; // 0xc34            
            float m_flMinRandAnimDuration; // 0xc38            
            float m_flMaxRandAnimDuration; // 0xc3c            
            bool m_bUseHitboxesForRenderBox; // 0xc40            
            bool m_bUseAnimGraph; // 0xc41            
            uint8_t _pad0c42[0x6]; // 0xc42
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc48            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc60            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc78            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xc90            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xca8            
            CUtlSymbolLarge m_iszIdleAnim; // 0xcc0            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcc8            
            bool m_bRandomizeCycle; // 0xccc            
            bool m_bStartDisabled; // 0xccd            
            bool m_bFiredStartEndOutput; // 0xcce            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0xccf            
            bool m_bCreateMovableSurfaceGraph; // 0xcd0            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0xcd1            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xcd2            
            uint8_t _pad0cd3[0x1]; // 0xcd3
            std::int32_t m_iInitialGlowState; // 0xcd4            
            std::int32_t m_nGlowRange; // 0xcd8            
            std::int32_t m_nGlowRangeMin; // 0xcdc            
            Color m_glowColor; // 0xce0            
            std::int32_t m_nGlowTeam; // 0xce4            
            // metadata: MNotSaved
            std::int32_t m_iCachedFrameCount; // 0xce8            
            // metadata: MNotSaved
            Vector m_vecCachedRenderMins; // 0xcec            
            // metadata: MNotSaved
            Vector m_vecCachedRenderMaxs; // 0xcf8            
            uint8_t _pad0d04[0xc];
            
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
        
        // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0xd10);
    };
};
