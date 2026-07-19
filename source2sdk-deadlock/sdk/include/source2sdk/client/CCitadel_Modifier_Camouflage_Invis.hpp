#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Invis.hpp"

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
        // Size: 0x570
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Camouflage_Invis : public source2sdk::client::CCitadel_Modifier_Invis
        {
        public:
            Vector m_vCastPosition; // 0x460            
            uint8_t _pad046c[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Camouflage_Invis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Camouflage_Invis) == 0x570);
    };
};
