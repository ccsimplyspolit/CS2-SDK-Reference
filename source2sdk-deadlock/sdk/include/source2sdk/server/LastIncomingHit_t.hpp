#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct LastIncomingHit_t
        {
        public:
            Vector vecDir; // 0x0            
            Vector vecBoneLocalPos; // 0xc            
            std::int32_t nHitboxBoneIndex; // 0x18            
            float flHitStrength; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::LastIncomingHit_t, vecDir) == 0x0);
        static_assert(offsetof(source2sdk::server::LastIncomingHit_t, vecBoneLocalPos) == 0xc);
        static_assert(offsetof(source2sdk::server::LastIncomingHit_t, nHitboxBoneIndex) == 0x18);
        static_assert(offsetof(source2sdk::server::LastIncomingHit_t, flHitStrength) == 0x1c);
        
        static_assert(sizeof(source2sdk::server::LastIncomingHit_t) == 0x20);
    };
};
