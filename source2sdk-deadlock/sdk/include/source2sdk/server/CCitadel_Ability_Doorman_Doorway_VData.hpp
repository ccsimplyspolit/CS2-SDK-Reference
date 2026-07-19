#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1f68
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_DoorOpenStartSound; // 0x1818            
            CSoundEventName m_DoorOpenEndSound; // 0x1828            
            CSoundEventName m_DoorPlaceSound; // 0x1838            
            CSoundEventName m_DoorPlacementClearedSound; // 0x1848            
            CSoundEventName m_DoorStartCastSound; // 0x1858            
            CSoundEventName m_DoorEndCastSound; // 0x1868            
            CSoundEventName m_DoorExpireSound; // 0x1878            
            CSoundEventName m_DoorLoopSound; // 0x1888            
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1898            
            // m_PendingDoorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PendingDoorParticle;
            char m_PendingDoorParticle[0xe0]; // 0x1978            
            // m_PlaceDoorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PlaceDoorParticle;
            char m_PlaceDoorParticle[0xe0]; // 0x1a58            
            // m_DoorDurationParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DoorDurationParticle;
            char m_DoorDurationParticle[0xe0]; // 0x1b38            
            // m_DoorDestructionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DoorDestructionParticle;
            char m_DoorDestructionParticle[0xe0]; // 0x1c18            
            // m_hDoorModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hDoorModel;
            char m_hDoorModel[0xe0]; // 0x1cf8            
            // m_hPortalModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hPortalModel;
            char m_hPortalModel[0xe0]; // 0x1dd8            
            // metadata: MPropertyStartGroup "UI"
            CPanoramaImageName m_strSingleDoorAbilityImage; // 0x1eb8            
            // metadata: MPropertyFriendlyName "Door Spawn Particle Color"
            // metadata: MPropertyDescription "Door Spawn Particle Color"
            Color m_ColorStart; // 0x1ec8            
            // metadata: MPropertyFriendlyName "Door End Particle Color"
            // metadata: MPropertyDescription "Door End Particle Color"
            Color m_ColorEnd; // 0x1ecc            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DoorwayTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DoorwayTimerModifier;
            char m_DoorwayTimerModifier[0x10]; // 0x1ed0            
            // m_PortalBarrierModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PortalBarrierModifier;
            char m_PortalBarrierModifier[0x10]; // 0x1ee0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flPlacementWallTestDistance; // 0x1ef0            
            float m_flPlacementWallTestExtentsSolidScale; // 0x1ef4            
            float m_flPlacementWallTestExtentsWallScale; // 0x1ef8            
            float m_flPlacementWallTestSphereRadius; // 0x1efc            
            Vector m_vPlacementOffset; // 0x1f00            
            float m_flPlacementCooldown; // 0x1f0c            
            float m_flPlacementRangeHintDuration; // 0x1f10            
            float m_flPlacementSphereMaxDesat; // 0x1f14            
            Color m_colorPlacementSphereSat; // 0x1f18            
            Color m_colorPlacementSphereDesat; // 0x1f1c            
            Color m_colorPlacementSphereOutline; // 0x1f20            
            uint8_t _pad1f24[0x4]; // 0x1f24
            CPiecewiseCurve m_curvePlacementFail; // 0x1f28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Doorway_VData) == 0x1f68);
    };
};
