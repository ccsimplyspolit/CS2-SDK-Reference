#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
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
        struct CCitadelBaseAbility;
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
        // Size: 0xc30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flUpFactor"
        // static metadata: MNetworkVarNames "float m_flBounceVelocity"
        // static metadata: MNetworkVarNames "GameTime_t m_tDeactivationTime"
        #pragma pack(push, 1)
        class CCitadel_Bounce_Pad : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xbf0            
            // metadata: MNetworkEnable
            float m_flUpFactor; // 0xbf4            
            // metadata: MNetworkEnable
            float m_flBounceVelocity; // 0xbf8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDeactivationTime; // 0xbfc            
            bool m_bDeactivated; // 0xc00            
            uint8_t _pad0c01[0x3]; // 0xc01
            float m_flBarrelBounceVelocity; // 0xc04            
            float m_flBarrelUpFactor; // 0xc08            
            bool m_bSpeedOnLand; // 0xc0c            
            uint8_t _pad0c0d[0x3]; // 0xc0d
            // m_vBouncedPlayerBefore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vBouncedPlayerBefore;
            char m_vBouncedPlayerBefore[0x18]; // 0xc10            
            uint8_t _pad0c28[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Bounce_Pad) == 0xc30);
    };
};
