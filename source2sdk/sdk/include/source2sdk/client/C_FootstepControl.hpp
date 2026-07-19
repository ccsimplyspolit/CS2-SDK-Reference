#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Standard-layout class: false
        // Size: 0x10a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FootstepControl : public source2sdk::client::C_BaseTrigger
        {
        public:
            CUtlSymbolLarge m_source; // 0x1098            
            CUtlSymbolLarge m_destination; // 0x10a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FootstepControl because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FootstepControl) == 0x10a8);
    };
};
