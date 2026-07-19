#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimationLayer.hpp"
#include "source2sdk/client/C_BaseAnimatingController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x670
        // Has VTable
        #pragma pack(push, 1)
        class C_BaseAnimatingOverlayController : public source2sdk::client::C_BaseAnimatingController
        {
        public:
            // m_AnimOverlay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CAnimationLayer> m_AnimOverlay;
            char m_AnimOverlay[0x68]; // 0x5e8            
            uint8_t _pad0650[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseAnimatingOverlayController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseAnimatingOverlayController) == 0x670);
    };
};
