#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EModifierValue.hpp"

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
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HeroPurchaseBonus_t
        {
        public:
            std::int32_t m_nTier; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString m_strValue; // 0x8            
            source2sdk::client::EModifierValue m_ValueType; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HeroPurchaseBonus_t, m_nTier) == 0x0);
        static_assert(offsetof(source2sdk::client::HeroPurchaseBonus_t, m_strValue) == 0x8);
        static_assert(offsetof(source2sdk::client::HeroPurchaseBonus_t, m_ValueType) == 0x10);
        
        static_assert(sizeof(source2sdk::client::HeroPurchaseBonus_t) == 0x18);
    };
};
