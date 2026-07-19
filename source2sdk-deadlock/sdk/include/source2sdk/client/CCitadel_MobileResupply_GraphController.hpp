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
        // Size: 0xe0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_MobileResupply_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_flDrainScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flDrainScale;
            char m_flDrainScale[0x28]; // 0x90            
            // m_bStartDrain has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bStartDrain;
            char m_bStartDrain[0x28]; // 0xb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_MobileResupply_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_MobileResupply_GraphController) == 0xe0);
    };
};
