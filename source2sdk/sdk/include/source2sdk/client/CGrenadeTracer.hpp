#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/GrenadeType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1450
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGrenadeTracer : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x18]; // 0xfb0
            float m_flTracerDuration; // 0xfc8            
            source2sdk::client::GrenadeType_t m_nType; // 0xfcc            
            uint8_t _pad0fd0[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGrenadeTracer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CGrenadeTracer) == 0x1450);
    };
};
