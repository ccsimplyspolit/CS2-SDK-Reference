#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShatterGlassEntityPoolState_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/shard_model_desc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x800
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CShatterGlassShardPhysics : public source2sdk::server::CBaseModelEntity
        {
        public:
            std::uint32_t m_hParentShard; // 0x770            
            uint8_t _pad0774[0x4]; // 0x774
            source2sdk::server::shard_model_desc_t m_ShardDesc; // 0x778            
            source2sdk::client::ShatterGlassEntityPoolState_t m_nPoolState; // 0x7f8            
            bool m_bTouchedByPlayer; // 0x7fc            
            uint8_t _pad07fd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CShatterGlassShardPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CShatterGlassShardPhysics) == 0x800);
    };
};
