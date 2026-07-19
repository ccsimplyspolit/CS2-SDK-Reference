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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_BottomsUp_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x18]; // 0x1a58
            std::int32_t brewed_up_per_ability; // 0x1a70            
            std::int32_t brewed_up_per_proc; // 0x1a74            
            std::int32_t brewed_up_max_stack; // 0x1a78            
            float max_hp_regen; // 0x1a7c            
            float brewed_up_min_speed; // 0x1a80            
            float brewed_up_max_speed; // 0x1a84            
            float speed_toggle_time; // 0x1a88            
            float stack_duration; // 0x1a8c            
            bool m_bMinimumSpeed; // 0x1a90            
            uint8_t _pad1a91[0x3]; // 0x1a91
            source2sdk::entity2::GameTime_t m_SpeedToggleTime; // 0x1a94            
            std::int32_t m_nMaxHPRegen; // 0x1a98            
            std::int32_t m_nCurrentSpeed; // 0x1a9c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aa0            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1aa4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_BottomsUp_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_BottomsUp_Passive) == 0x1aa8);
    };
};
