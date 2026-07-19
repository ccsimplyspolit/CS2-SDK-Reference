#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IPhysicsBodyList.hpp"

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace vphysics2
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class IPhysAggregateInstance : public source2sdk::client::IPhysicsBodyList
        {
        public:
            void* m_pSkeleton; // 0x8            
            bool m_bIsAxisAligned; // 0x10            
            uint8_t _pad0011[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in IPhysAggregateInstance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::vphysics2::IPhysAggregateInstance) == 0x18);
    };
};
