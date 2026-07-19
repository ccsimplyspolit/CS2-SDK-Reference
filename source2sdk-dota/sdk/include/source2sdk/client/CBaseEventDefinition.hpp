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
        // Size: 0x18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseEventDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            bool m_bMustBeOwned; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            std::uint32_t m_unDefaultEventPoints; // 0xc            
            std::uint32_t m_unEventPointsPerLevel; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBaseEventDefinition, m_bMustBeOwned) == 0x8);
        static_assert(offsetof(source2sdk::client::CBaseEventDefinition, m_unDefaultEventPoints) == 0xc);
        static_assert(offsetof(source2sdk::client::CBaseEventDefinition, m_unEventPointsPerLevel) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CBaseEventDefinition) == 0x18);
    };
};
