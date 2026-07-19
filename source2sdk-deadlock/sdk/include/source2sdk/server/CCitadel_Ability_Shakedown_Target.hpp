#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Yakuza_Shakedown;
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
        // Size: 0x1100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Shakedown_Target : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hShadowdownAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_Ability_Yakuza_Shakedown> m_hShadowdownAbility;
            char m_hShadowdownAbility[0x4]; // 0xf70            
            Vector m_AimPos; // 0xf74            
            uint8_t _pad0f80[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shakedown_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Shakedown_Target) == 0x1100);
    };
};
