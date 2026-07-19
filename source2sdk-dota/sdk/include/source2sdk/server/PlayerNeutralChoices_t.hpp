#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x1b0
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        #pragma pack(push, 1)
        struct PlayerNeutralChoices_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::AbilityID_t m_vecTrinketChoices[45]; // 0x8            
            source2sdk::client::AbilityID_t m_vecEnhancementChoices[45]; // 0xbc            
            std::int32_t m_vecSelectedTrinkets[5]; // 0x170            
            std::int32_t m_vecSelectedEnhancements[5]; // 0x184            
            std::int32_t m_vecTimesCrafted[5]; // 0x198            
            uint8_t _pad01ac[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayerNeutralChoices_t, m_vecTrinketChoices) == 0x8);
        static_assert(offsetof(source2sdk::server::PlayerNeutralChoices_t, m_vecEnhancementChoices) == 0xbc);
        static_assert(offsetof(source2sdk::server::PlayerNeutralChoices_t, m_vecSelectedTrinkets) == 0x170);
        static_assert(offsetof(source2sdk::server::PlayerNeutralChoices_t, m_vecSelectedEnhancements) == 0x184);
        static_assert(offsetof(source2sdk::server::PlayerNeutralChoices_t, m_vecTimesCrafted) == 0x198);
        
        static_assert(sizeof(source2sdk::server::PlayerNeutralChoices_t) == 0x1b0);
    };
};
