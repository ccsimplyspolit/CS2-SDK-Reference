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
        // Size: 0xd8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_GuidedArrow_OwlModel_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_flRoll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flRoll;
            char m_flRoll[0x18]; // 0x90            
            // m_flPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flPitch;
            char m_flPitch[0x18]; // 0xa8            
            // m_bFast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bFast;
            char m_bFast[0x18]; // 0xc0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_GuidedArrow_OwlModel_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_GuidedArrow_OwlModel_GraphController) == 0xd8);
    };
};
