#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"

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
        // Size: 0x468
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Werewolf : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x380]; // 0xc0
            // m_mapHunterAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapHunterAbilities;
            char m_mapHunterAbilities[0x28]; // 0x440            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Werewolf because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Werewolf) == 0x468);
    };
};
