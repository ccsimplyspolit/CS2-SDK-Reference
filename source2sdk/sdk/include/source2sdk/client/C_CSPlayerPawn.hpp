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
        // Size: 0x3460
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
            uint8_t _pad1514[0x15c]; // 0x1514
            std::int32_t m_iRetakesOffering; // 0x1670            
            std::int32_t m_iRetakesOfferingCard; // 0x1674            
            bool m_bRetakesHasDefuseKit; // 0x1678            
            bool m_bRetakesMVPLastRound; // 0x1679            
            uint8_t _pad167a[0x2]; // 0x167a
            std::int32_t m_iRetakesMVPBoostItem; // 0x167c            
            source2sdk::client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1680            
            uint8_t _pad1684[0x1]; // 0x1684
            bool m_bNeedToReApplyGloves; // 0x1685            
            uint8_t _pad1686[0x2]; // 0x1686
            source2sdk::client::C_EconItemView m_EconGloves; // 0x1688            
            std::uint8_t m_nEconGlovesChanged; // 0x1af8            
            bool m_bMustSyncRagdollState; // 0x1af9            
            uint8_t _pad1afa[0x2]; // 0x1afa
            std::int32_t m_nRagdollDamageBone; // 0x1afc            
            Vector m_vRagdollDamageForce; // 0x1b00            
            char m_szRagdollDamageWeaponName[64]; // 0x1b0c            
            bool m_bRagdollDamageHeadshot; // 0x1b4c            
            uint8_t _pad1b4d[0x3]; // 0x1b4d
            VectorWS m_vRagdollServerOrigin; // 0x1b50            
            source2sdk::entity2::GameTime_t m_lastLandTime; // 0x1b5c            
            bool m_bOnGroundLastTick; // 0x1b60            
            uint8_t _pad1b61[0x1b]; // 0x1b61
            // m_hHudModelArms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CS2HudModelArms> m_hHudModelArms;
            char m_hHudModelArms[0x4]; // 0x1b7c            
            QAngle m_qDeathEyeAngles; // 0x1b80            
            bool m_bLeftHanded; // 0x1b8c            
            uint8_t _pad1b8d[0x3]; // 0x1b8d
            source2sdk::entity2::GameTime_t m_fSwitchedHandednessTime; // 0x1b90            
            float m_flViewmodelOffsetX; // 0x1b94            
            float m_flViewmodelOffsetY; // 0x1b98            
            float m_flViewmodelOffsetZ; // 0x1b9c            
            float m_flViewmodelFOV; // 0x1ba0            
            std::uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1ba4            
            uint8_t _pad1bb8[0x30]; // 0x1bb8
            Color m_GunGameImmunityColor; // 0x1be8            
            uint8_t _pad1bec[0x4c]; // 0x1bec
            // m_vecBulletHitModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_BulletHitModel*> m_vecBulletHitModels;
            char m_vecBulletHitModels[0x18]; // 0x1c38            
            bool m_bIsWalking; // 0x1c50            
            uint8_t _pad1c51[0x7]; // 0x1c51
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x1c58            
            bool m_bIsScoped; // 0x1c70            
            bool m_bResumeZoom; // 0x1c71            
            bool m_bIsDefusing; // 0x1c72            
            bool m_bIsGrabbingHostage; // 0x1c73            
            source2sdk::client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1c74            
            source2sdk::entity2::GameTime_t m_flEmitSoundTime; // 0x1c78            
            bool m_bInNoDefuseArea; // 0x1c7c            
            uint8_t _pad1c7d[0x3]; // 0x1c7d
            std::int32_t m_nWhichBombZone; // 0x1c80            
            std::int32_t m_iShotsFired; // 0x1c84            
            float m_flFlinchStack; // 0x1c88            
            float m_flVelocityModifier; // 0x1c8c            
            bool m_bWaitForNoAttack; // 0x1c90            
            uint8_t _pad1c91[0x3]; // 0x1c91
            float m_ignoreLadderJumpTime; // 0x1c94            
            uint8_t _pad1c98[0x1]; // 0x1c98
            bool m_bKilledByHeadshot; // 0x1c99            
            uint8_t _pad1c9a[0x2]; // 0x1c9a
            std::int32_t m_ArmorValue; // 0x1c9c            
            std::uint16_t m_unCurrentEquipmentValue; // 0x1ca0            
            std::uint16_t m_unRoundStartEquipmentValue; // 0x1ca2            
            std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x1ca4            
            uint8_t _pad1ca6[0x2]; // 0x1ca6
            CEntityIndex m_nLastKillerIndex; // 0x1ca8            
            bool m_bOldIsScoped; // 0x1cac            
            bool m_bHasDeathInfo; // 0x1cad            
            uint8_t _pad1cae[0x2]; // 0x1cae
            float m_flDeathInfoTime; // 0x1cb0            
            VectorWS m_vecDeathInfoOrigin; // 0x1cb4            
            uint8_t _pad1cc0[0x30]; // 0x1cc0
            source2sdk::entity2::GameTime_t m_grenadeParameterStashTime; // 0x1cf0            
            bool m_bGrenadeParametersStashed; // 0x1cf4            
            uint8_t _pad1cf5[0x3]; // 0x1cf5
            QAngle m_angStashedShootAngles; // 0x1cf8            
            VectorWS m_vecStashedGrenadeThrowPosition; // 0x1d04            
            Vector m_vecStashedVelocity; // 0x1d10            
            uint8_t _pad1d1c[0x1534]; // 0x1d1c
            bool m_bShouldAutobuyDMWeapons; // 0x3250            
            uint8_t _pad3251[0x3]; // 0x3251
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0x3254            
            bool m_bGunGameImmunity; // 0x3258            
            uint8_t _pad3259[0x3]; // 0x3259
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x325c            
            float m_fMolotovDamageTime; // 0x3260            
            uint8_t _pad3264[0x68]; // 0x3264
            source2sdk::client::ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x32cc            
            uint8_t _pad32d0[0x70]; // 0x32d0
            QAngle m_angEyeAngles; // 0x3340            
            uint8_t _pad334c[0x84]; // 0x334c
            source2sdk::entity2::GameTime_t m_arrOldEyeAnglesTimes[4]; // 0x33d0            
            QAngle m_arrOldEyeAngles[4]; // 0x33e0            
            QAngle m_angEyeAnglesVelocity; // 0x3410            
            CEntityIndex m_iIDEntIndex; // 0x341c            
            source2sdk::client::CountdownTimer m_delayTargetIDTimer; // 0x3420            
            CEntityIndex m_iTargetItemEntIdx; // 0x3438            
            CEntityIndex m_iOldIDEntIndex; // 0x343c            
            source2sdk::client::CountdownTimer m_holdTargetIDTimer; // 0x3440            
            uint8_t _pad3458[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSPlayerPawn) == 0x3460);
    };
};
