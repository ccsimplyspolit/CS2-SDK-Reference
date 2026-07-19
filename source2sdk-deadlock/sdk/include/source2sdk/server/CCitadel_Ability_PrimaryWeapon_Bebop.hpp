#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"

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
        // Size: 0x17b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
        // static metadata: MNetworkVarNames "bool m_bFiring"
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_Bebop : public source2sdk::server::CCitadel_Ability_PrimaryWeapon_BeamWeapon
        {
        public:
            uint8_t _pad1198[0x380]; // 0x1198
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartWindUpTime; // 0x1518            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartFiringTime; // 0x151c            
            // metadata: MNetworkEnable
            bool m_bFiring; // 0x1520            
            uint8_t _pad1521[0x297];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PrimaryWeapon_Bebop) == 0x17b8);
    };
};
