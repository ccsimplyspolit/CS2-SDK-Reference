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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_Pounce : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1a58            
            float m_flInitialVelocity; // 0x1a5c            
            VectorWS m_vStartPosition; // 0x1a60            
            Vector m_vTargetHorizontalDirection; // 0x1a6c            
            float m_flCurrentTimeHoriz; // 0x1a78            
            float m_flCurrentTimeVert; // 0x1a7c            
            bool m_bInterrupted; // 0x1a80            
            bool m_bFoundUnit; // 0x1a81            
            uint8_t _pad1a82[0x2]; // 0x1a82
            std::int32_t pounce_distance; // 0x1a84            
            std::int32_t pounce_distance_scepter; // 0x1a88            
            float pounce_speed; // 0x1a8c            
            float pounce_acceleration; // 0x1a90            
            std::int32_t pounce_radius; // 0x1a94            
            std::int32_t pounce_damage; // 0x1a98            
            float leash_duration; // 0x1a9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Slark_Pounce) == 0x1aa0);
    };
};
