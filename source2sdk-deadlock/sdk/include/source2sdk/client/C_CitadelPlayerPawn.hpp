#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelHeroComponent.hpp"
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/client/CCitadelRecentDamage.hpp"
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/client/InputBitMask_t.hpp"
#include "source2sdk/client/ItemDraftRoundState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
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
        // Size: 0x19a0
        // Has VTable
        //
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
        // static metadata: MNetworkVarNames "int32 m_nLevel"
        // static metadata: MNetworkVarNames "int32 m_nCurrencies"
        // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
        // static metadata: MNetworkVarNames "int m_nNumHeroChangesUsed"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "bool m_bInRegenerationZone"
        // static metadata: MNetworkVarNames "bool m_bInItemShopZone"
        // static metadata: MNetworkVarNames "bool m_bInHideoutZone"
        // static metadata: MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
        // static metadata: MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuyQueue"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuySellQueue"
        // static metadata: MNetworkVarNames "AbilityID_t m_unQuickbuyAutoPurchaseRequest"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoPurchase"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoQueueBuild"
        // static metadata: MNetworkVarNames "bool m_bHasQuickbuyBeenUsed"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecRestrictedToItems"
        // static metadata: MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
        // static metadata: MNetworkVarNames "CUtlString m_sHeroBuildSerialized"
        // static metadata: MNetworkVarNames "EHANDLE m_hViewEntityForObserver"
        // static metadata: MNetworkVarNames "bool m_bNetworkDisconnected"
        // static metadata: MNetworkVarNames "bool m_bLearningAbility"
        // static metadata: MNetworkVarNames "int m_nFlashStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashMaxStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashFadeStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashEndTick"
        // static metadata: MNetworkVarNames "int8 m_nFlashMaxAlpha"
        // static metadata: MNetworkVarNames "int32 m_nDeducedLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hEnemyPlayerAimTarget"
        // static metadata: MNetworkVarNames "bool m_arrPreventAbilityLearning"
        // static metadata: MNetworkVarNames "ItemDraftRoundState_t m_ItemDraftRoundState"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sInCombat"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageTaken"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageDealt"
        // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
        // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
        // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
        // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementClipped"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
        // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
        // static metadata: MNetworkVarNames "float32 m_flPredSlowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
        // static metadata: MNetworkVarNames "float32 m_flSlowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flForceInCombatAnimsUntilTime"
        // static metadata: MNetworkVarNames "uint8 m_nAudioEnclosure"
        // static metadata: MNetworkVarNames "bool m_bAudioHasSkyExposure"
        #pragma pack(push, 1)
        class C_CitadelPlayerPawn : public source2sdk::client::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad10d8[0xb8]; // 0x10d8
            // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbilityRequiresDebounce;
            char m_hAbilityRequiresDebounce[0x4]; // 0x1190
            uint8_t _pad1194[0x24]; // 0x1194
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkChangeCallback "angEyeAnglesChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0x11b8
            uint8_t _pad11c4[0x84]; // 0x11c4
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkChangeCallback "angClientCameraChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0x1248
            uint8_t _pad1254[0x84]; // 0x1254
            // metadata: MNetworkEnable
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x12d8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "LevelChanged"
            std::int32_t m_nLevel; // 0x12dc
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "CurrenciesChanged"
            std::int32_t m_nCurrencies[6]; // 0x12e0
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[6]; // 0x12f8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nNumHeroChangesUsed; // 0x1310
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x1314
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RespawnTimeChanged"
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1318
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InRegenZoneChanged"
            bool m_bInRegenerationZone; // 0x131c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
            bool m_bInItemShopZone; // 0x131d
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InHideoutZoneChanged"
            bool m_bInHideoutZone; // 0x131e
            uint8_t _pad131f[0x1]; // 0x131f
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0x1320
            uint8_t _pad1324[0x4]; // 0x1324
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0x1328
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0x1340
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyChanged"
            // m_vecQuickbuyQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuyQueue;
            char m_vecQuickbuyQueue[0x18]; // 0x1358
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyChanged"
            // m_vecQuickbuySellQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuySellQueue;
            char m_vecQuickbuySellQueue[0x18]; // 0x1370
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyPurchaseRequestChanged"
            CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // 0x1388
            // metadata: MNetworkEnable
            bool m_bQuickbuyAutoPurchase; // 0x138c
            // metadata: MNetworkEnable
            bool m_bQuickbuyAutoQueueBuild; // 0x138d
            // metadata: MNetworkEnable
            bool m_bHasQuickbuyBeenUsed; // 0x138e
            uint8_t _pad138f[0x1]; // 0x138f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_vecRestrictedToItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecRestrictedToItems;
            char m_vecRestrictedToItems[0x18]; // 0x1390
            // metadata: MNetworkEnable
            source2sdk::client::HeroBuildID_t m_unHeroBuildID; // 0x13a8
            uint8_t _pad13ac[0x4]; // 0x13ac
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "HeroBuildChanged"
            CUtlString m_sHeroBuildSerialized; // 0x13b0
            // metadata: MNetworkEnable
            // m_hViewEntityForObserver has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewEntityForObserver;
            char m_hViewEntityForObserver[0x4]; // 0x13b8
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x13bc
            // metadata: MNetworkEnable
            bool m_bLearningAbility; // 0x13bd
            uint8_t _pad13be[0x2]; // 0x13be
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashStartChanged"
            std::int32_t m_nFlashStartTick; // 0x13c0
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x13c4
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x13c8
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x13cc
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x13d0
            uint8_t _pad13d1[0x3]; // 0x13d1
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x13d4
            // metadata: MNetworkEnable
            // m_hEnemyPlayerAimTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnemyPlayerAimTarget;
            char m_hEnemyPlayerAimTarget[0x4]; // 0x13d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_arrPreventAbilityLearning[4]; // 0x13dc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemDraftRoundChanged"
            source2sdk::client::ItemDraftRoundState_t m_ItemDraftRoundState; // 0x13e0
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sInCombat; // 0x1468
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1480
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1498
            // metadata: MNetworkEnable
            std::int8_t m_nSuccessiveDucks; // 0x14b0
            uint8_t _pad14b1[0x3]; // 0x14b1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x14b4
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x14b8
            uint8_t _pad14b9[0x3]; // 0x14b9
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x14bc
            // metadata: MNetworkEnable
            QAngle m_angLockedEyeAngles; // 0x14c0
            uint8_t _pad14cc[0x4]; // 0x14cc
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x14d0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x16b8
            uint8_t _pad16f8[0x74]; // 0x16f8
            Vector m_vLastVelocity; // 0x176c
            uint8_t _pad1778[0x24]; // 0x1778
            float m_flRichPresenceUpdateInterval; // 0x179c
            uint8_t _pad17a0[0xf0]; // 0x17a0
            source2sdk::client::InputBitMask_t m_nQueuedAbility; // 0x1890
            source2sdk::entity2::GameTime_t m_QueuedAbilityEndTime; // 0x1898
            uint8_t _pad189c[0x4]; // 0x189c
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementClipped; // 0x18a0
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDisableGravity; // 0x18a1
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDirectAirControl; // 0x18a2
            uint8_t _pad18a3[0x1]; // 0x18a3
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x18a4
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x18a8
            // metadata: MNetworkEnable
            float m_flPredSlowSpeed; // 0x18ac
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x18b0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x18c0
            // metadata: MNetworkEnable
            float m_flSlowSpeed[4]; // 0x18d0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flForceInCombatAnimsUntilTime; // 0x18e0
            std::int32_t m_iCurSlowSlot; // 0x18e4
            bool m_bLocoLeanTriggeredForDirection; // 0x18e8
            bool m_bLocoRunToStopCanTrigger; // 0x18e9
            uint8_t _pad18ea[0x2]; // 0x18ea
            float m_flCrouchFraction; // 0x18ec
            float m_flCrouchSpeed; // 0x18f0
            source2sdk::entity2::GameTime_t m_fidgetTime; // 0x18f4
            Vector m_vShootTestOffsetStanding; // 0x18f8
            Vector m_vShootTestOffsetCrouching; // 0x1904
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x1910
            uint8_t _pad1914[0x80]; // 0x1914
            // metadata: MNetworkEnable
            std::uint8_t m_nAudioEnclosure; // 0x1994
            // metadata: MNetworkEnable
            bool m_bAudioHasSkyExposure; // 0x1995
            uint8_t _pad1996[0xa];

            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf20
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xf28
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_CitadelPlayerPawn) == 0x19a0);
    };
};
