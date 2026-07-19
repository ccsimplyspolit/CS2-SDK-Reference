#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x460
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Invis : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x380]; // 0xc0
            bool m_bInvis; // 0x440            
            uint8_t _pad0441[0x3]; // 0x441
            source2sdk::entity2::GameTime_t m_flStartInvisTime; // 0x444            
            bool m_bFullyInvis; // 0x448            
            uint8_t _pad0449[0x3]; // 0x449
            source2sdk::entity2::GameTime_t m_flLastDamageTaken; // 0x44c            
            source2sdk::entity2::GameTime_t m_flLastSpotted; // 0x450            
            source2sdk::client::ParticleIndex_t m_nDetectionRangeRing; // 0x454            
            source2sdk::client::ParticleIndex_t m_nFullInvisEffect; // 0x458            
            uint8_t _pad045c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Invis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Invis) == 0x460);
    };
};
