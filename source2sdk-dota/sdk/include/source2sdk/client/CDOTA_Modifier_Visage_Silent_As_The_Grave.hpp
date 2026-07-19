#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_Silent_As_The_Grave : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t invis; // 0x1a68            
            std::int32_t movespeed_bonus; // 0x1a6c            
            std::int32_t bonus_damage; // 0x1a70            
            float bonus_duration; // 0x1a74            
            bool m_bHasMadeAttack; // 0x1a78            
            uint8_t _pad1a79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_Silent_As_The_Grave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_Silent_As_The_Grave) == 0x1a80);
    };
};
