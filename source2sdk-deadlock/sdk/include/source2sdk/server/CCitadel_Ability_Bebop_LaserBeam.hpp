#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityBeam_t.hpp"
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
        // Size: 0x2748
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirCast"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bebop_LaserBeam : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x800]; // 0xf70
            bool m_bZoomed; // 0x1770            
            // metadata: MNetworkEnable
            bool m_bAirCast; // 0x1771            
            uint8_t _pad1772[0x6]; // 0x1772
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam; // 0x1778            
            uint8_t _pad2738[0x4]; // 0x2738
            float m_flAngleBetweenTrace; // 0x273c            
            std::int32_t m_nTotalDamage; // 0x2740            
            source2sdk::entity2::GameTime_t m_flNextDamageTime; // 0x2744            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bebop_LaserBeam) == 0x2748);
    };
};
