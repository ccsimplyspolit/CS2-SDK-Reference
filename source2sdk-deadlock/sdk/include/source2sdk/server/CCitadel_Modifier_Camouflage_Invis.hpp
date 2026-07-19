#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Invis.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x578
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Camouflage_Invis : public source2sdk::server::CCitadel_Modifier_Invis
        {
        public:
            Vector m_vCastPosition; // 0x468            
            uint8_t _pad0474[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Camouflage_Invis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Camouflage_Invis) == 0x578);
    };
};
