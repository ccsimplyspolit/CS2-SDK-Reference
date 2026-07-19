#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x558
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvVolumetricFogController : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flScattering; // 0x4a8            
            Color m_TintColor; // 0x4ac            
            float m_flAnisotropy; // 0x4b0            
            float m_flFadeSpeed; // 0x4b4            
            float m_flDrawDistance; // 0x4b8            
            float m_flFadeInStart; // 0x4bc            
            float m_flFadeInEnd; // 0x4c0            
            float m_flIndirectStrength; // 0x4c4            
            std::int32_t m_nVolumeDepth; // 0x4c8            
            float m_fFirstVolumeSliceThickness; // 0x4cc            
            std::int32_t m_nIndirectTextureDimX; // 0x4d0            
            std::int32_t m_nIndirectTextureDimY; // 0x4d4            
            std::int32_t m_nIndirectTextureDimZ; // 0x4d8            
            Vector m_vBoxMins; // 0x4dc            
            Vector m_vBoxMaxs; // 0x4e8            
            bool m_bActive; // 0x4f4            
            uint8_t _pad04f5[0x3]; // 0x4f5
            source2sdk::entity2::GameTime_t m_flStartAnisoTime; // 0x4f8            
            source2sdk::entity2::GameTime_t m_flStartScatterTime; // 0x4fc            
            source2sdk::entity2::GameTime_t m_flStartDrawDistanceTime; // 0x500            
            float m_flStartAnisotropy; // 0x504            
            float m_flStartScattering; // 0x508            
            float m_flStartDrawDistance; // 0x50c            
            float m_flDefaultAnisotropy; // 0x510            
            float m_flDefaultScattering; // 0x514            
            float m_flDefaultDrawDistance; // 0x518            
            bool m_bStartDisabled; // 0x51c            
            bool m_bEnableIndirect; // 0x51d            
            bool m_bIsMaster; // 0x51e            
            uint8_t _pad051f[0x1]; // 0x51f
            // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
            char m_hFogIndirectTexture[0x8]; // 0x520            
            std::int32_t m_nForceRefreshCount; // 0x528            
            float m_fNoiseSpeed; // 0x52c            
            float m_fNoiseStrength; // 0x530            
            Vector m_vNoiseScale; // 0x534            
            float m_fWindSpeed; // 0x540            
            Vector m_vWindDirection; // 0x544            
            bool m_bFirstTime; // 0x550            
            uint8_t _pad0551[0x7];
            
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
        
        // Cannot assert offsets of fields in CEnvVolumetricFogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogController) == 0x558);
    };
};
