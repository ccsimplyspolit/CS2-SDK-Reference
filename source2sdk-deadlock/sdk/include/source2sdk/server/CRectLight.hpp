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
        // Size: 0xa70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bShowLight"
        #pragma pack(push, 1)
        class CRectLight : public source2sdk::server::CBarnLight
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bShowLight; // 0xa68            
            uint8_t _pad0a69[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRectLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRectLight) == 0xa70);
    };
};
