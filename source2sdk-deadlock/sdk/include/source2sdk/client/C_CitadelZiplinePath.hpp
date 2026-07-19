#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PathParticleRope.hpp"

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
        // Size: 0x708
        // Has VTable
        #pragma pack(push, 1)
        class C_CitadelZiplinePath : public source2sdk::client::C_PathParticleRope
        {
        public:
            std::int32_t m_iLaneNumber; // 0x700            
            bool m_bUseBaseLaneColor; // 0x704            
            uint8_t _pad0705[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelZiplinePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelZiplinePath) == 0x708);
    };
};
