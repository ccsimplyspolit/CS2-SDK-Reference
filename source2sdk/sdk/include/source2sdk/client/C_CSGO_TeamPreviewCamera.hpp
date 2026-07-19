#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSGO_MapPreviewCameraPath.hpp"

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
        // Size: 0x690
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        #pragma pack(push, 1)
        class C_CSGO_TeamPreviewCamera : public source2sdk::client::C_CSGO_MapPreviewCameraPath
        {
        public:
            std::int32_t m_nVariant; // 0x688            
            uint8_t _pad068c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_TeamPreviewCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_TeamPreviewCamera) == 0x690);
    };
};
