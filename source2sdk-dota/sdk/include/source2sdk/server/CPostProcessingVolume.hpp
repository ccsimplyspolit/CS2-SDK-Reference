#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x930
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPostProcessingVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08f0[0x10]; // 0x8f0
            // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
            char m_hPostSettings[0x8]; // 0x900            
            float m_flFadeDuration; // 0x908            
            float m_flMinLogExposure; // 0x90c            
            float m_flMaxLogExposure; // 0x910            
            float m_flMinExposure; // 0x914            
            float m_flMaxExposure; // 0x918            
            float m_flExposureCompensation; // 0x91c            
            float m_flExposureFadeSpeedUp; // 0x920            
            float m_flExposureFadeSpeedDown; // 0x924            
            float m_flTonemapEVSmoothingRange; // 0x928            
            bool m_bMaster; // 0x92c            
            bool m_bExposureControl; // 0x92d            
            uint8_t _pad092e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPostProcessingVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPostProcessingVolume) == 0x930);
    };
};
