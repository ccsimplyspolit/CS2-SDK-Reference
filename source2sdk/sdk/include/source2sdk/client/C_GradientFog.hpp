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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_GradientFog : public source2sdk::client::C_BaseEntity
        {
        public:
            // m_hGradientFogTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture;
            char m_hGradientFogTexture[0x8]; // 0x600            
            float m_flFogStartDistance; // 0x608            
            float m_flFogEndDistance; // 0x60c            
            bool m_bHeightFogEnabled; // 0x610            
            uint8_t _pad0611[0x3]; // 0x611
            float m_flFogStartHeight; // 0x614            
            float m_flFogEndHeight; // 0x618            
            float m_flFarZ; // 0x61c            
            float m_flFogMaxOpacity; // 0x620            
            float m_flFogFalloffExponent; // 0x624            
            float m_flFogVerticalExponent; // 0x628            
            Color m_fogColor; // 0x62c            
            float m_flFogStrength; // 0x630            
            float m_flFadeTime; // 0x634            
            bool m_bStartDisabled; // 0x638            
            bool m_bIsEnabled; // 0x639            
            bool m_bGradientFogNeedsTextures; // 0x63a            
            uint8_t _pad063b[0x5d];
            
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
        
        static_assert(sizeof(source2sdk::client::C_GradientFog) == 0x698);
    };
};
