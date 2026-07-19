#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMonsterHunterCraftableRewardDefinition.hpp"
#include "source2sdk/client/CMonsterHunterEconItemDefinition.hpp"
#include "source2sdk/client/CMonsterHunterHeroCodexDefinition.hpp"
#include "source2sdk/client/CMonsterHunterHeroDefinition.hpp"
#include "source2sdk/client/CMonsterHunterMaterialDefinition.hpp"
#include "source2sdk/client/CMonsterHunterSmallRewardCategoryDefinition.hpp"
#include "source2sdk/client/CMonsterHunterTradeRecipeDefinition.hpp"
#include "source2sdk/client/CMonterHunterHunterRankRewardDefinition.hpp"

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
        // Size: 0x310
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CMonsterHunterWorldDefinition
        {
        public:
            // m_vecMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterMaterialDefinition> m_vecMaterials;
            char m_vecMaterials[0x18]; // 0x0            
            // m_vecEconItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterEconItemDefinition> m_vecEconItems;
            char m_vecEconItems[0x18]; // 0x18            
            // m_vecCraftableRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterCraftableRewardDefinition> m_vecCraftableRewards;
            char m_vecCraftableRewards[0x18]; // 0x30            
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterHeroDefinition> m_vecHeroes;
            char m_vecHeroes[0x18]; // 0x48            
            // m_vecTradeRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterTradeRecipeDefinition> m_vecTradeRecipes;
            char m_vecTradeRecipes[0x18]; // 0x60            
            // m_mapCodexEntriesLocalized has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CMonsterHunterHeroCodexDefinition> m_mapCodexEntriesLocalized;
            char m_mapCodexEntriesLocalized[0x28]; // 0x78            
            uint8_t _pad00a0[0x28]; // 0xa0
            CUtlString m_strTokenLocStringPrefix; // 0xc8            
            // m_vecSmallRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition> m_vecSmallRewards;
            char m_vecSmallRewards[0x18]; // 0xd0            
            // m_vecHunterRankRewardLine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonterHunterHunterRankRewardDefinition> m_vecHunterRankRewardLine;
            char m_vecHunterRankRewardLine[0x18]; // 0xe8            
            uint8_t _pad0100[0x210];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecMaterials) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecEconItems) == 0x18);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecCraftableRewards) == 0x30);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecHeroes) == 0x48);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecTradeRecipes) == 0x60);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_mapCodexEntriesLocalized) == 0x78);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_strTokenLocStringPrefix) == 0xc8);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecSmallRewards) == 0xd0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecHunterRankRewardLine) == 0xe8);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterWorldDefinition) == 0x310);
    };
};
