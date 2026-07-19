#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x1828
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tWallDeployFinishTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_ZombieWall : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x4]; // 0x11d8
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tWallDeployFinishTime; // 0x11dc            
            uint8_t _pad11e0[0x30]; // 0x11e0
            // m_vecHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitUnits;
            char m_vecHitUnits[0x18]; // 0x1210            
            uint8_t _pad1228[0x600];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_ZombieWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_ZombieWall) == 0x1828);
    };
};
