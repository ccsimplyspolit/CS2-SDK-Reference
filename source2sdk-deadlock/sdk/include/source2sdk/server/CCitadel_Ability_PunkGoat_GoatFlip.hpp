#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PG_RisingRamState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1a00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "PG_RisingRamState m_eState"
        // static metadata: MNetworkVarNames "GameTime_t m_tStateStartTime"
        // static metadata: MNetworkVarNames "float m_flGoingUpTargetElevation"
        // static metadata: MNetworkVarNames "float m_flGoingUpStartElevation"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_GoatFlip : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0xa80]; // 0xf70
            // metadata: MNetworkEnable
            source2sdk::client::PG_RisingRamState m_eState; // 0x19f0            
            uint8_t _pad19f1[0x3]; // 0x19f1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tStateStartTime; // 0x19f4            
            // metadata: MNetworkEnable
            float m_flGoingUpTargetElevation; // 0x19f8            
            // metadata: MNetworkEnable
            float m_flGoingUpStartElevation; // 0x19fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_GoatFlip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_GoatFlip) == 0x1a00);
    };
};
