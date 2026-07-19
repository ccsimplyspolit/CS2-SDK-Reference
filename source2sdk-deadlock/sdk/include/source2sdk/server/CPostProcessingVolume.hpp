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
        // Size: 0x920
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
        // static metadata: MNetworkVarNames "float m_flFadeDuration"
        // static metadata: MNetworkVarNames "float m_flMinLogExposure"
        // static metadata: MNetworkVarNames "float m_flMaxLogExposure"
        // static metadata: MNetworkVarNames "float m_flMinExposure"
        // static metadata: MNetworkVarNames "float m_flMaxExposure"
        // static metadata: MNetworkVarNames "float m_flExposureCompensation"
        // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedUp"
        // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedDown"
        // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
        // static metadata: MNetworkVarNames "bool m_bMaster"
        // static metadata: MNetworkVarNames "bool m_bExposureControl"
        #pragma pack(push, 1)
        class CPostProcessingVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e0[0x10]; // 0x8e0
            // metadata: MNetworkEnable
            // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
            char m_hPostSettings[0x8]; // 0x8f0            
            // metadata: MNetworkEnable
            float m_flFadeDuration; // 0x8f8            
            // metadata: MNetworkEnable
            float m_flMinLogExposure; // 0x8fc            
            // metadata: MNetworkEnable
            float m_flMaxLogExposure; // 0x900            
            // metadata: MNetworkEnable
            float m_flMinExposure; // 0x904            
            // metadata: MNetworkEnable
            float m_flMaxExposure; // 0x908            
            // metadata: MNetworkEnable
            float m_flExposureCompensation; // 0x90c            
            // metadata: MNetworkEnable
            float m_flExposureFadeSpeedUp; // 0x910            
            // metadata: MNetworkEnable
            float m_flExposureFadeSpeedDown; // 0x914            
            // metadata: MNetworkEnable
            float m_flTonemapEVSmoothingRange; // 0x918            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0x91c            
            // metadata: MNetworkEnable
            bool m_bExposureControl; // 0x91d            
            uint8_t _pad091e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPostProcessingVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPostProcessingVolume) == 0x920);
    };
};
