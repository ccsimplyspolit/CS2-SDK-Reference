#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x38
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct screenshake_t
        {
        public:
            source2sdk::entity2::GameTime_t endtime; // 0x0            
            float duration; // 0x4            
            float amplitude; // 0x8            
            float frequency; // 0xc            
            source2sdk::entity2::GameTime_t nextShake; // 0x10            
            Vector offset; // 0x14            
            float angle; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            Vector direction; // 0x28            
            std::uint8_t nShakeType; // 0x34            
            uint8_t _pad0035[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::screenshake_t, endtime) == 0x0);
        static_assert(offsetof(source2sdk::client::screenshake_t, duration) == 0x4);
        static_assert(offsetof(source2sdk::client::screenshake_t, amplitude) == 0x8);
        static_assert(offsetof(source2sdk::client::screenshake_t, frequency) == 0xc);
        static_assert(offsetof(source2sdk::client::screenshake_t, nextShake) == 0x10);
        static_assert(offsetof(source2sdk::client::screenshake_t, offset) == 0x14);
        static_assert(offsetof(source2sdk::client::screenshake_t, angle) == 0x20);
        static_assert(offsetof(source2sdk::client::screenshake_t, direction) == 0x28);
        static_assert(offsetof(source2sdk::client::screenshake_t, nShakeType) == 0x34);
        
        static_assert(sizeof(source2sdk::client::screenshake_t) == 0x38);
    };
};
