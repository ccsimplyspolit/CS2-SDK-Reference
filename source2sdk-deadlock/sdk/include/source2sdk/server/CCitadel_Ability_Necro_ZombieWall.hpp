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
        // Size: 0x15c0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tWallDeployFinishTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_ZombieWall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x4]; // 0xf70
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tWallDeployFinishTime; // 0xf74            
            uint8_t _pad0f78[0x30]; // 0xf78
            // m_vecHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitUnits;
            char m_vecHitUnits[0x18]; // 0xfa8            
            uint8_t _pad0fc0[0x600];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_ZombieWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_ZombieWall) == 0x15c0);
    };
};
