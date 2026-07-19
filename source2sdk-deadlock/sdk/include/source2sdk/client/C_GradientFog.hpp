#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Size: 0x688
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
        // static metadata: MNetworkVarNames "float m_flFogStartDistance"
        // static metadata: MNetworkVarNames "float m_flFogEndDistance"
        // static metadata: MNetworkVarNames "bool m_bHeightFogEnabled"
        // static metadata: MNetworkVarNames "float m_flFogStartHeight"
        // static metadata: MNetworkVarNames "float m_flFogEndHeight"
        // static metadata: MNetworkVarNames "float m_flFarZ"
        // static metadata: MNetworkVarNames "float m_flFogMaxOpacity"
        // static metadata: MNetworkVarNames "float m_flFogFalloffExponent"
        // static metadata: MNetworkVarNames "float m_flFogVerticalExponent"
        // static metadata: MNetworkVarNames "Color m_fogColor"
        // static metadata: MNetworkVarNames "float m_flFogStrength"
        // static metadata: MNetworkVarNames "float m_flFadeTime"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bIsEnabled"
        #pragma pack(push, 1)
        class C_GradientFog : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hGradientFogTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture;
            char m_hGradientFogTexture[0x8]; // 0x5f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogStartDistance; // 0x5f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogEndDistance; // 0x5fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            bool m_bHeightFogEnabled; // 0x600            
            uint8_t _pad0601[0x3]; // 0x601
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogStartHeight; // 0x604            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogEndHeight; // 0x608            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFarZ; // 0x60c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogMaxOpacity; // 0x610            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogFalloffExponent; // 0x614            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogVerticalExponent; // 0x618            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            Color m_fogColor; // 0x61c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogStrength; // 0x620            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFadeTime; // 0x624            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x628            
            // metadata: MNetworkEnable
            bool m_bIsEnabled; // 0x629            
            bool m_bGradientFogNeedsTextures; // 0x62a            
            uint8_t _pad062b[0x5d];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // float InputSetFogStartDistance; // 0x0
            // float InputSetFogEndDistance; // 0x0
            // float InputSetFogStartHeight; // 0x0
            // float InputSetFogEndHeight; // 0x0
            // float InputSetFogMaxOpacity; // 0x0
            // float InputSetFogFalloffExponent; // 0x0
            // float InputSetFogVerticalExponent; // 0x0
            // Color InputSetFogColor; // 0x0
            // float InputSetFogStrength; // 0x0
            // float InputSetFarZ; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_GradientFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_GradientFog) == 0x688);
    };
};
