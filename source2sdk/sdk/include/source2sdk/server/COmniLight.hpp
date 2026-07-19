#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBarnLight.hpp"

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
        // Size: 0xa68
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class COmniLight : public source2sdk::server::CBarnLight
        {
        public:
            float m_flInnerAngle; // 0xa58            
            float m_flOuterAngle; // 0xa5c            
            bool m_bShowLight; // 0xa60            
            uint8_t _pad0a61[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in COmniLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::COmniLight) == 0xa68);
    };
};
