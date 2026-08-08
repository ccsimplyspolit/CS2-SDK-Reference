#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTAMusicProbabilityEntry.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero_KillInfo_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero_sHeroDamageInfo.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/sAcquireHistory.hpp"
#include "source2sdk/server/sLoadoutItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTAWearableItem;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Pet;
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
        // Size: 0x1f08
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Hero : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad18a8[0x98]; // 0x18a8
            float m_flStrength; // 0x1940
            float m_flAgility; // 0x1944
            float m_flIntellect; // 0x1948
            float m_flStrengthTotal; // 0x194c
            float m_flAgilityTotal; // 0x1950
            float m_flIntellectTotal; // 0x1954
            std::int32_t m_iRecentDamage; // 0x1958
            std::int32_t m_iPrimaryAttribute; // 0x195c
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1960
            source2sdk::entity2::GameTime_t m_flLastDispellTime; // 0x1964
            float m_flStrengthGain; // 0x1968
            float m_flAgilityGain; // 0x196c
            float m_flIntellectGain; // 0x1970
            float m_flLastExtraHealth; // 0x1974
            float m_flLastMaxHealth; // 0x1978
            float m_flLastSuggestionTime; // 0x197c
            bool m_bItemsAddedToLoadout; // 0x1980
            bool m_bPregameItemsAddedToLoadout; // 0x1981
            uint8_t _pad1982[0x2]; // 0x1982
            // m_hNewARDMHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNewARDMHero;
            char m_hNewARDMHero[0x4]; // 0x1984
            source2sdk::entity2::GameTime_t m_fBuybackCooldown; // 0x1988
            source2sdk::entity2::GameTime_t m_fBuybackGoldLimit; // 0x198c
            std::int32_t m_nLastHealedAmount; // 0x1990
            float m_flLastHealedTime; // 0x1994
            // m_hLastHealEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHealEntity;
            char m_hLastHealEntity[0x4]; // 0x1998
            VectorWS m_vRespawnPosition; // 0x199c
            // m_HeroDamageInfoArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroDamageInfo> m_HeroDamageInfoArray;
            char m_HeroDamageInfoArray[0x18]; // 0x19a8
            // m_vecRecentModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo> m_vecRecentModifiers;
            char m_vecRecentModifiers[0x18]; // 0x19c0
            source2sdk::entity2::GameTime_t m_fMostRecentDamageTime; // 0x19d8
            std::int32_t m_iAbilityPoints; // 0x19dc
            std::int32_t m_iTotalAbilityPoints; // 0x19e0
            std::int32_t m_iAghanimsAbilityPoints; // 0x19e4
            std::int32_t m_iTotalAghanimsAbilityPoints; // 0x19e8
            std::int32_t m_iCurrentXP; // 0x19ec
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x19f0
            float m_flRespawnTimePenalty; // 0x19f4
            float m_flTimeUntilRespawn; // 0x19f8
            float m_flScriptRespawnTime; // 0x19fc
            float m_flPendingRespawnTime; // 0x1a00
            bool m_bScriptDisableRespawns; // 0x1a04
            uint8_t _pad1a05[0x3]; // 0x1a05
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x1a08
            uint8_t _pad1a0c[0x4]; // 0x1a0c
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x1a10
            source2sdk::client::PlayerID_t m_iEconSpecifyingPlayerID; // 0x1a18
            source2sdk::client::HeroID_t m_iHeroID; // 0x1a1c
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x1a20
            uint8_t _pad1a24[0x44]; // 0x1a24
            source2sdk::server::CountdownTimer m_RespawnMusicTimer; // 0x1a68
            source2sdk::server::CountdownTimer m_HeroKillTimer; // 0x1a80
            source2sdk::server::CountdownTimer m_MultipleHeroKillTimer; // 0x1a98
            source2sdk::server::CountdownTimer m_MultipleLastHitTimer; // 0x1ab0
            std::int32_t m_iMultipleKillCount; // 0x1ac8
            float m_flKillStreakStartTime; // 0x1acc
            bool m_bDisableWearables; // 0x1ad0
            uint8_t _pad1ad1[0x3]; // 0x1ad1
            // m_hTogglableWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTAWearableItem> m_hTogglableWearable[103];
            char m_hTogglableWearable[0x19c]; // 0x1ad4
            source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t m_KillInfo; // 0x1c70
            source2sdk::server::CountdownTimer m_DirectorAbilityActivity; // 0x1c90
            bool m_bReincarnating; // 0x1ca8
            bool m_bCustomKillEffect; // 0x1ca9
            uint8_t _pad1caa[0x2]; // 0x1caa
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1cac
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x1cb0
            // m_vecHiddenLoadoutSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_vecHiddenLoadoutSlots;
            char m_vecHiddenLoadoutSlots[0x18]; // 0x1cc8
            source2sdk::server::CountdownTimer m_PurchaseItemTimer; // 0x1ce0
            source2sdk::server::CountdownTimer m_NeutralItemTimer; // 0x1cf8
            source2sdk::server::CountdownTimer m_RetrieveItemsFromStashTimer; // 0x1d10
            source2sdk::server::CountdownTimer m_RequestGoToSecretShopTimer; // 0x1d28
            std::int32_t m_iNextItemToPurchase; // 0x1d40
            bool m_bDoesNextItemCompleteRecipe; // 0x1d44
            uint8_t _pad1d45[0x3]; // 0x1d45
            // m_Loadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sLoadoutItem> m_Loadout;
            char m_Loadout[0x18]; // 0x1d48
            // m_BuildingOrBuilt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<source2sdk::client::AbilityID_t,bool>> m_BuildingOrBuilt;
            char m_BuildingOrBuilt[0x18]; // 0x1d60
            source2sdk::server::sLoadoutItem m_TPScroll; // 0x1d78
            source2sdk::server::sLoadoutItem m_Smoke; // 0x1d90
            source2sdk::server::sLoadoutItem m_Dust; // 0x1da8
            source2sdk::server::sLoadoutItem m_Gem; // 0x1dc0
            source2sdk::server::sLoadoutItem m_SentryWard; // 0x1dd8
            source2sdk::server::sLoadoutItem m_ObserverWard; // 0x1df0
            bool m_bAutoPurchaseItems; // 0x1e08
            bool m_bBuybackDisabled; // 0x1e09
            uint8_t _pad1e0a[0x6]; // 0x1e0a
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hPets;
            char m_hPets[0x18]; // 0x1e10
            bool m_bPreventPetSpawn; // 0x1e28
            uint8_t _pad1e29[0x7]; // 0x1e29
            source2sdk::server::CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // 0x1e30
            uint8_t _pad1e58[0x28]; // 0x1e58
            CUtlString m_strCustomKillEffect; // 0x1e80
            CUtlString m_strCustomHexModel; // 0x1e88
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1e90
            uint8_t _pad1e94[0x4]; // 0x1e94
            // m_vecItemPurchaseHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecItemPurchaseHistory;
            char m_vecItemPurchaseHistory[0x18]; // 0x1e98
            // m_vecAbilitySkillHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecAbilitySkillHistory;
            char m_vecAbilitySkillHistory[0x18]; // 0x1eb0
            // m_vecNeutralItemEquippedHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecNeutralItemEquippedHistory;
            char m_vecNeutralItemEquippedHistory[0x18]; // 0x1ec8
            uint8_t _pad1ee0[0x8]; // 0x1ee0
            // m_vecExpiredIllusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Hero>> m_vecExpiredIllusions;
            char m_vecExpiredIllusions[0x18]; // 0x1ee8
            uint8_t _pad1f00[0x4]; // 0x1f00
            float m_flLastTimeLookedAtByDirector; // 0x1f04
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_BaseNPC_Hero because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero) == 0x1f08);
    };
};
