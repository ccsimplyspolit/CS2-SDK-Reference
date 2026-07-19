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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvWindController : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::server::CEnvWindShared m_EnvWindShared; // 0x4a8            
            float m_fDirectionVariation; // 0x5d8            
            float m_fSpeedVariation; // 0x5dc            
            float m_fTurbulence; // 0x5e0            
            float m_fVolumeHalfExtentXY; // 0x5e4            
            float m_fVolumeHalfExtentZ; // 0x5e8            
            std::int32_t m_nVolumeResolutionXY; // 0x5ec            
            std::int32_t m_nVolumeResolutionZ; // 0x5f0            
            std::int32_t m_nClipmapLevels; // 0x5f4            
            bool m_bIsMaster; // 0x5f8            
            bool m_bFirstTime; // 0x5f9            
            uint8_t _pad05fa[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvWindController) == 0x600);
    };
};
