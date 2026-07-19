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
        // Size: 0xef0
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class C_DynamicProp : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0xe20            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0xe21            
            uint8_t _pad0e22[0x6]; // 0xe22
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xe28            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xe40            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xe58            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xe70            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xe88            
            CUtlSymbolLarge m_iszIdleAnim; // 0xea0            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xea8            
            bool m_bRandomizeCycle; // 0xeac            
            bool m_bStartDisabled; // 0xead            
            bool m_bFiredStartEndOutput; // 0xeae            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0xeaf            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0xeb0            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xeb1            
            uint8_t _pad0eb2[0x2]; // 0xeb2
            std::int32_t m_iInitialGlowState; // 0xeb4            
            std::int32_t m_nGlowRange; // 0xeb8            
            std::int32_t m_nGlowRangeMin; // 0xebc            
            Color m_glowColor; // 0xec0            
            std::int32_t m_nGlowTeam; // 0xec4            
            // metadata: MNotSaved
            std::int32_t m_iCachedFrameCount; // 0xec8            
            // metadata: MNotSaved
            Vector m_vecCachedRenderMins; // 0xecc            
            // metadata: MNotSaved
            Vector m_vecCachedRenderMaxs; // 0xed8            
            uint8_t _pad0ee4[0xc];
            
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
            // void C_DynamicPropAnimThink; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0xef0);
    };
};
