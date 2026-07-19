#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelPlayerPawn;
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HeroUpgradeBonuses : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::client::C_CitadelPlayerPawn* m_pOwningPlayer; // 0xc0            
            float m_flWeaponPower; // 0xc8            
            float m_flArmorPower; // 0xcc            
            float m_flTechPower; // 0xd0            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HeroUpgradeBonuses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HeroUpgradeBonuses) == 0xd8);
    };
};
