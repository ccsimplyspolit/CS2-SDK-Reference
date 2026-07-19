#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvVolumetricFogVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bActive; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            Vector m_vBoxMins; // 0x5f4            
            Vector m_vBoxMaxs; // 0x600            
            bool m_bStartDisabled; // 0x60c            
            bool m_bIndirectUseLPVs; // 0x60d            
            uint8_t _pad060e[0x2]; // 0x60e
            float m_flStrength; // 0x610            
            std::int32_t m_nFalloffShape; // 0x614            
            float m_flFalloffExponent; // 0x618            
            float m_flHeightFogDepth; // 0x61c            
            float m_fHeightFogEdgeWidth; // 0x620            
            float m_fIndirectLightStrength; // 0x624            
            float m_fSunLightStrength; // 0x628            
            float m_fNoiseStrength; // 0x62c            
            Color m_TintColor; // 0x630            
            bool m_bOverrideTintColor; // 0x634            
            bool m_bOverrideIndirectLightStrength; // 0x635            
            bool m_bOverrideSunLightStrength; // 0x636            
            bool m_bOverrideNoiseStrength; // 0x637            
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogVolume) == 0x638);
    };
};
