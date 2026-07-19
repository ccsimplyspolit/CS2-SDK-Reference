#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

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
        // Size: 0xfd0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_NewYears_Fireworks : public source2sdk::client::C_DynamicProp
        {
        public:
            std::uint32_t m_unShowDurationSeconds; // 0xef0            
            std::uint32_t m_unShowDelaySeconds; // 0xef4            
            float m_flFireworkIntervalMin; // 0xef8            
            float m_flFireworkIntervalMax; // 0xefc            
            CUtlString m_sFireworkParticle1; // 0xf00            
            CUtlString m_sFireworkParticle2; // 0xf08            
            CUtlString m_sFireworkParticle3; // 0xf10            
            CUtlString m_sFireworkParticle4; // 0xf18            
            CUtlString m_sFireworkParticle5; // 0xf20            
            CUtlString m_sFireworkParticle6; // 0xf28            
            CUtlString m_sFireworkParticle7; // 0xf30            
            CUtlString m_sFireworkParticle8; // 0xf38            
            CUtlSymbolLarge m_iszSoundName; // 0xf40            
            float m_flStartSoundVerticalOffset; // 0xf48            
            uint8_t _pad0f4c[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_NewYears_Fireworks because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_NewYears_Fireworks) == 0xfd0);
    };
};
