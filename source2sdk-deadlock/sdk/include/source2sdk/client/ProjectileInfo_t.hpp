#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/ProjectileBehaviorFlag_t.hpp"
#include "source2sdk/client/ProjectileShape_t.hpp"
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
        // Size: 0x398
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ProjectileInfo_t
        {
        public:
            source2sdk::client::ProjectileBehaviorFlag_t m_nBehaviors; // 0x0            
            // metadata: MPropertyStartGroup "Physics"
            float m_flGravityScale; // 0x4            
            float m_flFriction; // 0x8            
            float m_flElasticity; // 0xc            
            float m_flSpeed; // 0x10            
            float m_flUpSpeed; // 0x14            
            float m_flMaxLinearRange; // 0x18            
            float m_flVerticalAimBias; // 0x1c            
            source2sdk::client::ProjectileShape_t m_eProjectileShape; // 0x20            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Sphere"
            float m_flTriggerRadius; // 0x24            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Sphere"
            float m_flPhysicsRadius; // 0x28            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Sphere"
            // metadata: MPropertyFriendlyName "Additional Bullet Only Trigger Radius"
            // metadata: MPropertyDescription "When > 0, creates an additional trigger volume of this radius that bullets will touch and call OnBulletHit().  Useful when we want bullets to be more generous at hitting this projectile."
            float m_flBulletOnlyTriggerRadius; // 0x2c            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
            Vector m_vecCapsulePhysicsCenter1; // 0x30            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
            Vector m_vecCapsulePhysicsCenter2; // 0x3c            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
            float m_flCapsulePhysicsRadius; // 0x48            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
            Vector m_vecCapsuleTriggerCenter1; // 0x4c            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
            Vector m_vecCapsuleTriggerCenter2; // 0x58            
            // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
            float m_flCapsuleTriggerRadius; // 0x64            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyFriendlyName "Trail Particle"
            // m_particle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_particle;
            char m_particle[0xe0]; // 0x68            
            bool m_bHideWarningParticle; // 0x148            
            uint8_t _pad0149[0x7]; // 0x149
            // metadata: MPropertyFriendlyName "Warning Particle"
            // metadata: MPropertySuppressExpr "m_bHideWarningParticle == true"
            // m_warningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_warningParticle;
            char m_warningParticle[0xe0]; // 0x150            
            // metadata: MPropertyFriendlyName "Projectile Model"
            // m_customModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_customModel;
            char m_customModel[0xe0]; // 0x230            
            float m_flProjectileModelScale; // 0x310            
            uint8_t _pad0314[0x4]; // 0x314
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Plays when a projectile hits a valid target - or the world. Not the same as detonating, just colliding."
            CSoundEventName m_HitSound; // 0x318            
            // metadata: MPropertyDescription "Plays when a projectile hits a valid target ONLY. Should use a soundevent with base 'Base.Ability.Hit'."
            CSoundEventName m_HitTargetSound; // 0x328            
            // metadata: MPropertyDescription "Plays when a projectile hits the world ONLY."
            CSoundEventName m_HitWorldSound; // 0x338            
            // metadata: MPropertyDescription "Plays when a projectile detonates. Not all projectiles detonate."
            CSoundEventName m_DetonateSound; // 0x348            
            // metadata: MPropertyDescription "Plays while a projectile is alive."
            CSoundEventName m_LoopingSound; // 0x358            
            // metadata: MPropertyDescription "Plays a warning sound when a projectile hits a surface, but before it detonates. Plays ONLY if a warning particle is also created."
            CSoundEventName m_WarningSound; // 0x368            
            // metadata: MPropertyStartGroup "Tracking"
            float m_flTrackingDampingCoefficient; // 0x378            
            float m_flTrackingDuration; // 0x37c            
            float m_flTrackingStartTime; // 0x380            
            float m_flTrackingEndTime; // 0x384            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AutoProjectileModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_AutoProjectileModifier;
            char m_AutoProjectileModifier[0x10]; // 0x388            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_nBehaviors) == 0x0);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flGravityScale) == 0x4);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flFriction) == 0x8);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flElasticity) == 0xc);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flSpeed) == 0x10);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flUpSpeed) == 0x14);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flMaxLinearRange) == 0x18);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flVerticalAimBias) == 0x1c);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_eProjectileShape) == 0x20);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flTriggerRadius) == 0x24);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flPhysicsRadius) == 0x28);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flBulletOnlyTriggerRadius) == 0x2c);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_vecCapsulePhysicsCenter1) == 0x30);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_vecCapsulePhysicsCenter2) == 0x3c);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flCapsulePhysicsRadius) == 0x48);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_vecCapsuleTriggerCenter1) == 0x4c);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_vecCapsuleTriggerCenter2) == 0x58);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flCapsuleTriggerRadius) == 0x64);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_particle) == 0x68);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_bHideWarningParticle) == 0x148);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_warningParticle) == 0x150);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_customModel) == 0x230);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flProjectileModelScale) == 0x310);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_HitSound) == 0x318);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_HitTargetSound) == 0x328);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_HitWorldSound) == 0x338);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_DetonateSound) == 0x348);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_LoopingSound) == 0x358);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_WarningSound) == 0x368);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flTrackingDampingCoefficient) == 0x378);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flTrackingDuration) == 0x37c);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flTrackingStartTime) == 0x380);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_flTrackingEndTime) == 0x384);
        static_assert(offsetof(source2sdk::client::ProjectileInfo_t, m_AutoProjectileModifier) == 0x388);
        
        static_assert(sizeof(source2sdk::client::ProjectileInfo_t) == 0x398);
    };
};
