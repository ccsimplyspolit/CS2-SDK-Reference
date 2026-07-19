#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathParticleRope.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x590
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelZiplinePath : public source2sdk::server::CPathParticleRope
        {
        public:
            std::int32_t m_iLaneNumber; // 0x588            
            bool m_bUseBaseLaneColor; // 0x58c            
            uint8_t _pad058d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZiplinePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZiplinePath) == 0x590);
    };
};
