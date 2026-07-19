#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModifierVariantType_t.hpp"

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
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct ModifierVariant_t
        {
        public:
            source2sdk::client::ModifierVariantType_t m_eType; // 0x0            
            uint8_t _pad0004[0x1c];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ModifierVariant_t, m_eType) == 0x0);
        
        static_assert(sizeof(source2sdk::client::ModifierVariant_t) == 0x20);
    };
};
