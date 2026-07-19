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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Grapple_VictimMotion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t impact_damage; // 0x1a58            
            float debuff_duration; // 0x1a5c            
            float landing_radius; // 0x1a60            
            float air_duration; // 0x1a64            
            std::int32_t air_height; // 0x1a68            
            std::int32_t travel_distance; // 0x1a6c            
            VectorWS m_vDestination; // 0x1a70            
            float m_flStartZ; // 0x1a7c            
            float m_flCurTime; // 0x1a80            
            float m_flJumpDuration; // 0x1a84            
            float m_flJumpHeight; // 0x1a88            
            Vector m_vTargetHorizontalDirection; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Grapple_VictimMotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Grapple_VictimMotion) == 0x1a98);
    };
};
