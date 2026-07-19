#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0xa8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkMotor_Legacy_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_tNavLinkTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CTransform> m_tNavLinkTarget;
            char m_tNavLinkTarget[0x18]; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMotor_Legacy_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_Legacy_GraphController) == 0xa8);
    };
};
