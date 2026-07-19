#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x1580
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Gunslinger_KnockbackBlast : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vecKnockbackDirection; // 0x11d8            
            uint8_t _pad11e4[0x4]; // 0x11e4
            // m_vecKnockbackedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecKnockbackedUnits;
            char m_vecKnockbackedUnits[0x18]; // 0x11e8            
            uint8_t _pad1200[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_KnockbackBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Gunslinger_KnockbackBlast) == 0x1580);
    };
};
