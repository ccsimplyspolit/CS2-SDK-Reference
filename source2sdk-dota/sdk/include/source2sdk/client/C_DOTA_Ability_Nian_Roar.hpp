#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x700
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Roar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t base_projectiles; // 0x6a8            
            std::int32_t max_projectiles; // 0x6ac            
            std::int32_t projectile_step; // 0x6b0            
            std::int32_t base_speed; // 0x6b4            
            std::int32_t speed_step; // 0x6b8            
            std::int32_t initial_radius; // 0x6bc            
            std::int32_t end_radius; // 0x6c0            
            std::int32_t damage; // 0x6c4            
            float base_interval; // 0x6c8            
            float interval_step; // 0x6cc            
            std::int32_t m_nCastCount; // 0x6d0            
            std::int32_t m_nProjectiles; // 0x6d4            
            std::int32_t m_nWaveCount; // 0x6d8            
            uint8_t _pad06dc[0x4]; // 0x6dc
            source2sdk::client::CountdownTimer m_ctTimer; // 0x6e0            
            float m_flTiming; // 0x6f8            
            bool m_bScriptRoar; // 0x6fc            
            uint8_t _pad06fd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Roar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Roar) == 0x700);
    };
};
