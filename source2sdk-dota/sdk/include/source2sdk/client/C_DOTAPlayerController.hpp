#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/CUnitOrders.hpp"
#include "source2sdk/client/ClientQuickBuyItemState.hpp"
#include "source2sdk/client/NeutralCampStackPullAlarm_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ShopItemViewMode_t.hpp"
#include "source2sdk/client/sControlGroupElem.hpp"
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
        struct C_DOTABaseAbility;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
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
        // Size: 0xf18
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAPlayerController : public source2sdk::client::CBasePlayerController
        {
        public:
            uint8_t _pad07e0[0xc0]; // 0x7e0
            std::int32_t m_iMinimapMove; // 0x8a0            
            uint8_t _pad08a4[0x4]; // 0x8a4
            KeyValues* m_pClickBehaviorKeys; // 0x8a8            
            source2sdk::entity2::GameTime_t m_flCenterTime; // 0x8b0            
            std::int32_t m_iConfirmationIndex; // 0x8b4            
            bool m_bCenterOnHero; // 0x8b8            
            bool m_bHeroAssigned; // 0x8b9            
            uint8_t _pad08ba[0x2]; // 0x8ba
            std::int32_t m_nKeyBindHeroID; // 0x8bc            
            bool m_bUsingCameraMan; // 0x8c0            
            bool m_bUsingAssistedCameraOperator; // 0x8c1            
            uint8_t _pad08c2[0x2]; // 0x8c2
            std::int32_t m_nPlayerAssistFlags; // 0x8c4            
            VectorWS m_vLatestEvent; // 0x8c8            
            uint8_t _pad08d4[0x24]; // 0x8d4
            // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hFreeDrawAbility;
            char m_hFreeDrawAbility[0x4]; // 0x8f8            
            VectorWS m_vLastFreeDrawPosition; // 0x8fc            
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x908            
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x4]; // 0x90c            
            // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAssignedHero;
            char m_hLastAssignedHero[0x4]; // 0x910            
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x4]; // 0x914            
            // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousKillCamUnit;
            char m_hPreviousKillCamUnit[0x4]; // 0x918            
            float m_flKillCamUnitReceivedTime; // 0x91c            
            uint8_t _pad0920[0x8]; // 0x920
            std::int32_t m_nRareLineClickCount; // 0x928            
            std::int32_t m_nRareLinesPlayed; // 0x92c            
            std::int32_t m_nRareLineGroup; // 0x930            
            float m_flLastRareLinePlayTime; // 0x934            
            float m_flUnitOrdersSendTime; // 0x938            
            float m_flLastUnitOrdersSendTime; // 0x93c            
            float m_flLastUnitOrdersTotalLatency; // 0x940            
            float m_flLastPingTime; // 0x944            
            float m_flPingAllowance; // 0x948            
            bool m_bTeleportRequiresHalt; // 0x94c            
            bool m_bChannelRequiresHalt; // 0x94d            
            bool m_bInteractionChannelsRequireHalt; // 0x94e            
            bool m_bAutoPurchaseItems; // 0x94f            
            bool m_bDisableHUDErrorMessages; // 0x950            
            uint8_t _pad0951[0x3]; // 0x951
            float m_flMouseDragStartX; // 0x954            
            float m_flMouseDragStartY; // 0x958            
            std::int32_t m_nWeatherType; // 0x95c            
            bool m_bDynamicWeatherSystemActive; // 0x960            
            bool m_bDynamicSoundHandled; // 0x961            
            uint8_t _pad0962[0x2]; // 0x962
            source2sdk::entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x964            
            source2sdk::entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x968            
            float m_flDynamicWeatherIntensity; // 0x96c            
            source2sdk::client::ParticleIndex_t m_nXPRangeFXIndex; // 0x970            
            source2sdk::client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x974            
            uint8_t _pad0978[0x4]; // 0x978
            // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hRangeHintAbility;
            char m_hRangeHintAbility[0x4]; // 0x97c            
            source2sdk::client::ParticleIndex_t m_nRangeHintFXIndex; // 0x980            
            float m_flRangeHintFXLastRadius; // 0x984            
            std::int32_t m_nSelectedControlGroup; // 0x988            
            std::int32_t m_nCachedCoachedTeam; // 0x98c            
            float m_flLastReportedMissedSnapshotRate; // 0x990            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0x994            
            // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CUnitOrders> m_unitorders;
            char m_unitorders[0x18]; // 0x998            
            std::int32_t m_nNextOutgoingOrderSequenceNumber; // 0x9b0            
            std::int32_t m_nServerOrderSequenceNumber; // 0x9b4            
            std::int32_t m_nMaxSentOutgoingOrderSequenceNumber; // 0x9b8            
            uint8_t _pad09bc[0x4]; // 0x9bc
            // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nSelectedUnits;
            char m_nSelectedUnits[0x18]; // 0x9c0            
            // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_nWaypoints;
            char m_nWaypoints[0x18]; // 0x9d8            
            std::int32_t m_iActions; // 0x9f0            
            // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hQueryUnit;
            char m_hQueryUnit[0x4]; // 0x9f4            
            bool m_bInQuery; // 0x9f8            
            bool m_bSelectionChangedInDataUpdate; // 0x9f9            
            uint8_t _pad09fa[0x66]; // 0x9fa
            source2sdk::entity2::GameTime_t m_flQueryInhibitingActionTime; // 0xa60            
            float m_flQueryInhibitDuration; // 0xa64            
            // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_RingedEntities;
            char m_RingedEntities[0x18]; // 0xa68            
            // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_ActiveRingOwners;
            char m_ActiveRingOwners[0x18]; // 0xa80            
            bool m_bOverridingQuery; // 0xa98            
            uint8_t _pad0a99[0x7]; // 0xa99
            float m_flLastAutoRepeatTime; // 0xaa0            
            bool m_bNextDoubleclickIsOnlyAClick; // 0xaa4            
            uint8_t _pad0aa5[0x3]; // 0xaa5
            float m_flConsumeDoubleclickTime; // 0xaa8            
            uint8_t _pad0aac[0x4]; // 0xaac
            CUtlString m_LightInfoWeatherEffect; // 0xab0            
            bool m_bPreviousWasLightInfoWeather; // 0xab8            
            uint8_t _pad0ab9[0x7]; // 0xab9
            CUtlString m_MapDefaultWeatherEffect; // 0xac0            
            bool m_bMapUsesDynamicWeather; // 0xac8            
            uint8_t _pad0ac9[0x27]; // 0xac9
            std::int32_t m_nCastRangeEffectCreationRadius; // 0xaf0            
            uint8_t _pad0af4[0x1c]; // 0xaf4
            // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
            char m_vecSuggestedWardLocationEffects[0x18]; // 0xb10            
            // m_hSmartCastNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hSmartCastNPC;
            char m_hSmartCastNPC[0x4]; // 0xb28            
            source2sdk::client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0xb2c            
            source2sdk::client::ParticleIndex_t m_nScanCastIndicatorParticleIndex; // 0xb30            
            bool m_bIsNextCastOrderFromMouseClick; // 0xb34            
            uint8_t _pad0b35[0x53]; // 0xb35
            bool m_bIsSelectHeroHeld; // 0xb88            
            uint8_t _pad0b89[0x7]; // 0xb89
            double m_flSelectHeroHeldStartTime; // 0xb90            
            double m_fLastNetworkStatsSent; // 0xb98            
            uint8_t _pad0ba0[0x18]; // 0xba0
            std::int32_t m_iCursor[2]; // 0xbb8            
            std::int32_t m_iSpectatorClickBehavior; // 0xbc0            
            float m_flAspectRatio; // 0xbc4            
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x4]; // 0xbc8            
            std::int32_t m_iStatsPanel; // 0xbcc            
            std::int32_t m_iShopPanel; // 0xbd0            
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0xbd4            
            std::int32_t m_iStatsDropdownCategory; // 0xbd8            
            std::int32_t m_iStatsDropdownSort; // 0xbdc            
            char m_szShopString[64]; // 0xbe0            
            // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
            char m_vecClientQuickBuyState[0x68]; // 0xc20            
            bool m_bInShowCaseMode; // 0xc88            
            uint8_t _pad0c89[0x3]; // 0xc89
            float m_flCameraZoomAmount; // 0xc8c            
            std::int32_t m_iHighPriorityScore; // 0xc90            
            float m_flUnfilteredFrameTime; // 0xc94            
            // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
            char m_NeutralCampAlarms[0x18]; // 0xc98            
            std::int32_t m_iPrevCursor[2]; // 0xcb0            
            uint8_t _pad0cb8[0xa0]; // 0xcb8
            std::int32_t m_iPositionHistoryTail; // 0xd58            
            std::int32_t m_iMusicStatus; // 0xd5c            
            std::int32_t m_iPreviousMusicStatus; // 0xd60            
            bool m_bRequestedInventory; // 0xd64            
            bool m_bPrecachedInventory; // 0xd65            
            uint8_t _pad0d66[0x2]; // 0xd66
            float m_flMusicOperatorVals[3]; // 0xd68            
            std::int32_t m_iMusicOperatorVals[4]; // 0xd74            
            uint8_t _pad0d84[0x4]; // 0xd84
            // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sControlGroupElem> m_ControlGroups[10];
            char m_ControlGroups[0xf0]; // 0xd88            
            KeyValues* m_pkvControlGroupKV; // 0xe78            
            uint8_t _pad0e80[0x58]; // 0xe80
            float m_flAltHeldStartTime; // 0xed8            
            uint8_t _pad0edc[0x3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPlayerController) == 0xf18);
    };
};
