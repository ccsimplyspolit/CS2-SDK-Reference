#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0xc0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_PortraitWorldUnit_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_BaseState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_BaseState;
            char m_BaseState[0x18]; // 0x90            
            // m_ShopState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_ShopState;
            char m_ShopState[0x18]; // 0xa8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit_GraphController) == 0xc0);
    };
};
