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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGradientFog : public source2sdk::server::CBaseEntity
        {
        public:
            // m_hGradientFogTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture;
            char m_hGradientFogTexture[0x8]; // 0x4a8            
            float m_flFogStartDistance; // 0x4b0            
            float m_flFogEndDistance; // 0x4b4            
            bool m_bHeightFogEnabled; // 0x4b8            
            uint8_t _pad04b9[0x3]; // 0x4b9
            float m_flFogStartHeight; // 0x4bc            
            float m_flFogEndHeight; // 0x4c0            
            float m_flFarZ; // 0x4c4            
            float m_flFogMaxOpacity; // 0x4c8            
            float m_flFogFalloffExponent; // 0x4cc            
            float m_flFogVerticalExponent; // 0x4d0            
            Color m_fogColor; // 0x4d4            
            float m_flFogStrength; // 0x4d8            
            float m_flFadeTime; // 0x4dc            
            bool m_bStartDisabled; // 0x4e0            
            bool m_bIsEnabled; // 0x4e1            
            bool m_bGradientFogNeedsTextures; // 0x4e2            
            uint8_t _pad04e3[0x5];
            
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
        
        static_assert(sizeof(source2sdk::server::CGradientFog) == 0x4e8);
    };
};
