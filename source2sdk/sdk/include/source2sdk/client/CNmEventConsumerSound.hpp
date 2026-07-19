#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNmEventConsumer.hpp"

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
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmEventConsumerSound : public source2sdk::client::CNmEventConsumer
        {
        public:
            uint8_t _pad00b0[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CNmEventConsumerSound) == 0xb8);
    };
};
