#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"

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
        // Size: 0xbb0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PostProcessingVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0b70[0x10]; // 0xb70
            // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
            char m_hPostSettings[0x8]; // 0xb80            
            float m_flFadeDuration; // 0xb88            
            float m_flMinLogExposure; // 0xb8c            
            float m_flMaxLogExposure; // 0xb90            
            float m_flMinExposure; // 0xb94            
            float m_flMaxExposure; // 0xb98            
            float m_flExposureCompensation; // 0xb9c            
            float m_flExposureFadeSpeedUp; // 0xba0            
            float m_flExposureFadeSpeedDown; // 0xba4            
            float m_flTonemapEVSmoothingRange; // 0xba8            
            bool m_bMaster; // 0xbac            
            bool m_bExposureControl; // 0xbad            
            uint8_t _pad0bae[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PostProcessingVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PostProcessingVolume) == 0xbb0);
    };
};
