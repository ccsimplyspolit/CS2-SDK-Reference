#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_Bedlam : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flRotation; // 0x1a58            
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x1a5c            
            source2sdk::entity2::GameTime_t m_flLastAttack; // 0x1a60            
            float roaming_radius; // 0x1a64            
            float attack_radius; // 0x1a68            
            float roaming_seconds_per_rotation; // 0x1a6c            
            float attack_interval; // 0x1a70            
            std::int32_t target_count; // 0x1a74            
            bool m_bTravelling; // 0x1a78            
            uint8_t _pad1a79[0x3]; // 0x1a79
            float travel_speed; // 0x1a7c            
            std::int32_t damage_reduction_pct; // 0x1a80            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Bedlam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_Bedlam) == 0x1a88);
    };
};
