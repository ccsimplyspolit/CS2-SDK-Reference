#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/EPickupCollectionMethod.hpp"
#include "source2sdk/client/TimeScalingValue_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Size: 0x9d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Pickup_VData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyFriendlyName "Spawn Particle"
            // m_friendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_friendlyParticle;
            char m_friendlyParticle[0xe0]; // 0x28            
            // m_enemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_enemyParticle;
            char m_enemyParticle[0xe0]; // 0x108            
            // m_friendlyModelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_friendlyModelParticle;
            char m_friendlyModelParticle[0xe0]; // 0x1e8            
            // m_enemyModelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_enemyModelParticle;
            char m_enemyModelParticle[0xe0]; // 0x2c8            
            // m_friendlyInteractiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_friendlyInteractiveParticle;
            char m_friendlyInteractiveParticle[0xe0]; // 0x3a8            
            // m_enemyInteractiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_enemyInteractiveParticle;
            char m_enemyInteractiveParticle[0xe0]; // 0x488            
            // m_gainedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_gainedParticle;
            char m_gainedParticle[0xe0]; // 0x568            
            // m_vacuumStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_vacuumStartParticle;
            char m_vacuumStartParticle[0xe0]; // 0x648            
            // metadata: MPropertyFriendlyName "Spawn Particle Color"
            // metadata: MPropertyDescription "Spawn Particle Color"
            Color m_Color; // 0x728            
            uint8_t _pad072c[0x4]; // 0x72c
            // metadata: MPropertyDescription "Model"
            // metadata: MPropertyProvidesEditContextString
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x730            
            // metadata: MPropertyFriendlyName "Material group"
            // metadata: MPropertyDescription "Which material group of the model should be used?"
            CModelMaterialGroupName m_sDefaultMaterialGroupName; // 0x810            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Pickup Name Loc String"
            CUtlString m_sNameLocString; // 0x818            
            std::int32_t m_nNameOffset; // 0x820            
            // metadata: MPropertyFriendlyName "Show On Minimap"
            bool m_bShowOnMinimap; // 0x824            
            bool m_bIsPermanentPickup; // 0x825            
            uint8_t _pad0826[0x2]; // 0x826
            std::int32_t m_iTempParticleSheetIndex; // 0x828            
            float m_flParticleRadius; // 0x82c            
            // m_vecMinimapCssClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecMinimapCssClasses;
            char m_vecMinimapCssClasses[0x18]; // 0x830            
            // metadata: MPropertyStartGroup "Audio"
            // metadata: MPropertyFriendlyName "Pickup Sound"
            CSoundEventName m_sPickupSound; // 0x848            
            // metadata: MPropertyFriendlyName "Spawn Sound"
            CSoundEventName m_sSpawnSound; // 0x858            
            // metadata: MPropertyFriendlyName "Become Interactive Sound"
            CSoundEventName m_sBecomeInteractiveSound; // 0x868            
            // metadata: MPropertyFriendlyName "Vacuum Start Sound"
            // metadata: MPropertyDescription "Sound that plays when vacuuming starts and only for the vacuuming player"
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            CSoundEventName m_strVacuumStartSound; // 0x878            
            // metadata: MPropertyFriendlyName "Ambient Sound"
            CSoundEventName m_sAmbientSound; // 0x888            
            // metadata: MPropertyFriendlyName "On Punched Sound"
            // metadata: MPropertySuppressExpr "m_eCollectionMethod != Punch"
            CSoundEventName m_sHitSound; // 0x898            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyDescription "Determines how players collect the rewards from this pickup"
            source2sdk::client::EPickupCollectionMethod m_eCollectionMethod; // 0x8a8            
            // metadata: MPropertyFriendlyName "Pickup Radius"
            source2sdk::client::TimeScalingValue_t m_flPickupRadius; // 0x8ac            
            // metadata: MPropertyFriendlyName "Pickup Expiration Duration"
            bool m_bPickupExpires; // 0x8bc            
            uint8_t _pad08bd[0x3]; // 0x8bd
            source2sdk::client::TimeScalingValue_t m_flPickupExpirationDuration; // 0x8c0            
            // metadata: MPropertyDescription "When true, don't allow collection until we've fallen to the ground"
            bool bPhysicallyDropToTheGroundOnSpawn; // 0x8d0            
            uint8_t _pad08d1[0x3]; // 0x8d1
            // metadata: MPropertyStartGroup "Fall To Ground Settings"
            // metadata: MPropertyDescription "Radius when solid and falling to the ground"
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            float m_flSolidRadius; // 0x8d4            
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            source2sdk::tier2::CRangeFloat m_fInitialSpawnXYSpeed; // 0x8d8            
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            source2sdk::tier2::CRangeFloat m_fInitialSpawnZSpeed; // 0x8e0            
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            float m_flFallGravity; // 0x8e8            
            // metadata: MPropertyDescription "Optionally how far to hover off the ground"
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            float m_flHoverOffset; // 0x8ec            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyStartGroup "Punch Settings"
            // metadata: MPropertySuppressExpr "m_eCollectionMethod != Punch"
            std::int32_t m_iHitsRequired; // 0x8f0            
            // metadata: MPropertySuppressExpr "m_eCollectionMethod != Punch"
            bool m_bHeavyMeleeOnly; // 0x8f4            
            uint8_t _pad08f5[0x3]; // 0x8f5
            // metadata: MPropertySuppressExpr "m_eCollectionMethod != Punch"
            float m_flCollisionRadius; // 0x8f8            
            // metadata: MPropertySuppressExpr "m_eCollectionMethod != Punch"
            float m_flCenterHeightOffset; // 0x8fc            
            // m_ParryCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ParryCheckModifier;
            char m_ParryCheckModifier[0x10]; // 0x900            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyDescription "When true, the pickup will vacuum to the first player that gets within the pickup radius"
            bool m_bPicupIsVacuum; // 0x910            
            uint8_t _pad0911[0x3]; // 0x911
            // metadata: MPropertyStartGroup "Vacuum Settings"
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            source2sdk::tier2::CRangeFloat m_flInitialVacuumSideSpeed; // 0x914            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            source2sdk::tier2::CRangeFloat m_flInitialVacuumUpSpeed; // 0x91c            
            uint8_t _pad0924[0x4]; // 0x924
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            CPiecewiseCurve m_VacuumToPlayerSpeedCurve; // 0x928            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            CPiecewiseCurve m_VacuumInitialVelSpeedCurve; // 0x968            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            float m_flVacuumCloseEnoughToPickup; // 0x9a8            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            source2sdk::client::CRemapFloat m_EffectDistanceToRadiusRemap; // 0x9ac            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyDescription "When set, only exists for the team the pickup is on"
            bool m_bSameTeamOnly; // 0x9bc            
            uint8_t _pad09bd[0x3]; // 0x9bd
            // metadata: MPropertyStartGroup "Outline"
            float m_flOutlineRange; // 0x9c0            
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColor; // 0x9c4            
            // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AuraModifier;
            char m_AuraModifier[0x10]; // 0x9c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Pickup_VData) == 0x9d8);
    };
};
