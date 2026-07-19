#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseTriggerAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
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
        // Size: 0x11f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_TangoTether_Trigger : public source2sdk::client::CCitadelBaseTriggerAbility
        {
        public:
            uint8_t _pad11e8[0x4]; // 0x11e8
            // m_hBaseAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hBaseAbility;
            char m_hBaseAbility[0x4]; // 0x11ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TangoTether_Trigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_TangoTether_Trigger) == 0x11f0);
    };
};
