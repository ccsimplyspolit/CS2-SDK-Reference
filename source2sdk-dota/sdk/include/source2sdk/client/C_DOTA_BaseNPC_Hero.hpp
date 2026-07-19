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
        // Size: 0x1d80
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Hero : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad19b0[0x8]; // 0x19b0
            bool m_bDisableWearables; // 0x19b8            
            uint8_t _pad19b9[0x3]; // 0x19b9
            std::int32_t m_iCurrentXP; // 0x19bc            
            std::int32_t m_iAbilityPoints; // 0x19c0            
            std::int32_t m_iTotalAbilityPoints; // 0x19c4            
            std::int32_t m_iAghanimsAbilityPoints; // 0x19c8            
            std::int32_t m_iTotalAghanimsAbilityPoints; // 0x19cc            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x19d0            
            float m_flRespawnTimePenalty; // 0x19d4            
            float m_flStrength; // 0x19d8            
            float m_flAgility; // 0x19dc            
            float m_flIntellect; // 0x19e0            
            float m_flStrengthTotal; // 0x19e4            
            float m_flAgilityTotal; // 0x19e8            
            float m_flIntellectTotal; // 0x19ec            
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x19f0            
            // m_vecHiddenLoadoutSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_vecHiddenLoadoutSlots;
            char m_vecHiddenLoadoutSlots[0x18]; // 0x1a08            
            std::int32_t m_iRecentDamage; // 0x1a20            
            float m_fPainFactor; // 0x1a24            
            float m_fTargetPainFactor; // 0x1a28            
            bool m_bLifeState; // 0x1a2c            
            bool m_bFirstSpawn; // 0x1a2d            
            uint8_t _pad1a2e[0x2]; // 0x1a2e
            source2sdk::client::ParticleIndex_t m_nFXStunIndex; // 0x1a30            
            source2sdk::client::ParticleIndex_t m_nFXSilenceIndex; // 0x1a34            
            source2sdk::client::ParticleIndex_t m_nFXDeathIndex; // 0x1a38            
            uint8_t _pad1a3c[0x24]; // 0x1a3c
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x1a68            
            source2sdk::client::PlayerID_t m_iEconSpecifyingPlayerID; // 0x1a70            
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x1a74            
            bool m_bReincarnating; // 0x1a78            
            bool m_bCustomKillEffect; // 0x1a79            
            uint8_t _pad1a7a[0x2]; // 0x1a7a
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1a7c            
            bool m_bScriptDisableRespawns; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t m_iPrimaryAttribute; // 0x1a84            
            std::int32_t m_nLastDrawnHealth; // 0x1a88            
            float m_flHurtAmount; // 0x1a8c            
            source2sdk::entity2::GameTime_t m_flLastHurtTime; // 0x1a90            
            float m_flHurtDecayRate; // 0x1a94            
            float m_flHealAmount; // 0x1a98            
            source2sdk::entity2::GameTime_t m_flLastHealTime; // 0x1a9c            
            float m_flHealDecayRate; // 0x1aa0            
            bool m_bIsFirstTimeHeal; // 0x1aa4            
            uint8_t _pad1aa5[0x3]; // 0x1aa5
            source2sdk::entity2::GameTime_t m_flLastDispellTime; // 0x1aa8            
            float m_flDispellAnimationAmount; // 0x1aac            
            float m_flDeathAnimationAmount; // 0x1ab0            
            source2sdk::entity2::GameTime_t m_flLastDeathTime; // 0x1ab4            
            source2sdk::entity2::GameTime_t m_flLastTreeShakeTime; // 0x1ab8            
            uint8_t _pad1abc[0x4]; // 0x1abc
            source2sdk::client::CountdownTimer m_CenterOnHeroCooldownTimer; // 0x1ac0            
            uint8_t _pad1ad8[0x208]; // 0x1ad8
            // m_CombinedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedModels[4];
            char m_CombinedModels[0x20]; // 0x1ce0            
            std::int32_t m_nCurrentCombinedModelIndex; // 0x1d00            
            std::int32_t m_nPendingCombinedModelIndex; // 0x1d04            
            source2sdk::client::HeroID_t m_iHeroID; // 0x1d08            
            float m_flCheckLegacyItemsAt; // 0x1d0c            
            bool m_bDisplayAdditionalHeroes; // 0x1d10            
            uint8_t _pad1d11[0xf]; // 0x1d11
            // m_CombinedParticleModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedParticleModels[4];
            char m_CombinedParticleModels[0x20]; // 0x1d20            
            // m_vecAttachedParticleIndeces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecAttachedParticleIndeces;
            char m_vecAttachedParticleIndeces[0x18]; // 0x1d40            
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hPets;
            char m_hPets[0x18]; // 0x1d58            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1d70            
            std::int32_t m_nKillStreakFXTier; // 0x1d74            
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
            uint8_t _pad1d7a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Hero) == 0x1d80);
    };
};
