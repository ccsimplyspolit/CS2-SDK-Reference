#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"

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
        // Size: 0x1438
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iCurrentShotCount"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_PrimaryWeapon : public source2sdk::client::CCitadel_Ability_PrimaryWeapon
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentShotCount; // 0x1430            
            uint8_t _pad1434[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Fencer_PrimaryWeapon) == 0x1438);
    };
};
