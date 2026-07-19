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
        // Size: 0x648
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvVolumetricFogVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bActive; // 0x600            
            uint8_t _pad0601[0x3]; // 0x601
            Vector m_vBoxMins; // 0x604            
            Vector m_vBoxMaxs; // 0x610            
            bool m_bStartDisabled; // 0x61c            
            bool m_bIndirectUseLPVs; // 0x61d            
            uint8_t _pad061e[0x2]; // 0x61e
            float m_flStrength; // 0x620            
            std::int32_t m_nFalloffShape; // 0x624            
            float m_flFalloffExponent; // 0x628            
            float m_flHeightFogDepth; // 0x62c            
            float m_fHeightFogEdgeWidth; // 0x630            
            float m_fIndirectLightStrength; // 0x634            
            float m_fSunLightStrength; // 0x638            
            float m_fNoiseStrength; // 0x63c            
            Color m_TintColor; // 0x640            
            bool m_bOverrideTintColor; // 0x644            
            bool m_bOverrideIndirectLightStrength; // 0x645            
            bool m_bOverrideSunLightStrength; // 0x646            
            bool m_bOverrideNoiseStrength; // 0x647            
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogVolume) == 0x648);
    };
};
