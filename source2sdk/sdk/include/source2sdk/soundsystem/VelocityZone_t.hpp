#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct VelocityZone_t
        {
        public:
            std::uint8_t nMaxVel; // 0x0            
            std::uint8_t nNextSelection; // 0x1            
            std::uint8_t nNumSamples; // 0x2            
            uint8_t _pad0003[0x1]; // 0x3
            std::uint32_t pSamples[4]; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::VelocityZone_t, nMaxVel) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::VelocityZone_t, nNextSelection) == 0x1);
        static_assert(offsetof(source2sdk::soundsystem::VelocityZone_t, nNumSamples) == 0x2);
        static_assert(offsetof(source2sdk::soundsystem::VelocityZone_t, pSamples) == 0x4);
        
        static_assert(sizeof(source2sdk::soundsystem::VelocityZone_t) == 0x14);
    };
};
