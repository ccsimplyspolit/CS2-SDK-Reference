#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"

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
        // Size: 0xc20
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelDruidPlantShield : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            bool m_bSolid; // 0xbf0            
            uint8_t _pad0bf1[0x3]; // 0xbf1
            VectorWS m_vStartPos; // 0xbf4            
            VectorWS m_vEndPos; // 0xc00            
            source2sdk::entity2::GameTime_t m_flStartGrowTime; // 0xc0c            
            source2sdk::entity2::GameTime_t m_flEndGrowTime; // 0xc10            
            uint8_t _pad0c14[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelDruidPlantShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelDruidPlantShield) == 0xc20);
    };
};
