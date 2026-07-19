#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Root.hpp"
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
        // Size: 0x148
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Priest_Immobilize : public source2sdk::client::CCitadel_Modifier_Root
        {
        public:
            source2sdk::client::ParticleIndex_t m_hRootEffect; // 0xc0            
            uint8_t _pad00c4[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Priest_Immobilize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Priest_Immobilize) == 0x148);
    };
};
