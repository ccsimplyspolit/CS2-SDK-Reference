#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelProjectile;
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
        // Size: 0x1360
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
        #pragma pack(push, 1)
        class CCitadel_Ability_HatTrick : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelProjectile> m_hProjectile;
            char m_hProjectile[0x4]; // 0x11d8            
            uint8_t _pad11dc[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HatTrick because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_HatTrick) == 0x1360);
    };
};
