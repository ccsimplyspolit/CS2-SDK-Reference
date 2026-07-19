#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

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
        // Size: 0xcb0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_vecViewOffset"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        #pragma pack(push, 1)
        class CCitadelAnimatingModelEntity : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca8[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadelAnimatingModelEntity) == 0xcb0);
    };
};
