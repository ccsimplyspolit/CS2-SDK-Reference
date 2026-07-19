#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadel_Ability_Yakuza_Shakedown;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1368
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Shakedown_Target : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_hShadowdownAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadel_Ability_Yakuza_Shakedown> m_hShadowdownAbility;
            char m_hShadowdownAbility[0x4]; // 0x11d8            
            Vector m_AimPos; // 0x11dc            
            uint8_t _pad11e8[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shakedown_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shakedown_Target) == 0x1368);
    };
};
