#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
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
        // Size: 0x1af8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
        // static metadata: MNetworkVarNames "bool m_bFiring"
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_Bebop : public source2sdk::client::CCitadel_Ability_PrimaryWeapon_BeamWeapon
        {
        public:
            uint8_t _pad1430[0x428]; // 0x1430
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartWindUpTime; // 0x1858            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartFiringTime; // 0x185c            
            // metadata: MNetworkEnable
            bool m_bFiring; // 0x1860            
            uint8_t _pad1861[0x297];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon_Bebop) == 0x1af8);
    };
};
