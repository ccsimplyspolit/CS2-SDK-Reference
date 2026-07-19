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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_OgreSealTotem_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1a58            
            float m_flInitialVelocity; // 0x1a5c            
            VectorWS m_vStartPosition; // 0x1a60            
            Vector m_vTargetHorizontalDirection; // 0x1a6c            
            float m_flCurrentTimeHoriz; // 0x1a78            
            float m_flCurrentTimeVert; // 0x1a7c            
            bool m_bInterrupted; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            VectorWS m_vLastOrderPos; // 0x1a84            
            bool m_bIssuedOrder; // 0x1a90            
            uint8_t _pad1a91[0x3]; // 0x1a91
            std::int32_t m_nCurrentBounce; // 0x1a94            
            std::int32_t leap_distance; // 0x1a98            
            float leap_speed; // 0x1a9c            
            float leap_acceleration; // 0x1aa0            
            std::int32_t leap_radius; // 0x1aa4            
            float leap_bonus_duration; // 0x1aa8            
            bool m_bLaunched; // 0x1aac            
            uint8_t _pad1aad[0x3]; // 0x1aad
            float m_flFacingTarget; // 0x1ab0            
            float movement_turn_rate; // 0x1ab4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_OgreSealTotem_Active) == 0x1ab8);
    };
};
