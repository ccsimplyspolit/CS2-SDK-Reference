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
        // Size: 0x10a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CBombTarget : public source2sdk::client::C_BaseTrigger
        {
        public:
            bool m_bBombPlantedHere; // 0x1098            
            uint8_t _pad1099[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBombTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBombTarget) == 0x10a0);
    };
};
