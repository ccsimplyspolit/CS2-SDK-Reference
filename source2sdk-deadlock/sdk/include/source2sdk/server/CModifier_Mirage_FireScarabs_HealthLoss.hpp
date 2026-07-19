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
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Mirage_FireScarabs_HealthLoss : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bCanProc; // 0xd0            
            uint8_t _pad00d1[0x187];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_FireScarabs_HealthLoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Mirage_FireScarabs_HealthLoss) == 0x258);
    };
};
