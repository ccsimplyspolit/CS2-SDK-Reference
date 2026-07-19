#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvVolumetricFogVolume : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bActive; // 0x498            
            uint8_t _pad0499[0x3]; // 0x499
            Vector m_vBoxMins; // 0x49c            
            Vector m_vBoxMaxs; // 0x4a8            
            bool m_bStartDisabled; // 0x4b4            
            bool m_bIndirectUseLPVs; // 0x4b5            
            uint8_t _pad04b6[0x2]; // 0x4b6
            float m_flStrength; // 0x4b8            
            std::int32_t m_nFalloffShape; // 0x4bc            
            float m_flFalloffExponent; // 0x4c0            
            float m_flHeightFogDepth; // 0x4c4            
            float m_fHeightFogEdgeWidth; // 0x4c8            
            float m_fIndirectLightStrength; // 0x4cc            
            float m_fSunLightStrength; // 0x4d0            
            float m_fNoiseStrength; // 0x4d4            
            Color m_TintColor; // 0x4d8            
            bool m_bOverrideTintColor; // 0x4dc            
            bool m_bOverrideIndirectLightStrength; // 0x4dd            
            bool m_bOverrideSunLightStrength; // 0x4de            
            bool m_bOverrideNoiseStrength; // 0x4df            
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogVolume) == 0x4e0);
    };
};
