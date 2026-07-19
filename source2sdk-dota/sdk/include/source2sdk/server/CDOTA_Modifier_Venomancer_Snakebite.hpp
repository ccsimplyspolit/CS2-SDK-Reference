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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Venomancer_Snakebite : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_damage; // 0x1a58            
            float tick_damage; // 0x1a5c            
            float damage_interval; // 0x1a60            
            bool undispellable; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            source2sdk::entity2::GameTime_t m_flNextDamageInterval; // 0x1a68            
            std::int32_t m_nWardIndex; // 0x1a6c            
            float m_flPositionAngle; // 0x1a70            
            float m_flTargetPreviousYaw; // 0x1a74            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78            
            bool m_bBittenThisFrame; // 0x1a7c            
            uint8_t _pad1a7d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_Snakebite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Venomancer_Snakebite) == 0x1a80);
    };
};
