#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1408
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Magician_BigBolt : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x488]; // 0xf70
            source2sdk::entity2::GameTime_t m_flNextShootTime; // 0x13f8            
            std::int32_t m_iBoltsFired; // 0x13fc            
            std::int32_t m_iRemainingBolts; // 0x1400            
            bool m_bPreppingShoot; // 0x1404            
            uint8_t _pad1405[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Magician_BigBolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Magician_BigBolt) == 0x1408);
    };
};
