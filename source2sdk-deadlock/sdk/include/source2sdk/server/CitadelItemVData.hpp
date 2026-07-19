#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EAbilityRequirements_t.hpp"
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/EShopFilters_t.hpp"
#include "source2sdk/client/ItemSectionInfo_t.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x18b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CitadelItemVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            uint8_t _pad1818[0x4]; // 0x1818
            source2sdk::client::EModTier_t m_iItemTier; // 0x181c            
            std::int8_t m_nUpgradeSlotCost; // 0x181d            
            bool m_bWarnIfNoAffectedAbilities; // 0x181e            
            bool m_bShowTextDescription; // 0x181f            
            source2sdk::client::EShopFilters_t m_eShopFilters; // 0x1820            
            source2sdk::client::EAbilityRequirements_t m_eAbilityRequirements; // 0x1822            
            uint8_t _pad1824[0x4]; // 0x1824
            CPanoramaImageName m_strShopIconLarge; // 0x1828            
            CUtlString m_strLocSearchString; // 0x1838            
            // metadata: MPropertyFriendlyName "Item Tooltips"
            // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
            char m_vecTooltipSectionInfo[0x18]; // 0x1840            
            // metadata: MPropertyFriendlyName "Custom Layout Tooltip ID"
            CUtlString m_sCustomTooltipID; // 0x1858            
            // metadata: MPropertyFriendlyName "Custom Layout Tooltip Is Interactive"
            bool m_bCustomTooltipInteractive; // 0x1860            
            // metadata: MPropertyFriendlyName "Disabled for bots"
            bool m_bDisabledForBots; // 0x1861            
            uint8_t _pad1862[0x6]; // 0x1862
            // metadata: MPropertyFriendlyName "Custom Stacks Label"
            CUtlString m_sCustomStackLabel; // 0x1868            
            uint8_t _pad1870[0x18]; // 0x1870
            // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecComponentItems;
            char m_vecComponentItems[0x18]; // 0x1888            
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/heroes.vdata"
            // m_vecDisabledOnHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDisabledOnHeroes;
            char m_vecDisabledOnHeroes[0x18]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelItemVData) == 0x18b8);
    };
};
