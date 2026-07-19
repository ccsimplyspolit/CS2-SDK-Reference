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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        #pragma pack(push, 1)
        class CEconItemAttribute
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::uint16_t m_iAttributeDefinitionIndex; // 0x30            
            uint8_t _pad0032[0x2]; // 0x32
            float m_flValue; // 0x34            
            float m_flInitialValue; // 0x38            
            std::int32_t m_nRefundableCurrency; // 0x3c            
            bool m_bSetBonus; // 0x40            
            uint8_t _pad0041[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CEconItemAttribute, m_iAttributeDefinitionIndex) == 0x30);
        static_assert(offsetof(source2sdk::client::CEconItemAttribute, m_flValue) == 0x34);
        static_assert(offsetof(source2sdk::client::CEconItemAttribute, m_flInitialValue) == 0x38);
        static_assert(offsetof(source2sdk::client::CEconItemAttribute, m_nRefundableCurrency) == 0x3c);
        static_assert(offsetof(source2sdk::client::CEconItemAttribute, m_bSetBonus) == 0x40);
        
        static_assert(sizeof(source2sdk::client::CEconItemAttribute) == 0x48);
    };
};
