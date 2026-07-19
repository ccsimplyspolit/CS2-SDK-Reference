#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct EventBugBug_t;
    };
};

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
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventBugBugComplete_t
        {
        public:
            source2sdk::client::EventBugBug_t* m_pPayload; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventBugBugComplete_t, m_pPayload) == 0x0);
        
        static_assert(sizeof(source2sdk::client::EventBugBugComplete_t) == 0x8);
    };
};
