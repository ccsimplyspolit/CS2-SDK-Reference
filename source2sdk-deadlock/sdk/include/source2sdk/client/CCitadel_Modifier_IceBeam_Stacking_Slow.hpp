#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"

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
        // Size: 0x458
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_IceBeam_Stacking_Slow : public source2sdk::client::CCitadel_Modifier_Base_Buildup
        {
        public:
            uint8_t _pad00d0[0x380]; // 0xd0
            float m_flCurrBuildup; // 0x450            
            uint8_t _pad0454[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_IceBeam_Stacking_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_IceBeam_Stacking_Slow) == 0x458);
    };
};
