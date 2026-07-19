#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x14a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hHookVictim"
        // static metadata: MNetworkVarNames "Vector m_vecHookTargetStartPos"
        // static metadata: MNetworkVarNames "GameTime_t m_flCancelHookTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBeginReelHookTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBulletShouldExpireTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Hook : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "HookVictimChanged"
            // m_hHookVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHookVictim;
            char m_hHookVictim[0x4]; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecHookTargetStartPos; // 0xf74            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCancelHookTime; // 0xf80            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBeginReelHookTime; // 0xf84            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBulletShouldExpireTime; // 0xf88            
            uint8_t _pad0f8c[0x8]; // 0xf8c
            float m_flMaxHookTravelTime; // 0xf94            
            float m_flLastUppercutRestoreTime; // 0xf98            
            uint8_t _pad0f9c[0x504];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Hook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Hook) == 0x14a0);
    };
};
