#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_EnvWindShared.hpp"

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
        // Size: 0x720
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EnvWindController : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::client::C_EnvWindShared m_EnvWindShared; // 0x600            
            float m_fDirectionVariation; // 0x6f8            
            float m_fSpeedVariation; // 0x6fc            
            float m_fTurbulence; // 0x700            
            float m_fVolumeHalfExtentXY; // 0x704            
            float m_fVolumeHalfExtentZ; // 0x708            
            std::int32_t m_nVolumeResolutionXY; // 0x70c            
            std::int32_t m_nVolumeResolutionZ; // 0x710            
            std::int32_t m_nClipmapLevels; // 0x714            
            bool m_bIsMaster; // 0x718            
            bool m_bFirstTime; // 0x719            
            uint8_t _pad071a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvWindController) == 0x720);
    };
};
