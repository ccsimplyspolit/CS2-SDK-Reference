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
        // Size: 0x1998
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
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x1310            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RespawnTimeChanged"
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1314            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InRegenZoneChanged"
            bool m_bInRegenerationZone; // 0x1318            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
            bool m_bInItemShopZone; // 0x1319            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InHideoutZoneChanged"
            bool m_bInHideoutZone; // 0x131a            
            uint8_t _pad131b[0x1]; // 0x131b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0x131c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0x1320            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0x1338            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyChanged"
            // m_vecQuickbuyQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuyQueue;
            char m_vecQuickbuyQueue[0x18]; // 0x1350            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyChanged"
            // m_vecQuickbuySellQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuySellQueue;
            char m_vecQuickbuySellQueue[0x18]; // 0x1368            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyPurchaseRequestChanged"
            CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // 0x1380            
            // metadata: MNetworkEnable
            bool m_bQuickbuyAutoPurchase; // 0x1384            
            // metadata: MNetworkEnable
            bool m_bQuickbuyAutoQueueBuild; // 0x1385            
            // metadata: MNetworkEnable
            bool m_bHasQuickbuyBeenUsed; // 0x1386            
            uint8_t _pad1387[0x1]; // 0x1387
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_vecRestrictedToItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecRestrictedToItems;
            char m_vecRestrictedToItems[0x18]; // 0x1388            
            // metadata: MNetworkEnable
            source2sdk::client::HeroBuildID_t m_unHeroBuildID; // 0x13a0            
            uint8_t _pad13a4[0x4]; // 0x13a4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "HeroBuildChanged"
            CUtlString m_sHeroBuildSerialized; // 0x13a8            
            // metadata: MNetworkEnable
            // m_hViewEntityForObserver has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewEntityForObserver;
            char m_hViewEntityForObserver[0x4]; // 0x13b0            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x13b4            
            // metadata: MNetworkEnable
            bool m_bLearningAbility; // 0x13b5            
            uint8_t _pad13b6[0x2]; // 0x13b6
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashStartChanged"
            std::int32_t m_nFlashStartTick; // 0x13b8            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x13bc            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x13c0            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x13c4            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x13c8            
            uint8_t _pad13c9[0x3]; // 0x13c9
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x13cc            
            // metadata: MNetworkEnable
            // m_hEnemyPlayerAimTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnemyPlayerAimTarget;
            char m_hEnemyPlayerAimTarget[0x4]; // 0x13d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_arrPreventAbilityLearning[4]; // 0x13d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemDraftRoundChanged"
            source2sdk::client::ItemDraftRoundState_t m_ItemDraftRoundState; // 0x13d8            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sInCombat; // 0x1460            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1478            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1490            
            // metadata: MNetworkEnable
            std::int8_t m_nSuccessiveDucks; // 0x14a8            
            uint8_t _pad14a9[0x3]; // 0x14a9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x14ac            
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x14b0            
            uint8_t _pad14b1[0x3]; // 0x14b1
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x14b4            
            // metadata: MNetworkEnable
            QAngle m_angLockedEyeAngles; // 0x14b8            
            uint8_t _pad14c4[0x4]; // 0x14c4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x14c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x16b0            
            uint8_t _pad16f0[0x74]; // 0x16f0
            Vector m_vLastVelocity; // 0x1764            
            uint8_t _pad1770[0x24]; // 0x1770
            float m_flRichPresenceUpdateInterval; // 0x1794            
            uint8_t _pad1798[0xf0]; // 0x1798
            source2sdk::client::InputBitMask_t m_nQueuedAbility; // 0x1888            
            source2sdk::entity2::GameTime_t m_QueuedAbilityEndTime; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementClipped; // 0x1898            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDisableGravity; // 0x1899            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDirectAirControl; // 0x189a            
            uint8_t _pad189b[0x1]; // 0x189b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x189c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x18a0            
            // metadata: MNetworkEnable
            float m_flPredSlowSpeed; // 0x18a4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x18a8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x18b8            
            // metadata: MNetworkEnable
            float m_flSlowSpeed[4]; // 0x18c8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flForceInCombatAnimsUntilTime; // 0x18d8            
            std::int32_t m_iCurSlowSlot; // 0x18dc            
            bool m_bLocoLeanTriggeredForDirection; // 0x18e0            
            bool m_bLocoRunToStopCanTrigger; // 0x18e1            
            uint8_t _pad18e2[0x2]; // 0x18e2
            float m_flCrouchFraction; // 0x18e4            
            float m_flCrouchSpeed; // 0x18e8            
            source2sdk::entity2::GameTime_t m_fidgetTime; // 0x18ec            
            Vector m_vShootTestOffsetStanding; // 0x18f0            
            Vector m_vShootTestOffsetCrouching; // 0x18fc            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x1908            
            uint8_t _pad190c[0x80]; // 0x190c
            // metadata: MNetworkEnable
            std::uint8_t m_nAudioEnclosure; // 0x198c            
            // metadata: MNetworkEnable
            bool m_bAudioHasSkyExposure; // 0x198d            
            uint8_t _pad198e[0xa];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf20
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xf28
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelPlayerPawn) == 0x1998);
    };
};
