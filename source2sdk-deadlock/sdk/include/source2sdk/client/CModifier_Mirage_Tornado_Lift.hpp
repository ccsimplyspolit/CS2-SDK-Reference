#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x1d8
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Mirage_Tornado_Lift : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x100]; // 0xc0
            Vector m_vecFloatDest; // 0x1c0            
            Vector m_vecStartingPos; // 0x1cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_Tornado_Lift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Mirage_Tornado_Lift) == 0x1d8);
    };
};
