#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
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
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DoomBringer_Devour : public source2sdk::server::CDOTABaseAbility
        {
        public:
            bool m_bIsAltCastState; // 0x580            
            uint8_t _pad0581[0x3]; // 0x581
            std::int32_t ability_bonus_level; // 0x584            
            // m_vecAbilityDraftStolenAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTABaseAbility>> m_vecAbilityDraftStolenAbilities;
            char m_vecAbilityDraftStolenAbilities[0x18]; // 0x588            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DoomBringer_Devour because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DoomBringer_Devour) == 0x5a0);
    };
};
