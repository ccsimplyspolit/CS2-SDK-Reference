#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_SnareTrap : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            float activation_radius; // 0x1a68            
            float effect_radius; // 0x1a6c            
            float effect_duration; // 0x1a70            
            float activation_time; // 0x1a74            
            bool m_bActivated; // 0x1a78            
            bool m_bTriggered; // 0x1a79            
            uint8_t _pad1a7a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_SnareTrap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_SnareTrap) == 0x1a80);
    };
};
