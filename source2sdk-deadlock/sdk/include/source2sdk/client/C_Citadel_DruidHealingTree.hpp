#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"

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
        // Size: 0xcf8
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_DruidHealingTree : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0cb0[0x20]; // 0xcb0
            CUtlString m_strFruitModelName; // 0xcd0            
            VectorWS m_vStartPos; // 0xcd8            
            VectorWS m_vEndPos; // 0xce4            
            float m_flGrowDuration; // 0xcf0            
            uint8_t _pad0cf4[0x4];
            
            // Datamap fields:
            // CHandle< CBaseEntity > ability; // 0x7fffffff
            // CHandle< CBaseEntity > caster; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_DruidHealingTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_DruidHealingTree) == 0xcf8);
    };
};
