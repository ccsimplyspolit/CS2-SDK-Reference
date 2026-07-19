#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CEnvWindShared.hpp"

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
        // Size: 0x5f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CEnvWindShared m_EnvWindShared"
        // static metadata: MNetworkVarNames "float m_fDirectionVariation"
        // static metadata: MNetworkVarNames "float m_fSpeedVariation"
        // static metadata: MNetworkVarNames "float m_fTurbulence"
        // static metadata: MNetworkVarNames "float m_fVolumeHalfExtentXY"
        // static metadata: MNetworkVarNames "float m_fVolumeHalfExtentZ"
        // static metadata: MNetworkVarNames "int m_nVolumeResolutionXY"
        // static metadata: MNetworkVarNames "int m_nVolumeResolutionZ"
        // static metadata: MNetworkVarNames "int m_nClipmapLevels"
        // static metadata: MNetworkVarNames "bool m_bIsMaster"
        #pragma pack(push, 1)
        class CEnvWindController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CEnvWindShared m_EnvWindShared; // 0x4a0            
            // metadata: MNetworkEnable
            float m_fDirectionVariation; // 0x5d0            
            // metadata: MNetworkEnable
            float m_fSpeedVariation; // 0x5d4            
            // metadata: MNetworkEnable
            float m_fTurbulence; // 0x5d8            
            // metadata: MNetworkEnable
            float m_fVolumeHalfExtentXY; // 0x5dc            
            // metadata: MNetworkEnable
            float m_fVolumeHalfExtentZ; // 0x5e0            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionXY; // 0x5e4            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionZ; // 0x5e8            
            // metadata: MNetworkEnable
            std::int32_t m_nClipmapLevels; // 0x5ec            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x5f0            
            bool m_bFirstTime; // 0x5f1            
            uint8_t _pad05f2[0x6];
            
            // Datamap fields:
            // void CEnvWindControllerWindThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvWindController) == 0x5f8);
    };
};
