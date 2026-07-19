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
        // Size: 0x710
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EnvWindController : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::client::C_EnvWindShared m_EnvWindShared; // 0x5f0            
            float m_fDirectionVariation; // 0x6e8            
            float m_fSpeedVariation; // 0x6ec            
            float m_fTurbulence; // 0x6f0            
            float m_fVolumeHalfExtentXY; // 0x6f4            
            float m_fVolumeHalfExtentZ; // 0x6f8            
            std::int32_t m_nVolumeResolutionXY; // 0x6fc            
            std::int32_t m_nVolumeResolutionZ; // 0x700            
            std::int32_t m_nClipmapLevels; // 0x704            
            bool m_bIsMaster; // 0x708            
            bool m_bFirstTime; // 0x709            
            uint8_t _pad070a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvWindController) == 0x710);
    };
};
