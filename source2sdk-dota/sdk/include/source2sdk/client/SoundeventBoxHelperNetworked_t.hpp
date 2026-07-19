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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SoundeventBoxHelperNetworked_t
        {
        public:
            VectorWS vOrigin; // 0x0            
            QAngle qAngles; // 0xc            
            Vector vMins; // 0x18            
            Vector vMaxs; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SoundeventBoxHelperNetworked_t, vOrigin) == 0x0);
        static_assert(offsetof(source2sdk::client::SoundeventBoxHelperNetworked_t, qAngles) == 0xc);
        static_assert(offsetof(source2sdk::client::SoundeventBoxHelperNetworked_t, vMins) == 0x18);
        static_assert(offsetof(source2sdk::client::SoundeventBoxHelperNetworked_t, vMaxs) == 0x24);
        
        static_assert(sizeof(source2sdk::client::SoundeventBoxHelperNetworked_t) == 0x30);
    };
};
