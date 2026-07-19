#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"

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
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct MinimapOffsetDesc_t
        {
        public:
            source2sdk::client::Class_T eEntityClass; // 0x0            
            Vector2D vOffset2D; // 0x4            
            std::int32_t iLane; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::MinimapOffsetDesc_t, eEntityClass) == 0x0);
        static_assert(offsetof(source2sdk::client::MinimapOffsetDesc_t, vOffset2D) == 0x4);
        static_assert(offsetof(source2sdk::client::MinimapOffsetDesc_t, iLane) == 0xc);
        
        static_assert(sizeof(source2sdk::client::MinimapOffsetDesc_t) == 0x10);
    };
};
