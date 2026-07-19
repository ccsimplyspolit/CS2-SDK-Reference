#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/FuncRotatorRotationSummaryFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FuncRotatorRotationSummary_t
        {
        public:
            source2sdk::entity2::GameTick_t nTick; // 0x0            
            source2sdk::server::FuncRotatorRotationSummaryFlags_t nFlags; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::FuncRotatorRotationSummary_t, nTick) == 0x0);
        static_assert(offsetof(source2sdk::server::FuncRotatorRotationSummary_t, nFlags) == 0x4);
        
        static_assert(sizeof(source2sdk::server::FuncRotatorRotationSummary_t) == 0x8);
    };
};
