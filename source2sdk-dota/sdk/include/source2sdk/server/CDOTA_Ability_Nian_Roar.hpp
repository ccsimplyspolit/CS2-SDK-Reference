#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Roar : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t base_projectiles; // 0x580            
            std::int32_t max_projectiles; // 0x584            
            std::int32_t projectile_step; // 0x588            
            std::int32_t base_speed; // 0x58c            
            std::int32_t speed_step; // 0x590            
            std::int32_t initial_radius; // 0x594            
            std::int32_t end_radius; // 0x598            
            std::int32_t damage; // 0x59c            
            float base_interval; // 0x5a0            
            float interval_step; // 0x5a4            
            std::int32_t m_nCastCount; // 0x5a8            
            std::int32_t m_nProjectiles; // 0x5ac            
            std::int32_t m_nWaveCount; // 0x5b0            
            uint8_t _pad05b4[0x4]; // 0x5b4
            source2sdk::server::CountdownTimer m_ctTimer; // 0x5b8            
            float m_flTiming; // 0x5d0            
            bool m_bScriptRoar; // 0x5d4            
            uint8_t _pad05d5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Roar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Roar) == 0x5d8);
    };
};
