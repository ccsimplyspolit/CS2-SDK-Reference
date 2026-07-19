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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ursa_Earthshock_Move : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hop_duration; // 0x1a58            
            std::int32_t hop_height; // 0x1a5c            
            std::int32_t hop_distance; // 0x1a60            
            float m_flStartZ; // 0x1a64            
            float m_flCurTime; // 0x1a68            
            float m_flJumpDuration; // 0x1a6c            
            float m_flJumpHeight; // 0x1a70            
            Vector m_vTargetHorizontalDirection; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ursa_Earthshock_Move because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ursa_Earthshock_Move) == 0x1a80);
    };
};
