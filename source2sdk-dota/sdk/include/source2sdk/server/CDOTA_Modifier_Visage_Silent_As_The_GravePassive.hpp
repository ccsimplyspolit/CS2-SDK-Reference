#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Visage_Silent_As_The_GravePassive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movespeed_bonus; // 0x1a58            
            float fly_timer; // 0x1a5c            
            bool m_bFlying; // 0x1a60            
            uint8_t _pad1a61[0x3]; // 0x1a61
            source2sdk::entity2::GameTime_t m_FlyAvailableTime; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_Silent_As_The_GravePassive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_Silent_As_The_GravePassive) == 0x1a68);
    };
};
