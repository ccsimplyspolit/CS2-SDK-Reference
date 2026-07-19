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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Horn_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float air_duration; // 0x1a58            
            std::int32_t air_height; // 0x1a5c            
            std::int32_t travel_distance; // 0x1a60            
            VectorWS m_vDestination; // 0x1a64            
            float m_flStartZ; // 0x1a70            
            float m_flCurTime; // 0x1a74            
            float m_flJumpDuration; // 0x1a78            
            float m_flJumpHeight; // 0x1a7c            
            Vector m_vTargetHorizontalDirection; // 0x1a80            
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Horn_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Horn_Toss) == 0x1a90);
    };
};
