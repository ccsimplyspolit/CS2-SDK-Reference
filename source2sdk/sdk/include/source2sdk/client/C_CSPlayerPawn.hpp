#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/C_CSPlayerPawnBase.hpp"
#include "source2sdk/client/C_EconItemView.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_AimPunchServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_BulletServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_BuyServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_DamageReactServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_GlowServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_HostageServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BulletHitModel;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CS2HudModelArms;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x3470
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSPlayerPawn : public source2sdk::client::C_CSPlayerPawnBase
        {
        public:
            uint8_t _pad1480[0x10]; // 0x1480
            source2sdk::client::CCSPlayer_BulletServices* m_pBulletServices; // 0x1490
            source2sdk::client::CCSPlayer_HostageServices* m_pHostageServices; // 0x1498
            source2sdk::client::CCSPlayer_BuyServices* m_pBuyServices; // 0x14a0
            source2sdk::client::CCSPlayer_GlowServices* m_pGlowServices; // 0x14a8
            source2sdk::client::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x14b0
            source2sdk::client::CCSPlayer_AimPunchServices* m_pAimPunchServices; // 0x14b8
            source2sdk::client::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x14c0
            source2sdk::entity2::GameTime_t m_flHealthShotBoostExpirationTime; // 0x14c8
            source2sdk::entity2::GameTime_t m_flLastFiredWeaponTime; // 0x14cc
            bool m_bHasFemaleVoice; // 0x14d0
            uint8_t _pad14d1[0x3]; // 0x14d1
            float m_flLandingTimeSeconds; // 0x14d4
            float m_flOldFallVelocity; // 0x14d8
            char m_szLastPlaceName[18]; // 0x14dc
            bool m_bPrevDefuser; // 0x14ee
            bool m_bPrevHelmet; // 0x14ef
            std::int32_t m_nPrevArmorVal; // 0x14f0
            std::int32_t m_nPrevGrenadeAmmoCount; // 0x14f4
            std::uint32_t m_unPreviousWeaponHash; // 0x14f8
            std::uint32_t m_unWeaponHash; // 0x14fc
            bool m_bInBuyZone; // 0x1500
            bool m_bPreviouslyInBuyZone; // 0x1501
            bool m_bInLanding; // 0x1502
            uint8_t _pad1503[0x1]; // 0x1503
            float m_flLandingStartTime; // 0x1504
            bool m_bInHostageRescueZone; // 0x1508
            bool m_bInBombZone; // 0x1509
            bool m_bIsBuyMenuOpen; // 0x150a
            uint8_t _pad150b[0x1]; // 0x150b
            source2sdk::entity2::GameTime_t m_flTimeOfLastInjury; // 0x150c
            source2sdk::entity2::GameTime_t m_flNextSprayDecalTime; // 0x1510
            uint8_t _pad1514[0x164]; // 0x1514
            std::int32_t m_iRetakesOffering; // 0x1678
            std::int32_t m_iRetakesOfferingCard; // 0x167c
            bool m_bRetakesHasDefuseKit; // 0x1680
            bool m_bRetakesMVPLastRound; // 0x1681
            uint8_t _pad1682[0x2]; // 0x1682
            std::int32_t m_iRetakesMVPBoostItem; // 0x1684
            source2sdk::client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1688
            uint8_t _pad168c[0x1]; // 0x168c
            bool m_bNeedToReApplyGloves; // 0x168d
            uint8_t _pad168e[0x2]; // 0x168e
            source2sdk::client::C_EconItemView m_EconGloves; // 0x1690
            std::uint8_t m_nEconGlovesChanged; // 0x1b00
            bool m_bMustSyncRagdollState; // 0x1b01
            uint8_t _pad1b02[0x2]; // 0x1b02
            std::int32_t m_nRagdollDamageBone; // 0x1b04
            Vector m_vRagdollDamageForce; // 0x1b08
            char m_szRagdollDamageWeaponName[64]; // 0x1b14
            bool m_bRagdollDamageHeadshot; // 0x1b54
            uint8_t _pad1b55[0x3]; // 0x1b55
            VectorWS m_vRagdollServerOrigin; // 0x1b58
            source2sdk::entity2::GameTime_t m_lastLandTime; // 0x1b64
            bool m_bOnGroundLastTick; // 0x1b68
            uint8_t _pad1b69[0x1b]; // 0x1b69
            // m_hHudModelArms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CS2HudModelArms> m_hHudModelArms;
            char m_hHudModelArms[0x4]; // 0x1b84
            QAngle m_qDeathEyeAngles; // 0x1b88
            bool m_bLeftHanded; // 0x1b94
            uint8_t _pad1b95[0x3]; // 0x1b95
            source2sdk::entity2::GameTime_t m_fSwitchedHandednessTime; // 0x1b98
            float m_flViewmodelOffsetX; // 0x1b9c
            float m_flViewmodelOffsetY; // 0x1ba0
            float m_flViewmodelOffsetZ; // 0x1ba4
            float m_flViewmodelFOV; // 0x1ba8
            std::uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1bac
            uint8_t _pad1bc0[0x30]; // 0x1bc0
            Color m_GunGameImmunityColor; // 0x1bf0
            uint8_t _pad1bf4[0x4c]; // 0x1bf4
            // m_vecBulletHitModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_BulletHitModel*> m_vecBulletHitModels;
            char m_vecBulletHitModels[0x18]; // 0x1c40
            bool m_bIsWalking; // 0x1c58
            uint8_t _pad1c59[0x7]; // 0x1c59
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x1c60
            bool m_bIsScoped; // 0x1c78
            bool m_bResumeZoom; // 0x1c79
            bool m_bIsDefusing; // 0x1c7a
            bool m_bIsGrabbingHostage; // 0x1c7b
            source2sdk::client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1c7c
            source2sdk::entity2::GameTime_t m_flEmitSoundTime; // 0x1c80
            bool m_bInNoDefuseArea; // 0x1c84
            uint8_t _pad1c85[0x3]; // 0x1c85
            std::int32_t m_nWhichBombZone; // 0x1c88
            std::int32_t m_iShotsFired; // 0x1c8c
            float m_flFlinchStack; // 0x1c90
            float m_flVelocityModifier; // 0x1c94
            bool m_bWaitForNoAttack; // 0x1c98
            uint8_t _pad1c99[0x3]; // 0x1c99
            float m_ignoreLadderJumpTime; // 0x1c9c
            uint8_t _pad1ca0[0x1]; // 0x1ca0
            bool m_bKilledByHeadshot; // 0x1ca1
            uint8_t _pad1ca2[0x2]; // 0x1ca2
            std::int32_t m_ArmorValue; // 0x1ca4
            std::uint16_t m_unCurrentEquipmentValue; // 0x1ca8
            std::uint16_t m_unRoundStartEquipmentValue; // 0x1caa
            std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x1cac
            uint8_t _pad1cae[0x2]; // 0x1cae
            CEntityIndex m_nLastKillerIndex; // 0x1cb0
            bool m_bOldIsScoped; // 0x1cb4
            bool m_bHasDeathInfo; // 0x1cb5
            uint8_t _pad1cb6[0x2]; // 0x1cb6
            float m_flDeathInfoTime; // 0x1cb8
            VectorWS m_vecDeathInfoOrigin; // 0x1cbc
            uint8_t _pad1cc8[0x30]; // 0x1cc8
            source2sdk::entity2::GameTime_t m_grenadeParameterStashTime; // 0x1cf8
            bool m_bGrenadeParametersStashed; // 0x1cfc
            uint8_t _pad1cfd[0x3]; // 0x1cfd
            QAngle m_angStashedShootAngles; // 0x1d00
            VectorWS m_vecStashedGrenadeThrowPosition; // 0x1d0c
            VectorWS m_vecStashedGrenadeThrowPawnCenter; // 0x1d18
            Vector m_vecStashedVelocity; // 0x1d24
            uint8_t _pad1d30[0x1530]; // 0x1d30
            bool m_bShouldAutobuyDMWeapons; // 0x3260
            uint8_t _pad3261[0x3]; // 0x3261
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0x3264
            bool m_bGunGameImmunity; // 0x3268
            uint8_t _pad3269[0x3]; // 0x3269
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x326c
            float m_fMolotovDamageTime; // 0x3270
            uint8_t _pad3274[0x68]; // 0x3274
            source2sdk::client::ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x32dc
            uint8_t _pad32e0[0x70]; // 0x32e0
            QAngle m_angEyeAngles; // 0x3350
            uint8_t _pad335c[0x84]; // 0x335c
            source2sdk::entity2::GameTime_t m_arrOldEyeAnglesTimes[4]; // 0x33e0
            QAngle m_arrOldEyeAngles[4]; // 0x33f0
            QAngle m_angEyeAnglesVelocity; // 0x3420
            CEntityIndex m_iIDEntIndex; // 0x342c
            source2sdk::client::CountdownTimer m_delayTargetIDTimer; // 0x3430
            CEntityIndex m_iTargetItemEntIdx; // 0x3448
            CEntityIndex m_iOldIDEntIndex; // 0x344c
            source2sdk::client::CountdownTimer m_holdTargetIDTimer; // 0x3450
            uint8_t _pad3468[0x8];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_CSPlayerPawn because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_CSPlayerPawn) == 0x3470);
    };
};
