#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PostProcessingGameStates.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PostProcessEffectDef_t
        {
        public:
            source2sdk::client::PostProcessingGameStates m_eState; // 0x0            
            float m_flStartDelay; // 0x4            
            float m_flFadeInTime; // 0x8            
            float m_flHoldTime; // 0xc            
            float m_flFadeOutTime; // 0x10            
            float m_flScale; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PostProcessEffectDef_t, m_eState) == 0x0);
        static_assert(offsetof(source2sdk::client::PostProcessEffectDef_t, m_flStartDelay) == 0x4);
        static_assert(offsetof(source2sdk::client::PostProcessEffectDef_t, m_flFadeInTime) == 0x8);
        static_assert(offsetof(source2sdk::client::PostProcessEffectDef_t, m_flHoldTime) == 0xc);
        static_assert(offsetof(source2sdk::client::PostProcessEffectDef_t, m_flFadeOutTime) == 0x10);
        static_assert(offsetof(source2sdk::client::PostProcessEffectDef_t, m_flScale) == 0x14);
        
        static_assert(sizeof(source2sdk::client::PostProcessEffectDef_t) == 0x18);
    };
};
