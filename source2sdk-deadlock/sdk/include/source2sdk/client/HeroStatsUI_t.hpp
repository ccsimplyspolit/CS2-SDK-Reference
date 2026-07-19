#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelWeaponTypes.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/StatWithCategory_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HeroStatsUI_t
        {
        public:
            // metadata: MPropertyDescription "The loc string of the heroes weapon name"
            CUtlString m_strWeaponNameLocString; // 0x0            
            // metadata: MPropertyDescription "The location of the weapon image"
            CUtlString m_strWeaponImage; // 0x8            
            // metadata: MPropertyDescription "The type of weapon this hero has. This changes the generic gun image and gun name."
            source2sdk::client::ECitadelWeaponTypes m_eWeaponType; // 0x10            
            // metadata: MPropertyDescription "What stat do we show in the weapon UI panel?"
            source2sdk::client::EStatsType m_eWeaponStatDisplay; // 0x14            
            // metadata: MPropertyDescription "What stats do we want to show?"
            // m_vecDisplayStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::StatWithCategory_t> m_vecDisplayStats;
            char m_vecDisplayStats[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HeroStatsUI_t, m_strWeaponNameLocString) == 0x0);
        static_assert(offsetof(source2sdk::client::HeroStatsUI_t, m_strWeaponImage) == 0x8);
        static_assert(offsetof(source2sdk::client::HeroStatsUI_t, m_eWeaponType) == 0x10);
        static_assert(offsetof(source2sdk::client::HeroStatsUI_t, m_eWeaponStatDisplay) == 0x14);
        static_assert(offsetof(source2sdk::client::HeroStatsUI_t, m_vecDisplayStats) == 0x18);
        
        static_assert(sizeof(source2sdk::client::HeroStatsUI_t) == 0x30);
    };
};
