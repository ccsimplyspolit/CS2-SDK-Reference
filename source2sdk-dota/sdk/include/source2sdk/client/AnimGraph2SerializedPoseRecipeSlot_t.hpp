#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        #pragma pack(push, 1)
        struct AnimGraph2SerializedPoseRecipeSlot_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNotSaved
            CUtlBinaryBlock m_topology; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AnimGraph2SerializedPoseRecipeSlot_t, m_topology) == 0x30);
        
        static_assert(sizeof(source2sdk::client::AnimGraph2SerializedPoseRecipeSlot_t) == 0x40);
    };
};
