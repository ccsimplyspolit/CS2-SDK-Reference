#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1b60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tTetherAttachTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tTetherBreakTime"
        // static metadata: MNetworkVarNames "bool m_bHasTetherTarget"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_PrimaryWeapon : public source2sdk::client::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad1430[0x718]; // 0x1430
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tTetherAttachTime; // 0x1b48            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tTetherBreakTime; // 0x1b4c            
            // metadata: MNetworkEnable
            bool m_bHasTetherTarget; // 0x1b50            
            uint8_t _pad1b51[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_PrimaryWeapon) == 0x1b60);
    };
};
