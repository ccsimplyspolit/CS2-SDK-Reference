#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4d0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HoldingGoldenIdol : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x400]; // 0xc0
            source2sdk::client::ParticleIndex_t m_iIdolParticle; // 0x4c0            
            std::int32_t m_nGoldValue; // 0x4c4            
            std::int32_t m_nTeamBias; // 0x4c8            
            bool m_bRevealed; // 0x4cc            
            uint8_t _pad04cd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HoldingGoldenIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HoldingGoldenIdol) == 0x4d0);
    };
};
