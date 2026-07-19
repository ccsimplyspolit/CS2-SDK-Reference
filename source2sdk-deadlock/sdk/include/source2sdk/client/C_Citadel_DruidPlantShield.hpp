#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
        // Size: 0xcd8
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_DruidPlantShield : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            bool m_bSolid; // 0xcb0            
            uint8_t _pad0cb1[0x3]; // 0xcb1
            VectorWS m_vStartPos; // 0xcb4            
            VectorWS m_vEndPos; // 0xcc0            
            source2sdk::entity2::GameTime_t m_flStartGrowTime; // 0xccc            
            source2sdk::entity2::GameTime_t m_flEndGrowTime; // 0xcd0            
            uint8_t _pad0cd4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_DruidPlantShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_DruidPlantShield) == 0xcd8);
    };
};
