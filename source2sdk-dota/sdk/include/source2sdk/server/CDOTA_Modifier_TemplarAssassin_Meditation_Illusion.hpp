#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TemplarAssassin_Meditation_Illusion : public source2sdk::client::CDOTA_Buff
        {
        public:
            float duration; // 0x1a58            
            std::int32_t bonus_move_speed; // 0x1a5c            
            float m_flMoveSpeed; // 0x1a60            
            bool m_bVisuallyDestroyed; // 0x1a64            
            uint8_t _pad1a65[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Meditation_Illusion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_Meditation_Illusion) == 0x1a68);
    };
};
