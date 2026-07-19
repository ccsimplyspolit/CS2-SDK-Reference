#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x200
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct DeploymentInfo_t
        {
        public:
            // metadata: MPropertyDescription "If set, deployment will do a cast from above the cast point to see if there's a valid up surface to deploy to.  Will reject any non up facing surfaces."
            bool m_bRequiresUpNormal; // 0x0            
            // metadata: MPropertyDescription "If set, deployment will trace up and down to search for valid ground position."
            bool m_bGroundCheck; // 0x1            
            // metadata: MPropertyDescription "If set, deployment will always have a pitch and roll of 0."
            bool m_bPlaceFlat; // 0x2            
            uint8_t _pad0003[0x1]; // 0x3
            // metadata: MPropertyDescription "If being placed flat, apply this yaw offset."
            float m_flFlatYawOffset; // 0x4            
            // metadata: MPropertyDescription "If set, deployment will always be normal to surface."
            bool m_bPlaceNormalToSurface; // 0x8            
            // metadata: MPropertyDescription "If set, always use a line trace, instead of tracing the size of the object."
            bool m_bPointTrace; // 0x9            
            // metadata: MPropertyDescription "If set, make sure the casting player will fit at the target spot, instead of the deployment model."
            bool m_bCheckPlayerFit; // 0xa            
            uint8_t _pad000b[0x1]; // 0xb
            // metadata: MPropertyDescription "Offset the deployment position by this amount of the deployment model's height.  Useful for making something be centered on the crosshair when placed on a wall"
            float m_flModelVerticalPlacementScaleOffset; // 0xc            
            // metadata: MPropertyDescription "If set, ignore LOS check if deploy target is below caster"
            bool m_bDownCheckIgnoreLos; // 0x10            
            uint8_t _pad0011[0x7]; // 0x11
            // m_previewModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_previewModel;
            char m_previewModel[0xe0]; // 0x18            
            // metadata: MPropertyDescription "CP0=caster origin, CP1=deploy target position, CP2=caster's ability_cast"
            // m_previewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle;
            char m_previewParticle[0xe0]; // 0xf8            
            CUtlString m_strPreviewParticleEffectConfig; // 0x1d8            
            CUtlString m_strExraBodygroup; // 0x1e0            
            CUtlString m_strPreviewClass; // 0x1e8            
            float m_flPreviewModelScale; // 0x1f0            
            // metadata: MPropertyDescription "If set, use the height offset instead of citadel_deployment_max_height_offset_up"
            float m_flGroundCheckHeightOffset; // 0x1f4            
            // metadata: MPropertyDescription "If set, max the distance below caster for valid ground (positive value) default - citadel_deployment_max_height_offset_down"
            float m_flGroundCheckHeightOffsetDown; // 0x1f8            
            uint8_t _pad01fc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bRequiresUpNormal) == 0x0);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bGroundCheck) == 0x1);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bPlaceFlat) == 0x2);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_flFlatYawOffset) == 0x4);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bPlaceNormalToSurface) == 0x8);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bPointTrace) == 0x9);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bCheckPlayerFit) == 0xa);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_flModelVerticalPlacementScaleOffset) == 0xc);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_bDownCheckIgnoreLos) == 0x10);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_previewModel) == 0x18);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_previewParticle) == 0xf8);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_strPreviewParticleEffectConfig) == 0x1d8);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_strExraBodygroup) == 0x1e0);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_strPreviewClass) == 0x1e8);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_flPreviewModelScale) == 0x1f0);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_flGroundCheckHeightOffset) == 0x1f4);
        static_assert(offsetof(source2sdk::client::DeploymentInfo_t, m_flGroundCheckHeightOffsetDown) == 0x1f8);
        
        static_assert(sizeof(source2sdk::client::DeploymentInfo_t) == 0x200);
    };
};
