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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Skewer_Impact : public source2sdk::client::CDOTA_Buff
        {
        public:
            float slow_duration; // 0x1a58            
            std::int32_t skewer_damage; // 0x1a5c            
            std::int32_t damage_distance_pct; // 0x1a60            
            Vector m_vDirection; // 0x1a64            
            VectorWS m_vStartPos; // 0x1a70            
            float m_flEndTime; // 0x1a7c            
            float m_flCurTime; // 0x1a80            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Skewer_Impact because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Skewer_Impact) == 0x1a88);
    };
};
