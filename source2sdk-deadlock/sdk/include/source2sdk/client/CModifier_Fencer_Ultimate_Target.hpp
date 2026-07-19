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
        // Size: 0x468
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Fencer_Ultimate_Target : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x380]; // 0xc0
            Vector m_vDashDirection; // 0x440            
            uint8_t _pad044c[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Fencer_Ultimate_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Fencer_Ultimate_Target) == 0x468);
    };
};
