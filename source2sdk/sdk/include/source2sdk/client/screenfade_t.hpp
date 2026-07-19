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
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct screenfade_t
        {
        public:
            float Speed; // 0x0            
            float End; // 0x4            
            float Reset; // 0x8            
            Color m_Color; // 0xc            
            std::int32_t Flags; // 0x10            
            uint8_t _pad0014[0x14];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::screenfade_t, Speed) == 0x0);
        static_assert(offsetof(source2sdk::client::screenfade_t, End) == 0x4);
        static_assert(offsetof(source2sdk::client::screenfade_t, Reset) == 0x8);
        static_assert(offsetof(source2sdk::client::screenfade_t, m_Color) == 0xc);
        static_assert(offsetof(source2sdk::client::screenfade_t, Flags) == 0x10);
        
        static_assert(sizeof(source2sdk::client::screenfade_t) == 0x28);
    };
};
