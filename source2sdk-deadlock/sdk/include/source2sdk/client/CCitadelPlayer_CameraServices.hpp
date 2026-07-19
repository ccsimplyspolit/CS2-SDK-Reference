#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_CameraServices.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_PostProcessingVolume;
    };
};

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
        // Size: 0x3a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPlayer_CameraServices : public source2sdk::client::CPlayer_CameraServices
        {
        public:
            // m_hPrevPostProcessingVolume has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PostProcessingVolume> m_hPrevPostProcessingVolume;
            char m_hPrevPostProcessingVolume[0x4]; // 0x3a0            
            uint8_t _pad03a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayer_CameraServices) == 0x3a8);
    };
};
