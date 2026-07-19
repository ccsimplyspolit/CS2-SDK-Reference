#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EconEntity.hpp"

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
        // Size: 0x16f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_EconWearable : public source2sdk::client::C_EconEntity
        {
        public:
            std::int32_t m_nForceSkin; // 0x16f0            
            bool m_bAlwaysAllow; // 0x16f4            
            uint8_t _pad16f5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconWearable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconWearable) == 0x16f8);
    };
};
