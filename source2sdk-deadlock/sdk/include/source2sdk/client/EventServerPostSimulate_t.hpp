#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EventSimulate_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x38
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventServerPostSimulate_t : public source2sdk::client::EventSimulate_t
        {
        public:
            bool m_bLastTickBeforeClientUpdate; // 0x30            
            uint8_t _pad0031[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in EventServerPostSimulate_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::EventServerPostSimulate_t) == 0x38);
    };
};
