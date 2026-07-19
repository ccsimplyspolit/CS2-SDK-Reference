#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x13c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DynamicProp : public source2sdk::client::C_BreakableProp
        {
        public:
            bool m_bUseHitboxesForRenderBox; // 0x12f0            
            bool m_bUseAnimGraph; // 0x12f1            
            uint8_t _pad12f2[0x6]; // 0x12f2
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x12f8            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x1310            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1328            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x1340            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0x1358            
            CUtlSymbolLarge m_iszIdleAnim; // 0x1370            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1378            
            bool m_bRandomizeCycle; // 0x137c            
            bool m_bStartDisabled; // 0x137d            
            bool m_bFiredStartEndOutput; // 0x137e            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0x137f            
            bool m_bCreateMovableSurfaceGraph; // 0x1380            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0x1381            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0x1382            
            uint8_t _pad1383[0x1]; // 0x1383
            std::int32_t m_iInitialGlowState; // 0x1384            
            std::int32_t m_nGlowRange; // 0x1388            
            std::int32_t m_nGlowRangeMin; // 0x138c            
            Color m_glowColor; // 0x1390            
            std::int32_t m_nGlowTeam; // 0x1394            
            // metadata: MNotSaved
            std::int32_t m_iCachedFrameCount; // 0x1398            
            // metadata: MNotSaved
            Vector m_vecCachedRenderMins; // 0x139c            
            // metadata: MNotSaved
            Vector m_vecCachedRenderMaxs; // 0x13a8            
            uint8_t _pad13b4[0xc];
            
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
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0x13c0);
    };
};
