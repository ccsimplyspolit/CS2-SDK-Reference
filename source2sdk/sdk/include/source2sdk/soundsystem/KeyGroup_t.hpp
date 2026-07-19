#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace soundsystem
    {
        struct VelocityZone_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct KeyGroup_t
        {
        public:
            std::uint8_t nCenterNote; // 0x0            
            std::uint8_t nMinNote; // 0x1            
            std::uint8_t nMaxNote; // 0x2            
            std::uint8_t nNumVelocityZones; // 0x3            
            uint8_t _pad0004[0x4]; // 0x4
            source2sdk::soundsystem::VelocityZone_t* pVelocityZones; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::KeyGroup_t, nCenterNote) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::KeyGroup_t, nMinNote) == 0x1);
        static_assert(offsetof(source2sdk::soundsystem::KeyGroup_t, nMaxNote) == 0x2);
        static_assert(offsetof(source2sdk::soundsystem::KeyGroup_t, nNumVelocityZones) == 0x3);
        static_assert(offsetof(source2sdk::soundsystem::KeyGroup_t, pVelocityZones) == 0x8);
        
        static_assert(sizeof(source2sdk::soundsystem::KeyGroup_t) == 0x10);
    };
};
