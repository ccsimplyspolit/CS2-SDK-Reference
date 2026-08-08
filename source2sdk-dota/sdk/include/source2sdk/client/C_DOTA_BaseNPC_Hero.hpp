#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1d88
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Hero : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad19b8[0x8]; // 0x19b8
            bool m_bDisableWearables; // 0x19c0
            uint8_t _pad19c1[0x3]; // 0x19c1
            std::int32_t m_iCurrentXP; // 0x19c4
            std::int32_t m_iAbilityPoints; // 0x19c8
            std::int32_t m_iTotalAbilityPoints; // 0x19cc
            std::int32_t m_iAghanimsAbilityPoints; // 0x19d0
            std::int32_t m_iTotalAghanimsAbilityPoints; // 0x19d4
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x19d8
            float m_flRespawnTimePenalty; // 0x19dc
            float m_flStrength; // 0x19e0
            float m_flAgility; // 0x19e4
            float m_flIntellect; // 0x19e8
            float m_flStrengthTotal; // 0x19ec
            float m_flAgilityTotal; // 0x19f0
            float m_flIntellectTotal; // 0x19f4
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x19f8
            // m_vecHiddenLoadoutSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_vecHiddenLoadoutSlots;
            char m_vecHiddenLoadoutSlots[0x18]; // 0x1a10
            std::int32_t m_iRecentDamage; // 0x1a28
            float m_fPainFactor; // 0x1a2c
            float m_fTargetPainFactor; // 0x1a30
            bool m_bLifeState; // 0x1a34
            bool m_bFirstSpawn; // 0x1a35
            uint8_t _pad1a36[0x2]; // 0x1a36
            source2sdk::client::ParticleIndex_t m_nFXStunIndex; // 0x1a38
            source2sdk::client::ParticleIndex_t m_nFXSilenceIndex; // 0x1a3c
            source2sdk::client::ParticleIndex_t m_nFXDeathIndex; // 0x1a40
            uint8_t _pad1a44[0x24]; // 0x1a44
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x1a68
            uint8_t _pad1a6c[0x4]; // 0x1a6c
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x1a70
            source2sdk::client::PlayerID_t m_iEconSpecifyingPlayerID; // 0x1a78
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x1a7c
            bool m_bReincarnating; // 0x1a80
            bool m_bCustomKillEffect; // 0x1a81
            uint8_t _pad1a82[0x2]; // 0x1a82
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1a84
            bool m_bScriptDisableRespawns; // 0x1a88
            uint8_t _pad1a89[0x3]; // 0x1a89
            std::int32_t m_iPrimaryAttribute; // 0x1a8c
            std::int32_t m_nLastDrawnHealth; // 0x1a90
            float m_flHurtAmount; // 0x1a94
            source2sdk::entity2::GameTime_t m_flLastHurtTime; // 0x1a98
            float m_flHurtDecayRate; // 0x1a9c
            float m_flHealAmount; // 0x1aa0
            source2sdk::entity2::GameTime_t m_flLastHealTime; // 0x1aa4
            float m_flHealDecayRate; // 0x1aa8
            bool m_bIsFirstTimeHeal; // 0x1aac
            uint8_t _pad1aad[0x3]; // 0x1aad
            source2sdk::entity2::GameTime_t m_flLastDispellTime; // 0x1ab0
            float m_flDispellAnimationAmount; // 0x1ab4
            float m_flDeathAnimationAmount; // 0x1ab8
            source2sdk::entity2::GameTime_t m_flLastDeathTime; // 0x1abc
            source2sdk::entity2::GameTime_t m_flLastTreeShakeTime; // 0x1ac0
            uint8_t _pad1ac4[0x4]; // 0x1ac4
            source2sdk::client::CountdownTimer m_CenterOnHeroCooldownTimer; // 0x1ac8
            uint8_t _pad1ae0[0x208]; // 0x1ae0
            // m_CombinedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedModels[4];
            char m_CombinedModels[0x20]; // 0x1ce8
            std::int32_t m_nCurrentCombinedModelIndex; // 0x1d08
            std::int32_t m_nPendingCombinedModelIndex; // 0x1d0c
            source2sdk::client::HeroID_t m_iHeroID; // 0x1d10
            float m_flCheckLegacyItemsAt; // 0x1d14
            bool m_bDisplayAdditionalHeroes; // 0x1d18
            uint8_t _pad1d19[0xf]; // 0x1d19
            // m_CombinedParticleModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedParticleModels[4];
            char m_CombinedParticleModels[0x20]; // 0x1d28
            // m_vecAttachedParticleIndeces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecAttachedParticleIndeces;
            char m_vecAttachedParticleIndeces[0x18]; // 0x1d48
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hPets;
            char m_hPets[0x18]; // 0x1d60
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1d78
            std::int32_t m_nKillStreakFXTier; // 0x1d7c
            // start of bitfield block
            uint16_t m_bBuybackDisabled: 1;
            uint16_t m_bWasFrozen: 1;
            uint16_t m_bUpdateClientsideWearables: 1;
            uint16_t m_bForceBuildCombinedModel: 1;
            uint16_t m_bRecombineForMaterialsOnly: 1;
            uint16_t m_bBuildingCombinedModel: 1;
            uint16_t m_bInReloadEvent: 1;
            uint16_t m_bStoreOldVisibility: 1;
            uint16_t m_bResetVisibility: 1;
            uint16_t m_bStoredVisibility: 1;
            // end of bitfield block// 10 bits
            uint8_t _pad1d82[0x6];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Hero because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Hero) == 0x1d88);
    };
};
