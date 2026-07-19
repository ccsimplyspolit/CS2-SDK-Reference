#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/DetailCombo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x230
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_StatusEffectCitadel : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "$SFXColorWarpAmount"
            float m_flSFXColorWarpAmount; // 0x1e0            
            // metadata: MPropertyFriendlyName "$SFXNormalAmount"
            float m_flSFXNormalAmount; // 0x1e4            
            // metadata: MPropertyFriendlyName "$SFXMetalnessAmount"
            float m_flSFXMetalnessAmount; // 0x1e8            
            // metadata: MPropertyFriendlyName "$SFXRoughnessAmount"
            float m_flSFXRoughnessAmount; // 0x1ec            
            // metadata: MPropertyFriendlyName "$SFXSelfIllumAmount"
            float m_flSFXSelfIllumAmount; // 0x1f0            
            // metadata: MPropertyFriendlyName "$SFXTextureScale"
            float m_flSFXSScale; // 0x1f4            
            // metadata: MPropertyFriendlyName "$SFXTextureScrollX"
            float m_flSFXSScrollX; // 0x1f8            
            // metadata: MPropertyFriendlyName "$SFXTextureScrollY"
            float m_flSFXSScrollY; // 0x1fc            
            // metadata: MPropertyFriendlyName "$SFXTextureScrollZ"
            float m_flSFXSScrollZ; // 0x200            
            // metadata: MPropertyFriendlyName "$SFXTextureOffsetX"
            float m_flSFXSOffsetX; // 0x204            
            // metadata: MPropertyFriendlyName "$SFXTextureOffsetY"
            float m_flSFXSOffsetY; // 0x208            
            // metadata: MPropertyFriendlyName "$SFXTextureOffsetZ"
            float m_flSFXSOffsetZ; // 0x20c            
            // metadata: MPropertyFriendlyName "D_DETAIL"
            source2sdk::particles::DetailCombo_t m_nDetailCombo; // 0x210            
            // metadata: MPropertyFriendlyName "$SFXDetailAmount"
            float m_flSFXSDetailAmount; // 0x214            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScale"
            float m_flSFXSDetailScale; // 0x218            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScrollX"
            float m_flSFXSDetailScrollX; // 0x21c            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScrollY"
            float m_flSFXSDetailScrollY; // 0x220            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScrollZ"
            float m_flSFXSDetailScrollZ; // 0x224            
            // metadata: MPropertyFriendlyName "$SFXUseModelUVs"
            float m_flSFXSUseModelUVs; // 0x228            
            uint8_t _pad022c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_StatusEffectCitadel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_StatusEffectCitadel) == 0x230);
    };
};
