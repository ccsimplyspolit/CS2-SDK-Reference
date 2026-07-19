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
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Whirlpool : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t pool_count; // 0x6a8            
            std::int32_t min_distance; // 0x6ac            
            std::int32_t max_distance; // 0x6b0            
            std::int32_t pull_radius; // 0x6b4            
            float fire_interval; // 0x6b8            
            uint8_t _pad06bc[0x4]; // 0x6bc
            source2sdk::client::CountdownTimer m_ctTimer; // 0x6c0            
            float m_flTiming; // 0x6d8            
            uint8_t _pad06dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Whirlpool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Whirlpool) == 0x6e0);
    };
};
