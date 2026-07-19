#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Nano_PredatoryStatue : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x58]; // 0xc0
            source2sdk::entity2::GameTime_t m_GameTimeEnabled; // 0x118            
            source2sdk::entity2::GameTime_t m_LastCatInAreaTime; // 0x11c            
            bool m_bIsAttacking; // 0x120            
            uint8_t _pad0121[0x3]; // 0x121
            std::int32_t m_iTargetID; // 0x124            
            uint8_t _pad0128[0x498];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatue because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Nano_PredatoryStatue) == 0x5c0);
    };
};
