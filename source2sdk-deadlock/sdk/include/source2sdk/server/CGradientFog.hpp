#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
        class CGradientFog : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hGradientFogTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture;
            char m_hGradientFogTexture[0x8]; // 0x4a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogStartDistance; // 0x4a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogEndDistance; // 0x4ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            bool m_bHeightFogEnabled; // 0x4b0            
            uint8_t _pad04b1[0x3]; // 0x4b1
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogStartHeight; // 0x4b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogEndHeight; // 0x4b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFarZ; // 0x4bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogMaxOpacity; // 0x4c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogFalloffExponent; // 0x4c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogVerticalExponent; // 0x4c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            Color m_fogColor; // 0x4cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFogStrength; // 0x4d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "FogStateChanged"
            float m_flFadeTime; // 0x4d4            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x4d8            
            // metadata: MNetworkEnable
            bool m_bIsEnabled; // 0x4d9            
            bool m_bGradientFogNeedsTextures; // 0x4da            
            uint8_t _pad04db[0x5];
            
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
        
        // Cannot assert offsets of fields in CGradientFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGradientFog) == 0x4e0);
    };
};
