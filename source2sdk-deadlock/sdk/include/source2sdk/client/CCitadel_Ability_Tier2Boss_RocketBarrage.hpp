#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityServerOnly.hpp"

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
        // Size: 0x16e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier2Boss_RocketBarrage : public source2sdk::client::CCitadelBaseAbilityServerOnly
        {
        public:
            std::int32_t m_nGrenadeIndex; // 0x11d8            
            std::int32_t m_nTotalGrenades; // 0x11dc            
            uint8_t _pad11e0[0x500];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier2Boss_RocketBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tier2Boss_RocketBarrage) == 0x16e0);
    };
};
