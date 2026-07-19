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
        // Size: 0x548
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvVolumetricFogController : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flScattering; // 0x498            
            Color m_TintColor; // 0x49c            
            float m_flAnisotropy; // 0x4a0            
            float m_flFadeSpeed; // 0x4a4            
            float m_flDrawDistance; // 0x4a8            
            float m_flFadeInStart; // 0x4ac            
            float m_flFadeInEnd; // 0x4b0            
            float m_flIndirectStrength; // 0x4b4            
            std::int32_t m_nVolumeDepth; // 0x4b8            
            float m_fFirstVolumeSliceThickness; // 0x4bc            
            std::int32_t m_nIndirectTextureDimX; // 0x4c0            
            std::int32_t m_nIndirectTextureDimY; // 0x4c4            
            std::int32_t m_nIndirectTextureDimZ; // 0x4c8            
            Vector m_vBoxMins; // 0x4cc            
            Vector m_vBoxMaxs; // 0x4d8            
            bool m_bActive; // 0x4e4            
            uint8_t _pad04e5[0x3]; // 0x4e5
            source2sdk::entity2::GameTime_t m_flStartAnisoTime; // 0x4e8            
            source2sdk::entity2::GameTime_t m_flStartScatterTime; // 0x4ec            
            source2sdk::entity2::GameTime_t m_flStartDrawDistanceTime; // 0x4f0            
            float m_flStartAnisotropy; // 0x4f4            
            float m_flStartScattering; // 0x4f8            
            float m_flStartDrawDistance; // 0x4fc            
            float m_flDefaultAnisotropy; // 0x500            
            float m_flDefaultScattering; // 0x504            
            float m_flDefaultDrawDistance; // 0x508            
            bool m_bStartDisabled; // 0x50c            
            bool m_bEnableIndirect; // 0x50d            
            bool m_bIsMaster; // 0x50e            
            uint8_t _pad050f[0x1]; // 0x50f
            // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
            char m_hFogIndirectTexture[0x8]; // 0x510            
            std::int32_t m_nForceRefreshCount; // 0x518            
            float m_fNoiseSpeed; // 0x51c            
            float m_fNoiseStrength; // 0x520            
            Vector m_vNoiseScale; // 0x524            
            float m_fWindSpeed; // 0x530            
            Vector m_vWindDirection; // 0x534            
            bool m_bFirstTime; // 0x540            
            uint8_t _pad0541[0x7];
            
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
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogController) == 0x548);
    };
};
