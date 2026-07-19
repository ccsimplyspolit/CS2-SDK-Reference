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
        // Size: 0x4e8
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bIndirectUseLPVs"
        // static metadata: MNetworkVarNames "float m_flStrength"
        // static metadata: MNetworkVarNames "int m_nFalloffShape"
        // static metadata: MNetworkVarNames "float m_flFalloffExponent"
        // static metadata: MNetworkVarNames "float m_flHeightFogDepth"
        // static metadata: MNetworkVarNames "float m_fHeightFogEdgeWidth"
        // static metadata: MNetworkVarNames "float m_fIndirectLightStrength"
        // static metadata: MNetworkVarNames "float m_fSunLightStrength"
        // static metadata: MNetworkVarNames "float m_fNoiseStrength"
        // static metadata: MNetworkVarNames "Color m_TintColor"
        // static metadata: MNetworkVarNames "bool m_bOverrideTintColor"
        // static metadata: MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideSunLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideNoiseStrength"
        #pragma pack(push, 1)
        class CEnvVolumetricFogVolume : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x4a4            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x4b0            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x4bc            
            // metadata: MNetworkEnable
            bool m_bIndirectUseLPVs; // 0x4bd            
            uint8_t _pad04be[0x2]; // 0x4be
            // metadata: MNetworkEnable
            float m_flStrength; // 0x4c0            
            // metadata: MNetworkEnable
            std::int32_t m_nFalloffShape; // 0x4c4            
            // metadata: MNetworkEnable
            float m_flFalloffExponent; // 0x4c8            
            // metadata: MNetworkEnable
            float m_flHeightFogDepth; // 0x4cc            
            // metadata: MNetworkEnable
            float m_fHeightFogEdgeWidth; // 0x4d0            
            // metadata: MNetworkEnable
            float m_fIndirectLightStrength; // 0x4d4            
            // metadata: MNetworkEnable
            float m_fSunLightStrength; // 0x4d8            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x4dc            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x4e0            
            // metadata: MNetworkEnable
            bool m_bOverrideTintColor; // 0x4e4            
            // metadata: MNetworkEnable
            bool m_bOverrideIndirectLightStrength; // 0x4e5            
            // metadata: MNetworkEnable
            bool m_bOverrideSunLightStrength; // 0x4e6            
            // metadata: MNetworkEnable
            bool m_bOverrideNoiseStrength; // 0x4e7            
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogVolume) == 0x4e8);
    };
};
