#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t redirect_chance; // 0x1a58            
            float redirect_range; // 0x1a5c            
            float forward_angle; // 0x1a60            
            float side_angle; // 0x1a64            
            float redirect_speed_penatly; // 0x1a68            
            float redirect_close_range; // 0x1a6c            
            std::int32_t attack_redirection_grace_distance; // 0x1a70            
            bool forced_movement_immunity; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            std::int32_t m_nPoseParameterWE; // 0x1a78            
            std::int32_t m_nPoseParameterNS; // 0x1a7c            
            float m_flLastPoseX; // 0x1a80            
            float m_flLastPoseY; // 0x1a84            
            std::int32_t m_nLastMaxDirection; // 0x1a88            
            VectorWS m_vLastOrigin; // 0x1a8c            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x1a98            
            Vector m_vFacing; // 0x1a9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Active) == 0x1aa8);
    };
};
