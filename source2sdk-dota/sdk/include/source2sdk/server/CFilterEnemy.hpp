#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterEnemy : public source2sdk::server::CBaseFilter
        {
        public:
            CUtlSymbolLarge m_iszEnemyName; // 0x4d0            
            float m_flRadius; // 0x4d8            
            float m_flOuterRadius; // 0x4dc            
            std::int32_t m_nMaxSquadmatesPerEnemy; // 0x4e0            
            uint8_t _pad04e4[0x4]; // 0x4e4
            CUtlSymbolLarge m_iszPlayerName; // 0x4e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterEnemy) == 0x4f0);
    };
};
