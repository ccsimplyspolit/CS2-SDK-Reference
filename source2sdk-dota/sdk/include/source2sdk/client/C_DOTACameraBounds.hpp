#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTACameraBounds : public source2sdk::client::C_BaseEntity
        {
        public:
            Vector m_vecBoundsMin; // 0x5f0            
            Vector m_vecBoundsMax; // 0x5fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTACameraBounds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTACameraBounds) == 0x608);
    };
};
