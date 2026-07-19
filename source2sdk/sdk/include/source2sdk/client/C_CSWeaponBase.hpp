#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/C_BasePlayerWeapon.hpp"
#include "source2sdk/client/C_IronSightController.hpp"
#include "source2sdk/client/WeaponGameplayAnimState.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ce0
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSWeaponBase : public source2sdk::client::C_BasePlayerWeapon
        {
        public:
            uint8_t _pad1728[0x50]; // 0x1728
            source2sdk::client::WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0x1778            
            uint8_t _pad177a[0x2]; // 0x177a
            source2sdk::entity2::GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0x177c            
            source2sdk::entity2::GameTime_t m_flInspectCancelCompleteTime; // 0x1780            
            bool m_bInspectPending; // 0x1784            
            bool m_bInspectShouldLoop; // 0x1785            
            uint8_t _pad1786[0x2a]; // 0x1786
            float m_flCrosshairDistance; // 0x17b0            
            std::int32_t m_iAmmoLastCheck; // 0x17b4            
            std::int32_t m_nLastEmptySoundCmdNum; // 0x17b8            
            bool m_bFireOnEmpty; // 0x17bc            
            uint8_t _pad17bd[0x3]; // 0x17bd
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x17c0            
            source2sdk::client::CSWeaponMode m_weaponMode; // 0x17d8            
            float m_flTurningInaccuracyDelta; // 0x17dc            
            Vector m_vecTurningInaccuracyEyeDirLast; // 0x17e0            
            float m_flTurningInaccuracy; // 0x17ec            
            float m_fAccuracyPenalty; // 0x17f0            
            source2sdk::entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0x17f4            
            float m_fAccuracySmoothedForZoom; // 0x17f8            
            std::int32_t m_iRecoilIndex; // 0x17fc            
            float m_flRecoilIndex; // 0x1800            
            bool m_bBurstMode; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            source2sdk::entity2::GameTime_t m_flLastBurstModeChangeTime; // 0x1808            
            source2sdk::entity2::GameTick_t m_nPostponeFireReadyTicks; // 0x180c            
            float m_flPostponeFireReadyFrac; // 0x1810            
            bool m_bInReload; // 0x1814            
            uint8_t _pad1815[0x3]; // 0x1815
            source2sdk::entity2::GameTick_t m_nDeployTick; // 0x1818            
            source2sdk::entity2::GameTime_t m_flDroppedAtTime; // 0x181c            
            uint8_t _pad1820[0x4]; // 0x1820
            bool m_bIsHauledBack; // 0x1824            
            bool m_bSilencerOn; // 0x1825            
            uint8_t _pad1826[0x2]; // 0x1826
            source2sdk::entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0x1828            
            float m_flWeaponActionPlaybackRate; // 0x182c            
            std::int32_t m_iOriginalTeamNumber; // 0x1830            
            std::int32_t m_iMostRecentTeamNumber; // 0x1834            
            bool m_bDroppedNearBuyZone; // 0x1838            
            uint8_t _pad1839[0x3]; // 0x1839
            float m_flNextAttackRenderTimeOffset; // 0x183c            
            uint8_t _pad1840[0xa0]; // 0x1840
            bool m_bClearWeaponIdentifyingUGC; // 0x18e0            
            bool m_bVisualsDataSet; // 0x18e1            
            bool m_bUIWeapon; // 0x18e2            
            uint8_t _pad18e3[0x1]; // 0x18e3
            std::int32_t m_nCustomEconReloadEventId; // 0x18e4            
            uint8_t _pad18e8[0x8]; // 0x18e8
            bool m_bCanBePickedUp; // 0x18f0            
            uint8_t _pad18f1[0x3]; // 0x18f1
            source2sdk::entity2::GameTime_t m_nextPrevOwnerUseTime; // 0x18f4            
            // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hPrevOwner;
            char m_hPrevOwner[0x4]; // 0x18f8            
            source2sdk::entity2::GameTick_t m_nDropTick; // 0x18fc            
            bool m_bWasActiveWeaponWhenDropped; // 0x1900            
            uint8_t _pad1901[0x23]; // 0x1901
            bool m_donated; // 0x1924            
            uint8_t _pad1925[0x3]; // 0x1925
            source2sdk::entity2::GameTime_t m_fLastShotTime; // 0x1928            
            bool m_bWasOwnedByCT; // 0x192c            
            bool m_bWasOwnedByTerrorist; // 0x192d            
            uint8_t _pad192e[0x2]; // 0x192e
            float m_flNextClientFireBulletTime; // 0x1930            
            float m_flNextClientFireBulletTime_Repredict; // 0x1934            
            uint8_t _pad1938[0x58]; // 0x1938
            source2sdk::client::C_IronSightController m_IronSightController; // 0x1990            
            std::int32_t m_iIronSightMode; // 0x1a40            
            uint8_t _pad1a44[0x74]; // 0x1a44
            source2sdk::entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0x1ab8            
            uint8_t _pad1abc[0x5c]; // 0x1abc
            float m_flWatTickOffset; // 0x1b18            
            uint8_t _pad1b1c[0x10]; // 0x1b1c
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x1b2c            
            uint8_t _pad1b30[0x1b0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSWeaponBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSWeaponBase) == 0x1ce0);
    };
};
