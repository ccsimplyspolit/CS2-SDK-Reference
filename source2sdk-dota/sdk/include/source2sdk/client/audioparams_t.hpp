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
        // Size: 0x78
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct audioparams_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            VectorWS localSound[8]; // 0x8            
            std::int32_t soundscapeIndex; // 0x68            
            std::uint8_t localBits; // 0x6c            
            uint8_t _pad006d[0x3]; // 0x6d
            std::int32_t soundscapeEntityListIndex; // 0x70            
            std::uint32_t soundEventHash; // 0x74            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::audioparams_t, localSound) == 0x8);
        static_assert(offsetof(source2sdk::client::audioparams_t, soundscapeIndex) == 0x68);
        static_assert(offsetof(source2sdk::client::audioparams_t, localBits) == 0x6c);
        static_assert(offsetof(source2sdk::client::audioparams_t, soundscapeEntityListIndex) == 0x70);
        static_assert(offsetof(source2sdk::client::audioparams_t, soundEventHash) == 0x74);
        
        static_assert(sizeof(source2sdk::client::audioparams_t) == 0x78);
    };
};
