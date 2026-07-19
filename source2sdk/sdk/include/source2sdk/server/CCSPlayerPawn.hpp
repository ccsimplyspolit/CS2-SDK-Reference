#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSPlayerPawnBase.hpp"
#include "source2sdk/server/CEconItemView.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
        struct CCSBot;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_AimPunchServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_BulletServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_BuyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_DamageReactServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_HostageServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_RadioServices;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1380
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCSPlayerPawn : public source2sdk::server::CCSPlayerPawnBase
        {
        public:
            uint8_t _pad0d30[0x8]; // 0xd30
            source2sdk::server::CCSPlayer_BulletServices* m_pBulletServices; // 0xd38            
            source2sdk::server::CCSPlayer_HostageServices* m_pHostageServices; // 0xd40            
            source2sdk::server::CCSPlayer_BuyServices* m_pBuyServices; // 0xd48            
            source2sdk::server::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xd50            
            source2sdk::server::CCSPlayer_AimPunchServices* m_pAimPunchServices; // 0xd58            
            source2sdk::server::CCSPlayer_RadioServices* m_pRadioServices; // 0xd60            
            source2sdk::server::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xd68            
            std::uint16_t m_nCharacterDefIndex; // 0xd70            
            bool m_bHasFemaleVoice; // 0xd72            
            uint8_t _pad0d73[0x5]; // 0xd73
            CUtlString m_strVOPrefix; // 0xd78            
            char m_szLastPlaceName[18]; // 0xd80            
            uint8_t _pad0d92[0xde]; // 0xd92
            bool m_bInHostageResetZone; // 0xe70            
            bool m_bInBuyZone; // 0xe71            
            uint8_t _pad0e72[0x6]; // 0xe72
            // m_TouchingBuyZones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_TouchingBuyZones;
            char m_TouchingBuyZones[0x18]; // 0xe78            
            bool m_bWasInBuyZone; // 0xe90            
            bool m_bInHostageRescueZone; // 0xe91            
            bool m_bInBombZone; // 0xe92            
            bool m_bWasInHostageRescueZone; // 0xe93            
            std::int32_t m_iRetakesOffering; // 0xe94            
            std::int32_t m_iRetakesOfferingCard; // 0xe98            
            bool m_bRetakesHasDefuseKit; // 0xe9c            
            bool m_bRetakesMVPLastRound; // 0xe9d            
            uint8_t _pad0e9e[0x2]; // 0xe9e
            std::int32_t m_iRetakesMVPBoostItem; // 0xea0            
            source2sdk::client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xea4            
            source2sdk::entity2::GameTime_t m_flHealthShotBoostExpirationTime; // 0xea8            
            float m_flLandingTimeSeconds; // 0xeac            
            bool m_bIsBuyMenuOpen; // 0xeb0            
            uint8_t _pad0eb1[0x37]; // 0xeb1
            source2sdk::entity2::GameTime_t m_lastLandTime; // 0xee8            
            bool m_bOnGroundLastTick; // 0xeec            
            uint8_t _pad0eed[0x3]; // 0xeed
            std::int32_t m_iPlayerLocked; // 0xef0            
            uint8_t _pad0ef4[0x4]; // 0xef4
            source2sdk::entity2::GameTime_t m_flTimeOfLastInjury; // 0xef8            
            source2sdk::entity2::GameTime_t m_flNextSprayDecalTime; // 0xefc            
            bool m_bNextSprayDecalTimeExpedited; // 0xf00            
            uint8_t _pad0f01[0x3]; // 0xf01
            std::int32_t m_nRagdollDamageBone; // 0xf04            
            Vector m_vRagdollDamageForce; // 0xf08            
            char m_szRagdollDamageWeaponName[64]; // 0xf14            
            bool m_bRagdollDamageHeadshot; // 0xf54            
            uint8_t _pad0f55[0x3]; // 0xf55
            VectorWS m_vRagdollServerOrigin; // 0xf58            
            uint8_t _pad0f64[0x4]; // 0xf64
            source2sdk::server::CEconItemView m_EconGloves; // 0xf68            
            std::uint8_t m_nEconGlovesChanged; // 0x1210            
            uint8_t _pad1211[0x3]; // 0x1211
            QAngle m_qDeathEyeAngles; // 0x1214            
            bool m_bLeftHanded; // 0x1220            
            uint8_t _pad1221[0x3]; // 0x1221
            source2sdk::entity2::GameTime_t m_fSwitchedHandednessTime; // 0x1224            
            float m_flViewmodelOffsetX; // 0x1228            
            float m_flViewmodelOffsetY; // 0x122c            
            float m_flViewmodelOffsetZ; // 0x1230            
            float m_flViewmodelFOV; // 0x1234            
            bool m_bIsWalking; // 0x1238            
            uint8_t _pad1239[0x3]; // 0x1239
            float m_fLastGivenDefuserTime; // 0x123c            
            float m_fLastGivenBombTime; // 0x1240            
            float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x1244            
            std::uint32_t m_iDisplayHistoryBits; // 0x1248            
            float m_flLastAttackedTeammate; // 0x124c            
            source2sdk::entity2::GameTime_t m_allowAutoFollowTime; // 0x1250            
            bool m_bResetArmorNextSpawn; // 0x1254            
            uint8_t _pad1255[0x3]; // 0x1255
            CEntityIndex m_nLastKillerIndex; // 0x1258            
            uint8_t _pad125c[0x4]; // 0x125c
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0x1260            
            std::int32_t m_nSpotRules; // 0x1278            
            bool m_bIsScoped; // 0x127c            
            bool m_bResumeZoom; // 0x127d            
            bool m_bIsDefusing; // 0x127e            
            bool m_bIsGrabbingHostage; // 0x127f            
            source2sdk::client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1280            
            source2sdk::entity2::GameTime_t m_flEmitSoundTime; // 0x1284            
            bool m_bInNoDefuseArea; // 0x1288            
            uint8_t _pad1289[0x3]; // 0x1289
            CEntityIndex m_iBombSiteIndex; // 0x128c            
            std::int32_t m_nWhichBombZone; // 0x1290            
            bool m_bInBombZoneTrigger; // 0x1294            
            bool m_bWasInBombZoneTrigger; // 0x1295            
            uint8_t _pad1296[0x2]; // 0x1296
            std::int32_t m_iShotsFired; // 0x1298            
            float m_flFlinchStack; // 0x129c            
            float m_flVelocityModifier; // 0x12a0            
            Vector m_vecTotalBulletForce; // 0x12a4            
            bool m_bWaitForNoAttack; // 0x12b0            
            uint8_t _pad12b1[0x3]; // 0x12b1
            float m_ignoreLadderJumpTime; // 0x12b4            
            bool m_bKilledByHeadshot; // 0x12b8            
            uint8_t _pad12b9[0x3]; // 0x12b9
            std::int32_t m_LastHitBox; // 0x12bc            
            source2sdk::server::CCSBot* m_pBot; // 0x12c0            
            bool m_bBotAllowActive; // 0x12c8            
            uint8_t _pad12c9[0x3]; // 0x12c9
            std::int32_t m_nLastPickupPriority; // 0x12cc            
            float m_flLastPickupPriorityTime; // 0x12d0            
            std::int32_t m_ArmorValue; // 0x12d4            
            std::uint16_t m_unCurrentEquipmentValue; // 0x12d8            
            std::uint16_t m_unRoundStartEquipmentValue; // 0x12da            
            std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x12dc            
            uint8_t _pad12de[0x2]; // 0x12de
            std::int32_t m_iLastWeaponFireUsercmd; // 0x12e0            
            bool m_bIsSpawning; // 0x12e4            
            uint8_t _pad12e5[0xb]; // 0x12e5
            std::int32_t m_iDeathFlags; // 0x12f0            
            bool m_bHasDeathInfo; // 0x12f4            
            uint8_t _pad12f5[0x3]; // 0x12f5
            float m_flDeathInfoTime; // 0x12f8            
            VectorWS m_vecDeathInfoOrigin; // 0x12fc            
            std::uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1308            
            Color m_GunGameImmunityColor; // 0x131c            
            source2sdk::entity2::GameTime_t m_grenadeParameterStashTime; // 0x1320            
            bool m_bGrenadeParametersStashed; // 0x1324            
            uint8_t _pad1325[0x3]; // 0x1325
            QAngle m_angStashedShootAngles; // 0x1328            
            VectorWS m_vecStashedGrenadeThrowPosition; // 0x1334            
            Vector m_vecStashedVelocity; // 0x1340            
            uint8_t _pad134c[0xc]; // 0x134c
            bool m_bCommittingSuicideOnTeamChange; // 0x1358            
            bool m_wasNotKilledNaturally; // 0x1359            
            uint8_t _pad135a[0x2]; // 0x135a
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0x135c            
            bool m_bGunGameImmunity; // 0x1360            
            uint8_t _pad1361[0x3]; // 0x1361
            float m_fMolotovDamageTime; // 0x1364            
            QAngle m_angEyeAngles; // 0x1368            
            uint8_t _pad1374[0xc];
            
            // Datamap fields:
            // CCSPlayer_CameraServices m_pCameraServices; // 0xa68
            // bool bot; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerPawn) == 0x1380);
    };
};
