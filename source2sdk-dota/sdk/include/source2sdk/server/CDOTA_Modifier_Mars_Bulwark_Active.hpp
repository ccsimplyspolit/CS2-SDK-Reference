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
            Vector m_vFacing; // 0x1a78            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_Bulwark_Active) == 0x1a88);
    };
};
