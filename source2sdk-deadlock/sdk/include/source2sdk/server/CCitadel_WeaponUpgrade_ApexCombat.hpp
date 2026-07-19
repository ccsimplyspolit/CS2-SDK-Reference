#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/server/CCitadel_Modifier_ApexCombat_Proc.hpp"

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
        // Size: 0xf90
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ApexCombat : public source2sdk::server::CCitadel_Item
        {
        public:
            // m_hRicochetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadel_Modifier_ApexCombat_Proc> m_hRicochetModifier;
            char m_hRicochetModifier[0x18]; // 0xf78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ApexCombat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_ApexCombat) == 0xf90);
    };
};
