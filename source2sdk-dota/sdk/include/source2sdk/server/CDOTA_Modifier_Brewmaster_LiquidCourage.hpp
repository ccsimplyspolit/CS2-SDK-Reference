#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_LiquidCourage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t min_health_threshold; // 0x1a58            
            std::int32_t max_health_threshold; // 0x1a5c            
            float status_resist; // 0x1a60            
            std::int32_t min_speed; // 0x1a64            
            std::int32_t max_speed; // 0x1a68            
            float max_hp_regen; // 0x1a6c            
            float speed_toggle_time; // 0x1a70            
            std::int32_t m_nCurrentSpeed; // 0x1a74            
            std::int32_t m_nMaxHPRegen; // 0x1a78            
            bool m_bForceActive; // 0x1a7c            
            bool m_bMinimumSpeed; // 0x1a7d            
            uint8_t _pad1a7e[0x2]; // 0x1a7e
            source2sdk::entity2::GameTime_t m_SpeedToggleTime; // 0x1a80            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_LiquidCourage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_LiquidCourage) == 0x1a88);
    };
};
