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
        // Size: 0xab8
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
        class C_PostProcessingVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0a78[0x10]; // 0xa78
            // metadata: MNetworkEnable
            // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
            char m_hPostSettings[0x8]; // 0xa88            
            // metadata: MNetworkEnable
            float m_flFadeDuration; // 0xa90            
            // metadata: MNetworkEnable
            float m_flMinLogExposure; // 0xa94            
            // metadata: MNetworkEnable
            float m_flMaxLogExposure; // 0xa98            
            // metadata: MNetworkEnable
            float m_flMinExposure; // 0xa9c            
            // metadata: MNetworkEnable
            float m_flMaxExposure; // 0xaa0            
            // metadata: MNetworkEnable
            float m_flExposureCompensation; // 0xaa4            
            // metadata: MNetworkEnable
            float m_flExposureFadeSpeedUp; // 0xaa8            
            // metadata: MNetworkEnable
            float m_flExposureFadeSpeedDown; // 0xaac            
            // metadata: MNetworkEnable
            float m_flTonemapEVSmoothingRange; // 0xab0            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0xab4            
            // metadata: MNetworkEnable
            bool m_bExposureControl; // 0xab5            
            uint8_t _pad0ab6[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PostProcessingVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PostProcessingVolume) == 0xab8);
    };
};
