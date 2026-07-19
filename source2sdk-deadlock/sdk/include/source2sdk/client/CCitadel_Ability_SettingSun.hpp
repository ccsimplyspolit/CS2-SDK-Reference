#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1300
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_SettingSun : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_TargetPreviews;
            char m_TargetPreviews[0x18]; // 0x11d8            
            uint8_t _pad11f0[0x108]; // 0x11f0
            bool m_bWasSelected; // 0x12f8            
            uint8_t _pad12f9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SettingSun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SettingSun) == 0x1300);
    };
};
