#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e8
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Mirage_Tornado_Lift : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x100]; // 0xd0
            Vector m_vecFloatDest; // 0x1d0            
            Vector m_vecStartingPos; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_Tornado_Lift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Mirage_Tornado_Lift) == 0x1e8);
    };
};
