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
        // Size: 0x10d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PostProcessingVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad1098[0x10]; // 0x1098
            // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
            char m_hPostSettings[0x8]; // 0x10a8            
            float m_flFadeDuration; // 0x10b0            
            float m_flMinLogExposure; // 0x10b4            
            float m_flMaxLogExposure; // 0x10b8            
            float m_flMinExposure; // 0x10bc            
            float m_flMaxExposure; // 0x10c0            
            float m_flExposureCompensation; // 0x10c4            
            float m_flExposureFadeSpeedUp; // 0x10c8            
            float m_flExposureFadeSpeedDown; // 0x10cc            
            float m_flTonemapEVSmoothingRange; // 0x10d0            
            bool m_bMaster; // 0x10d4            
            bool m_bExposureControl; // 0x10d5            
            uint8_t _pad10d6[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PostProcessingVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PostProcessingVolume) == 0x10d8);
    };
};
