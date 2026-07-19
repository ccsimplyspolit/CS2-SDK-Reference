#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelEnergyTower : public source2sdk::server::CServerOnlyEntity
        {
        public:
            bool m_bEnabled; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            float m_flDamage; // 0x4a4            
            float m_flRadius; // 0x4a8            
            uint8_t _pad04ac[0xc];
            
            // Datamap fields:
            //  InputEnable; // 0x0
            //  InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelEnergyTower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelEnergyTower) == 0x4b8);
    };
};
