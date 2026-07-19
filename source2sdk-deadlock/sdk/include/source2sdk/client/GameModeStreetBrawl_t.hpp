#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/ItemDraftBucketing_t.hpp"
#include "source2sdk/client/StreetBrawlGameRoundDrafts_t.hpp"

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
        // Size: 0x220
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct GameModeStreetBrawl_t
        {
        public:
            // m_vecRespawnTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecRespawnTimes;
            char m_vecRespawnTimes[0x18]; // 0x0            
            // m_flOvertimeRespawnTimeIncrease has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flOvertimeRespawnTimeIncrease;
            char m_flOvertimeRespawnTimeIncrease[0x18]; // 0x18            
            // m_flOvertimeRespawnTimeIncreaseUrgent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flOvertimeRespawnTimeIncreaseUrgent;
            char m_flOvertimeRespawnTimeIncreaseUrgent[0x18]; // 0x30            
            // m_flOvertimeTrooperHealthScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flOvertimeTrooperHealthScale;
            char m_flOvertimeTrooperHealthScale[0x18]; // 0x48            
            // m_flOvertimeTrooperDamageScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flOvertimeTrooperDamageScale;
            char m_flOvertimeTrooperDamageScale[0x18]; // 0x60            
            // m_vecPreBuyTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPreBuyTime;
            char m_vecPreBuyTime[0x18]; // 0x78            
            // m_vecBuyTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecBuyTime;
            char m_vecBuyTime[0x18]; // 0x90            
            // m_vecGoldPerRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecGoldPerRound;
            char m_vecGoldPerRound[0x18]; // 0xa8            
            // m_vecAPPerRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAPPerRound;
            char m_vecAPPerRound[0x18]; // 0xc0            
            // m_vecObjectiveMaxHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecObjectiveMaxHealth;
            char m_vecObjectiveMaxHealth[0x18]; // 0xd8            
            // m_vecItemDraftRerollsPerRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecItemDraftRerollsPerRound;
            char m_vecItemDraftRerollsPerRound[0x18]; // 0xf0            
            // m_vecRoundLengthMinutes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecRoundLengthMinutes;
            char m_vecRoundLengthMinutes[0x18]; // 0x108            
            // m_vecRoundLengthMinutesUrgent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecRoundLengthMinutesUrgent;
            char m_vecRoundLengthMinutesUrgent[0x18]; // 0x120            
            // m_flTrooperSpawnTimer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTrooperSpawnTimer;
            char m_flTrooperSpawnTimer[0x18]; // 0x138            
            // m_vecItemDraftRoundsPerGameRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::StreetBrawlGameRoundDrafts_t> m_vecItemDraftRoundsPerGameRound;
            char m_vecItemDraftRoundsPerGameRound[0x18]; // 0x150            
            // m_mapItemTierToItemDraftBuckets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EModTier_t,source2sdk::client::ItemDraftBucketing_t> m_mapItemTierToItemDraftBuckets;
            char m_mapItemTierToItemDraftBuckets[0x28]; // 0x168            
            float m_nMatchLengthMinutes; // 0x190            
            std::int32_t m_nTier2BonusHealth; // 0x194            
            std::int32_t m_nComebackBonusHealth; // 0x198            
            std::int32_t m_nComebackBonusHealthCritical; // 0x19c            
            float m_flTrooperNonOvertimeResist; // 0x1a0            
            float m_flTrooperOvertimeResist; // 0x1a4            
            // metadata: MPropertyDescription "When we own 3 actives, scale the weight of actives by this much"
            float m_flActivesReductionWeightScale; // 0x1a8            
            // metadata: MPropertyDescription "If you've got more legendaries than everyone else, we'll not even consider you for another this % of the time"
            float m_flLegendaryOwnerSkipChancePct; // 0x1ac            
            // metadata: MPropertyDescription "If you've got more enhanced than everyone else, we'll not even consider you for another this % of the time"
            float m_flEnhancedOwnerSkipChancePct; // 0x1b0            
            // metadata: MPropertyDescription "When rolling a rare item scale up the "Good" bucket's weight by this much"
            float m_flRareWeightScale; // 0x1b4            
            // metadata: MPropertyDescription "When a players' team is in comeback state, apply this weighting scale to their "Good" bucket of items"
            float m_flComebackWeightScale_Trailing_2; // 0x1b8            
            // metadata: MPropertyDescription "When a players' team is in comeback state, apply this weighting scale to their "Good" bucket of items"
            float m_flComebackWeightScale_Trailing_1; // 0x1bc            
            // m_strAmberTrooperPickupToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<0> m_strAmberTrooperPickupToDrop;
            char m_strAmberTrooperPickupToDrop[0x10]; // 0x1c0            
            // m_strSapphireTrooperPickupToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<0> m_strSapphireTrooperPickupToDrop;
            char m_strSapphireTrooperPickupToDrop[0x10]; // 0x1d0            
            // m_strTrooperModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<2> m_strTrooperModifier;
            char m_strTrooperModifier[0x10]; // 0x1e0            
            float m_flScoringTime; // 0x1f0            
            float m_flPreScoringTime; // 0x1f4            
            float m_flScoringGameTimeScale; // 0x1f8            
            std::int32_t m_iScoreToWin; // 0x1fc            
            std::int32_t m_iLaneNumber; // 0x200            
            float m_flTrooperSpawnBeforeRoundStartTimer; // 0x204            
            float m_flZipBoostCooldownOnStart; // 0x208            
            float m_flBuyTimeGracePeriod; // 0x20c            
            std::int32_t m_iUltimateUnlockRound; // 0x210            
            float m_flTier1MaxResistTime; // 0x214            
            float m_flTier2MaxResistTime; // 0x218            
            uint8_t _pad021c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecRespawnTimes) == 0x0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flOvertimeRespawnTimeIncrease) == 0x18);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flOvertimeRespawnTimeIncreaseUrgent) == 0x30);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flOvertimeTrooperHealthScale) == 0x48);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flOvertimeTrooperDamageScale) == 0x60);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecPreBuyTime) == 0x78);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecBuyTime) == 0x90);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecGoldPerRound) == 0xa8);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecAPPerRound) == 0xc0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecObjectiveMaxHealth) == 0xd8);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecItemDraftRerollsPerRound) == 0xf0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecRoundLengthMinutes) == 0x108);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecRoundLengthMinutesUrgent) == 0x120);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flTrooperSpawnTimer) == 0x138);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_vecItemDraftRoundsPerGameRound) == 0x150);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_mapItemTierToItemDraftBuckets) == 0x168);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_nMatchLengthMinutes) == 0x190);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_nTier2BonusHealth) == 0x194);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_nComebackBonusHealth) == 0x198);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_nComebackBonusHealthCritical) == 0x19c);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flTrooperNonOvertimeResist) == 0x1a0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flTrooperOvertimeResist) == 0x1a4);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flActivesReductionWeightScale) == 0x1a8);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flLegendaryOwnerSkipChancePct) == 0x1ac);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flEnhancedOwnerSkipChancePct) == 0x1b0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flRareWeightScale) == 0x1b4);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flComebackWeightScale_Trailing_2) == 0x1b8);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flComebackWeightScale_Trailing_1) == 0x1bc);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_strAmberTrooperPickupToDrop) == 0x1c0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_strSapphireTrooperPickupToDrop) == 0x1d0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_strTrooperModifier) == 0x1e0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flScoringTime) == 0x1f0);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flPreScoringTime) == 0x1f4);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flScoringGameTimeScale) == 0x1f8);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_iScoreToWin) == 0x1fc);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_iLaneNumber) == 0x200);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flTrooperSpawnBeforeRoundStartTimer) == 0x204);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flZipBoostCooldownOnStart) == 0x208);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flBuyTimeGracePeriod) == 0x20c);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_iUltimateUnlockRound) == 0x210);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flTier1MaxResistTime) == 0x214);
        static_assert(offsetof(source2sdk::client::GameModeStreetBrawl_t, m_flTier2MaxResistTime) == 0x218);
        
        static_assert(sizeof(source2sdk::client::GameModeStreetBrawl_t) == 0x220);
    };
};
