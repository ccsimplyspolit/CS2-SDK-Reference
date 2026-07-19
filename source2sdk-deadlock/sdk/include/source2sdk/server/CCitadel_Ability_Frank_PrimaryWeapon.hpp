#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerPawn;
    };
};

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
        // Size: 0x12b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_PrimaryWeapon : public source2sdk::server::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad1198[0x8]; // 0x1198
            source2sdk::server::CCitadelPlayerPawn* m_pNextShooter; // 0x11a0            
            uint8_t _pad11a8[0x108];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Frank_PrimaryWeapon) == 0x12b0);
    };
};
