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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PhysBlockHeader_t
        {
        public:
            std::int32_t nSaved; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            std::uint64_t pWorldObject; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PhysBlockHeader_t, nSaved) == 0x0);
        static_assert(offsetof(source2sdk::client::PhysBlockHeader_t, pWorldObject) == 0x8);
        
        static_assert(sizeof(source2sdk::client::PhysBlockHeader_t) == 0x10);
    };
};
