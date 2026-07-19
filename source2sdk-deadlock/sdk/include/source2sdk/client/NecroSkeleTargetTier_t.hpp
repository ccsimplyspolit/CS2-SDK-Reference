#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/NecroSkeleTargetCategory_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NecroSkeleTargetTier_t
        {
        public:
            source2sdk::client::NecroSkeleTargetCategory_t m_eCategory; // 0x0            
            float m_flRange; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NecroSkeleTargetTier_t, m_eCategory) == 0x0);
        static_assert(offsetof(source2sdk::client::NecroSkeleTargetTier_t, m_flRange) == 0x4);
        
        static_assert(sizeof(source2sdk::client::NecroSkeleTargetTier_t) == 0x8);
    };
};
