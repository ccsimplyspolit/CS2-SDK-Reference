#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/WeaponGameplayAnimState.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerWeapon.hpp"
#include "source2sdk/server/CIronSightController.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1050
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCSWeaponBase : public source2sdk::server::CBasePlayerWeapon
        {
        public:
            uint8_t _pad0cd0[0x8]; // 0xcd0
            bool m_bRemoveable; // 0xcd8            
            bool m_bPlayerAmmoStockOnPickup; // 0xcd9            
            bool m_bRequireUseToTouch; // 0xcda            
            uint8_t _pad0cdb[0x1]; // 0xcdb
            source2sdk::client::WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0xcdc            
            uint8_t _pad0cde[0x2]; // 0xcde
            source2sdk::entity2::GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0xce0            
            source2sdk::entity2::GameTime_t m_flInspectCancelCompleteTime; // 0xce4            
            bool m_bInspectPending; // 0xce8            
            bool m_bInspectShouldLoop; // 0xce9            
            uint8_t _pad0cea[0x2a]; // 0xcea
            std::int32_t m_nLastEmptySoundCmdNum; // 0xd14            
            uint8_t _pad0d18[0x18]; // 0xd18
            bool m_bFireOnEmpty; // 0xd30            
            uint8_t _pad0d31[0x7]; // 0xd31
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xd38            
            source2sdk::client::CSWeaponMode m_weaponMode; // 0xd50            
            float m_flTurningInaccuracyDelta; // 0xd54            
            Vector m_vecTurningInaccuracyEyeDirLast; // 0xd58            
            float m_flTurningInaccuracy; // 0xd64            
            float m_fAccuracyPenalty; // 0xd68            
            source2sdk::entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0xd6c            
            float m_fAccuracySmoothedForZoom; // 0xd70            
            std::int32_t m_iRecoilIndex; // 0xd74            
            float m_flRecoilIndex; // 0xd78            
            bool m_bBurstMode; // 0xd7c            
            uint8_t _pad0d7d[0x3]; // 0xd7d
            source2sdk::entity2::GameTick_t m_nPostponeFireReadyTicks; // 0xd80            
            float m_flPostponeFireReadyFrac; // 0xd84            
            bool m_bInReload; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            source2sdk::entity2::GameTick_t m_nDeployTick; // 0xd8c            
            source2sdk::entity2::GameTime_t m_flDroppedAtTime; // 0xd90            
            uint8_t _pad0d94[0x4]; // 0xd94
            bool m_bIsHauledBack; // 0xd98            
            bool m_bSilencerOn; // 0xd99            
            uint8_t _pad0d9a[0x2]; // 0xd9a
            source2sdk::entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0xd9c            
            float m_flWeaponActionPlaybackRate; // 0xda0            
            std::int32_t m_iOriginalTeamNumber; // 0xda4            
            std::int32_t m_iMostRecentTeamNumber; // 0xda8            
            bool m_bDroppedNearBuyZone; // 0xdac            
            uint8_t _pad0dad[0x3]; // 0xdad
            float m_flNextAttackRenderTimeOffset; // 0xdb0            
            uint8_t _pad0db4[0x14]; // 0xdb4
            bool m_bCanBePickedUp; // 0xdc8            
            bool m_bUseCanOverrideNextOwnerTouchTime; // 0xdc9            
            uint8_t _pad0dca[0x2]; // 0xdca
            source2sdk::entity2::GameTime_t m_nextOwnerTouchTime; // 0xdcc            
            source2sdk::entity2::GameTime_t m_nextPrevOwnerTouchTime; // 0xdd0            
            uint8_t _pad0dd4[0x4]; // 0xdd4
            source2sdk::entity2::GameTime_t m_nextPrevOwnerUseTime; // 0xdd8            
            // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hPrevOwner;
            char m_hPrevOwner[0x4]; // 0xddc            
            source2sdk::entity2::GameTick_t m_nDropTick; // 0xde0            
            bool m_bWasActiveWeaponWhenDropped; // 0xde4            
            uint8_t _pad0de5[0x1f]; // 0xde5
            bool m_donated; // 0xe04            
            uint8_t _pad0e05[0x3]; // 0xe05
            source2sdk::entity2::GameTime_t m_fLastShotTime; // 0xe08            
            bool m_bWasOwnedByCT; // 0xe0c            
            bool m_bWasOwnedByTerrorist; // 0xe0d            
            uint8_t _pad0e0e[0x2]; // 0xe0e
            std::int32_t m_numRemoveUnownedWeaponThink; // 0xe10            
            uint8_t _pad0e14[0x5c]; // 0xe14
            source2sdk::server::CIronSightController m_IronSightController; // 0xe70            
            std::int32_t m_iIronSightMode; // 0xe88            
            source2sdk::entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0xe8c            
            float m_flWatTickOffset; // 0xe90            
            uint8_t _pad0e94[0xc]; // 0xe94
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0xea0            
            uint8_t _pad0ea4[0x1ac];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSWeaponBase) == 0x1050);
    };
};
