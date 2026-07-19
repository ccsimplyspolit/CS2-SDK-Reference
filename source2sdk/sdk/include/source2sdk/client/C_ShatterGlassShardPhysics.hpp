#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/shard_model_desc_t.hpp"

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
        // Size: 0x1038
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ShatterGlassShardPhysics : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x8]; // 0xfb0
            // metadata: MNotSaved
            source2sdk::client::shard_model_desc_t m_ShardDesc; // 0xfb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ShatterGlassShardPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ShatterGlassShardPhysics) == 0x1038);
    };
};
