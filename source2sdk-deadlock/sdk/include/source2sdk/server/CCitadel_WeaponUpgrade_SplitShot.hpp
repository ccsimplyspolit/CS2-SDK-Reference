#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"
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
        // Size: 0x1300
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSplitShotActive"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_SplitShot : public source2sdk::server::CCitadel_Item
        {
        public:
            source2sdk::client::ShotID_t m_nLastShotID; // 0xf78            
            source2sdk::client::ShotID_t m_nLastHitShotID; // 0xf7c            
            std::int32_t m_nWpnBatchCount; // 0xf80            
            uint8_t _pad0f84[0x6c]; // 0xf84
            source2sdk::client::ShotID_t m_nLastBulletHitShotID; // 0xff0            
            std::int32_t m_nLastBulletHitCount; // 0xff4            
            // m_eLastBulletHitEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_eLastBulletHitEnt;
            char m_eLastBulletHitEnt[0x4]; // 0xff8            
            // metadata: MNetworkEnable
            bool m_bSplitShotActive; // 0xffc            
            uint8_t _pad0ffd[0x303];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SplitShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_SplitShot) == 0x1300);
    };
};
