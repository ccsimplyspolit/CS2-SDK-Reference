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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct BonusUpgrade_t
        {
        public:
            float m_flValue; // 0x0            
            source2sdk::client::EModifierValue m_eValueType; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::BonusUpgrade_t, m_flValue) == 0x0);
        static_assert(offsetof(source2sdk::client::BonusUpgrade_t, m_eValueType) == 0x4);
        
        static_assert(sizeof(source2sdk::client::BonusUpgrade_t) == 0x8);
    };
};
