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
        // Size: 0x108
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CChoreo_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_eChoreoState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eChoreoState;
            char m_eChoreoState[0x18]; // 0xc0            
            // m_tChoreoTargetWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CTransform> m_tChoreoTargetWarp;
            char m_tChoreoTargetWarp[0x18]; // 0xd8            
            // m_tChoreoExitWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CTransform> m_tChoreoExitWarp;
            char m_tChoreoExitWarp[0x18]; // 0xf0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChoreo_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CChoreo_GraphController) == 0x108);
    };
};
