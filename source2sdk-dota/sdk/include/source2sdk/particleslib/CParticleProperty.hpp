#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CParticleProperty
        {
        public:
            uint8_t _pad0000[0x28];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::particleslib::CParticleProperty) == 0x28);
    };
};
