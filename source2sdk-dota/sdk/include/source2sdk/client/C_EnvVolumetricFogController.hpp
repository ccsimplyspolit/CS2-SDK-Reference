#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvVolumetricFogController : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flScattering; // 0x5f0            
            Color m_TintColor; // 0x5f4            
            float m_flAnisotropy; // 0x5f8            
            float m_flFadeSpeed; // 0x5fc            
            float m_flDrawDistance; // 0x600            
            float m_flFadeInStart; // 0x604            
            float m_flFadeInEnd; // 0x608            
            float m_flIndirectStrength; // 0x60c            
            std::int32_t m_nVolumeDepth; // 0x610            
            float m_fFirstVolumeSliceThickness; // 0x614            
            std::int32_t m_nIndirectTextureDimX; // 0x618            
            std::int32_t m_nIndirectTextureDimY; // 0x61c            
            std::int32_t m_nIndirectTextureDimZ; // 0x620            
            Vector m_vBoxMins; // 0x624            
            Vector m_vBoxMaxs; // 0x630            
            bool m_bActive; // 0x63c            
            uint8_t _pad063d[0x3]; // 0x63d
            source2sdk::entity2::GameTime_t m_flStartAnisoTime; // 0x640            
            source2sdk::entity2::GameTime_t m_flStartScatterTime; // 0x644            
            source2sdk::entity2::GameTime_t m_flStartDrawDistanceTime; // 0x648            
            float m_flStartAnisotropy; // 0x64c            
            float m_flStartScattering; // 0x650            
            float m_flStartDrawDistance; // 0x654            
            float m_flDefaultAnisotropy; // 0x658            
            float m_flDefaultScattering; // 0x65c            
            float m_flDefaultDrawDistance; // 0x660            
            bool m_bStartDisabled; // 0x664            
            bool m_bEnableIndirect; // 0x665            
            bool m_bIsMaster; // 0x666            
            uint8_t _pad0667[0x1]; // 0x667
            // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
            char m_hFogIndirectTexture[0x8]; // 0x668            
            std::int32_t m_nForceRefreshCount; // 0x670            
            float m_fNoiseSpeed; // 0x674            
            float m_fNoiseStrength; // 0x678            
            Vector m_vNoiseScale; // 0x67c            
            float m_fWindSpeed; // 0x688            
            Vector m_vWindDirection; // 0x68c            
            bool m_bFirstTime; // 0x698            
            uint8_t _pad0699[0x7];
            
            // Datamap fields:
            // void InputSetToDefaults; // 0x0
            // float InputSetScattering; // 0x0
            // float InputSetAnisotropy; // 0x0
            // float InputSetFadeSpeed; // 0x0
            // float InputSetDrawDistance; // 0x0
            // bool EnableIndirect; // 0x0
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // void ForceRefresh; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvVolumetricFogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogController) == 0x6a0);
    };
};
