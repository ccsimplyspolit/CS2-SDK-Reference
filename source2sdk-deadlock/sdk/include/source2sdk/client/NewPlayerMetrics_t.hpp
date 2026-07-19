#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NewPlayerMetrics_t
        {
        public:
            CUtlString m_strSkillTierName; // 0x0            
            std::int32_t m_NetWorth; // 0x8            
            std::int32_t m_DamageTaken; // 0xc            
            std::int32_t m_BossDamage; // 0x10            
            std::int32_t m_PlayerDamage; // 0x14            
            std::int32_t m_LastHits; // 0x18            
            std::int32_t m_OrbsSecured; // 0x1c            
            std::int32_t m_OrbsDenied; // 0x20            
            std::int32_t m_AbilitiesUpgraded; // 0x24            
            std::int32_t m_ModsPurchased; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_strSkillTierName) == 0x0);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_NetWorth) == 0x8);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_DamageTaken) == 0xc);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_BossDamage) == 0x10);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_PlayerDamage) == 0x14);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_LastHits) == 0x18);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_OrbsSecured) == 0x1c);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_OrbsDenied) == 0x20);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_AbilitiesUpgraded) == 0x24);
        static_assert(offsetof(source2sdk::client::NewPlayerMetrics_t, m_ModsPurchased) == 0x28);
        
        static_assert(sizeof(source2sdk::client::NewPlayerMetrics_t) == 0x30);
    };
};
