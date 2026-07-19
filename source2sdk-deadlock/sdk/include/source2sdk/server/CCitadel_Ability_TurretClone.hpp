#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
        // Size: 0x1490
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasTurretReady"
        // static metadata: MNetworkVarNames "int m_iCurrentSwapCount"
        // static metadata: MNetworkVarNames "GameTime_t m_flTurretExpireTime"
        // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
        #pragma pack(push, 1)
        class CCitadel_Ability_TurretClone : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x280]; // 0xf70
            // metadata: MNetworkEnable
            bool m_bHasTurretReady; // 0x11f0            
            uint8_t _pad11f1[0x3]; // 0x11f1
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentSwapCount; // 0x11f4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurretExpireTime; // 0x11f8            
            uint8_t _pad11fc[0x4]; // 0x11fc
            source2sdk::client::ShotID_t m_nLastBulletShotID; // 0x1200            
            // metadata: MNetworkEnable
            // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pActiveTurret;
            char m_pActiveTurret[0x4]; // 0x1204            
            source2sdk::client::ParticleIndex_t m_nTurretFXIndex; // 0x1208            
            uint8_t _pad120c[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_TurretClone) == 0x1490);
    };
};
