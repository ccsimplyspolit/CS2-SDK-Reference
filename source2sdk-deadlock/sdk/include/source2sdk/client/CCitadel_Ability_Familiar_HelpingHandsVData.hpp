#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Standard-layout class: false
        // Size: 0x2c50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_HelpingHandsVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AIPhysicsModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AIPhysicsModifier;
            char m_AIPhysicsModifier[0x10]; // 0x1818            
            // m_AIAggroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AIAggroModifier;
            char m_AIAggroModifier[0x10]; // 0x1828            
            // m_InvisWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InvisWatcherModifier;
            char m_InvisWatcherModifier[0x10]; // 0x1838            
            // m_InfestModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InfestModifier;
            char m_InfestModifier[0x10]; // 0x1848            
            // m_InfestWaitingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InfestWaitingModifier;
            char m_InfestWaitingModifier[0x10]; // 0x1858            
            // m_InfestBarrierModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InfestBarrierModifier;
            char m_InfestBarrierModifier[0x10]; // 0x1868            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHelperShootSound; // 0x1878            
            CSoundEventName m_strHelperSpawnSound; // 0x1888            
            CSoundEventName m_strHelperEmoteSound; // 0x1898            
            CSoundEventName m_strHelperFoundEnemySound; // 0x18a8            
            CSoundEventName m_strHelperHealTroopSound; // 0x18b8            
            CSoundEventName m_strHelperScaredSound; // 0x18c8            
            CSoundEventName m_strHelperBuffSound; // 0x18d8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_EmoteParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EmoteParticle;
            char m_EmoteParticle[0xe0]; // 0x18e8            
            // m_HealParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealParticle;
            char m_HealParticle[0xe0]; // 0x19c8            
            // m_DamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamageParticle;
            char m_DamageParticle[0xe0]; // 0x1aa8            
            // m_DamageAttachedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamageAttachedParticle;
            char m_DamageAttachedParticle[0xe0]; // 0x1b88            
            // m_CastRegionIndicatorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastRegionIndicatorParticle;
            char m_CastRegionIndicatorParticle[0xe0]; // 0x1c68            
            // m_AuraIndicatorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AuraIndicatorParticle;
            char m_AuraIndicatorParticle[0xe0]; // 0x1d48            
            // m_AuraInactiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AuraInactiveParticle;
            char m_AuraInactiveParticle[0xe0]; // 0x1e28            
            // m_HelperCreateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperCreateParticle;
            char m_HelperCreateParticle[0xe0]; // 0x1f08            
            // m_HelperDestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperDestroyParticle;
            char m_HelperDestroyParticle[0xe0]; // 0x1fe8            
            // m_HelperParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperParticle;
            char m_HelperParticle[0xe0]; // 0x20c8            
            // m_HelperSleepingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperSleepingParticle;
            char m_HelperSleepingParticle[0xe0]; // 0x21a8            
            // m_HelperAttackingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperAttackingParticle;
            char m_HelperAttackingParticle[0xe0]; // 0x2288            
            // m_HelperStunnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperStunnedParticle;
            char m_HelperStunnedParticle[0xe0]; // 0x2368            
            // m_HelperChargingUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperChargingUpParticle;
            char m_HelperChargingUpParticle[0xe0]; // 0x2448            
            // m_HelperAttachedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperAttachedParticle;
            char m_HelperAttachedParticle[0xe0]; // 0x2528            
            // m_HelperTeleportOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperTeleportOutParticle;
            char m_HelperTeleportOutParticle[0xe0]; // 0x2608            
            // m_HelperTeleportInParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperTeleportInParticle;
            char m_HelperTeleportInParticle[0xe0]; // 0x26e8            
            // m_HelperTargetIndicateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HelperTargetIndicateParticle;
            char m_HelperTargetIndicateParticle[0xe0]; // 0x27c8            
            // m_InfestedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InfestedParticle;
            char m_InfestedParticle[0xe0]; // 0x28a8            
            // m_InfestedHeroParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InfestedHeroParticle;
            char m_InfestedHeroParticle[0xe0]; // 0x2988            
            // m_ScaredParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ScaredParticle;
            char m_ScaredParticle[0xe0]; // 0x2a68            
            // metadata: MPropertyStartGroup "Collision"
            float m_flCollisionSize; // 0x2b48            
            float m_flCollisionHeight; // 0x2b4c            
            // metadata: MPropertyStartGroup "Damaging Jump"
            float m_flLaunchBiasUp; // 0x2b50            
            float m_flLaunchSpeedMult; // 0x2b54            
            float m_flLaunchMaxSpeed; // 0x2b58            
            float m_flHomingBias; // 0x2b5c            
            float m_flDamageCollisonScale; // 0x2b60            
            uint8_t _pad2b64[0x4]; // 0x2b64
            // metadata: MPropertyStartGroup "Emote"
            CPiecewiseCurve m_EmoteVelocityZByTime; // 0x2b68            
            CPiecewiseCurve m_EmoteSpinByTime; // 0x2ba8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flNewlySpawnedWaitTime; // 0x2be8            
            float m_flHealInterval; // 0x2bec            
            float m_flSpawnLaunchUpBias; // 0x2bf0            
            float m_flSpawnLaunchForce; // 0x2bf4            
            float m_flMoveTolerance_Meters; // 0x2bf8            
            float m_flMoveTolerance_UnitTarget_Meters; // 0x2bfc            
            float m_flTolerance_FarFromPlayer_Meters; // 0x2c00            
            float m_flTolerance_CloseToPlayer_Meters; // 0x2c04            
            CPiecewiseCurve m_PatrolTravelTimeByDistance; // 0x2c08            
            float m_flInfestedNPCModelScale; // 0x2c48            
            uint8_t _pad2c4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_HelpingHandsVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_HelpingHandsVData) == 0x2c50);
    };
};
