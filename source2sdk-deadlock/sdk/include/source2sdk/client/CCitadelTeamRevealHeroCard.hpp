#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/HeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf00
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HeroID_t m_unHeroID"
        #pragma pack(push, 1)
        class CCitadelTeamRevealHeroCard : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0ef0[0x4]; // 0xef0
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_unHeroID; // 0xef4            
            uint8_t _pad0ef8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTeamRevealHeroCard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelTeamRevealHeroCard) == 0xf00);
    };
};
