#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCSPlayerBase_CameraServices.hpp"
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
        // Size: 0x2b0
        // Has VTable
        #pragma pack(push, 1)
        class CCSObserver_CameraServices : public source2sdk::client::CCSPlayerBase_CameraServices
        {
        public:
            // m_hPrevPostProcessingVolume has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PostProcessingVolume> m_hPrevPostProcessingVolume;
            char m_hPrevPostProcessingVolume[0x4]; // 0x2a8            
            uint8_t _pad02ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSObserver_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSObserver_CameraServices) == 0x2b0);
    };
};
