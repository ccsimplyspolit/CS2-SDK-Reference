#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Nano_PredatoryStatue : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x2c]; // 0xd0
            source2sdk::entity2::GameTime_t m_GameTimeEnabled; // 0xfc            
            source2sdk::entity2::GameTime_t m_LastCatInAreaTime; // 0x100            
            bool m_bIsAttacking; // 0x104            
            uint8_t _pad0105[0x3]; // 0x105
            std::int32_t m_iTargetID; // 0x108            
            uint8_t _pad010c[0x494];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatue because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Nano_PredatoryStatue) == 0x5a0);
    };
};
