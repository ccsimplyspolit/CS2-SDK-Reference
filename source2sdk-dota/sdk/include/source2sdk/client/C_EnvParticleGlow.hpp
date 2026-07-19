#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ParticleSystem.hpp"
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
        // Size: 0x1070
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EnvParticleGlow : public source2sdk::client::C_ParticleSystem
        {
        public:
            float m_flAlphaScale; // 0x1058            
            float m_flRadiusScale; // 0x105c            
            float m_flSelfIllumScale; // 0x1060            
            Color m_ColorTint; // 0x1064            
            // m_hTextureOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hTextureOverride;
            char m_hTextureOverride[0x8]; // 0x1068            
            
            // Datamap fields:
            // float InputSetScale; // 0x0
            // float InputSetAlphaScale; // 0x0
            // Color InputSetColorTint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvParticleGlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvParticleGlow) == 0x1070);
    };
};
