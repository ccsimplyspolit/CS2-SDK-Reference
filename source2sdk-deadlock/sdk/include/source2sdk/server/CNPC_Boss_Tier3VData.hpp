#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CBaseModifier.hpp"

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
        // Size: 0x26d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier3VData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            float m_flAllyPitTimeMin; // 0x1348            
            std::int32_t m_nPhase2Health; // 0x134c            
            float m_flEyeZOffset; // 0x1350            
            float m_flDefaultMoveSpeed; // 0x1354            
            float m_flEnemyTrooperProtectionRange; // 0x1358            
            Vector m_vPhase1ObserverOrigin; // 0x135c            
            Vector m_vPhase2ObserverOrigin; // 0x1368            
            float m_flPhase1ObserverPitch; // 0x1374            
            float m_flPhase2ObserverPitch; // 0x1378            
            float m_flPhase2MaxAnimSpinRate; // 0x137c            
            float m_flPhase2AttackBias; // 0x1380            
            float m_flRotateSpeed; // 0x1384            
            float m_flPhase2SightRange; // 0x1388            
            float m_flCoreRadius; // 0x138c            
            float m_flCoreDeathTime; // 0x1390            
            float m_flTransitionLightTime01; // 0x1394            
            float m_flTransitionLightTime02; // 0x1398            
            float m_flTransitionLightTime03; // 0x139c            
            float m_flTransitionLightTime04; // 0x13a0            
            // metadata: MPropertyStartGroup "Shrine Gameplay"
            float m_flShrineAttackHealthLossPerAttack; // 0x13a4            
            float m_flShrineAttackMinTimeBetweenAttacks; // 0x13a8            
            uint8_t _pad13ac[0x4]; // 0x13ac
            // metadata: MPropertyStartGroup "Visuals"
            // m_AmberEffigyExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberEffigyExplosionParticle;
            char m_AmberEffigyExplosionParticle[0xe0]; // 0x13b0            
            // m_AmberTransformUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberTransformUpExplosionParticle;
            char m_AmberTransformUpExplosionParticle[0xe0]; // 0x1490            
            // m_AmberBeginDyingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberBeginDyingParticle;
            char m_AmberBeginDyingParticle[0xe0]; // 0x1570            
            // m_AmberDeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberDeathLargeExplosionParticle;
            char m_AmberDeathLargeExplosionParticle[0xe0]; // 0x1650            
            // m_AmberHitResponseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberHitResponseParticle;
            char m_AmberHitResponseParticle[0xe0]; // 0x1730            
            // m_AmberPhase2AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberPhase2AmbientParticle;
            char m_AmberPhase2AmbientParticle[0xe0]; // 0x1810            
            // m_SapphEffigyExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphEffigyExplosionParticle;
            char m_SapphEffigyExplosionParticle[0xe0]; // 0x18f0            
            // m_SapphTransformUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphTransformUpExplosionParticle;
            char m_SapphTransformUpExplosionParticle[0xe0]; // 0x19d0            
            // m_SapphBeginDyingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphBeginDyingParticle;
            char m_SapphBeginDyingParticle[0xe0]; // 0x1ab0            
            // m_SapphDeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphDeathLargeExplosionParticle;
            char m_SapphDeathLargeExplosionParticle[0xe0]; // 0x1b90            
            // m_SapphHitResponseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphHitResponseParticle;
            char m_SapphHitResponseParticle[0xe0]; // 0x1c70            
            // m_SapphPhase2AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphPhase2AmbientParticle;
            char m_SapphPhase2AmbientParticle[0xe0]; // 0x1d50            
            // m_PatronTransformDownEyeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PatronTransformDownEyeParticle;
            char m_PatronTransformDownEyeParticle[0xe0]; // 0x1e30            
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x1f10            
            // m_strTeamAmberModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strTeamAmberModel;
            char m_strTeamAmberModel[0xe0]; // 0x1ff0            
            // m_AmberEffigyModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_AmberEffigyModel;
            char m_AmberEffigyModel[0xe0]; // 0x20d0            
            // m_SapphEffigyModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_SapphEffigyModel;
            char m_SapphEffigyModel[0xe0]; // 0x21b0            
            // m_AmberCoreModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_AmberCoreModel;
            char m_AmberCoreModel[0xe0]; // 0x2290            
            // m_SapphCoreModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_SapphCoreModel;
            char m_SapphCoreModel[0xe0]; // 0x2370            
            float m_flCoreVerticalOffset; // 0x2450            
            uint8_t _pad2454[0x4]; // 0x2454
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_PatronTransformStartSound; // 0x2458            
            CSoundEventName m_PatronKilledSound; // 0x2468            
            CSoundEventName m_EffigySapphireExplodeSound; // 0x2478            
            CSoundEventName m_EffigyAmberExplodeSound; // 0x2488            
            CSoundEventName m_AmberReformSound; // 0x2498            
            CSoundEventName m_SapphireReformSound; // 0x24a8            
            CSoundEventName m_AmberReformingLoopSound; // 0x24b8            
            CSoundEventName m_SapphireReformingLoopSound; // 0x24c8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_LaserBeamModifier;
            char m_LaserBeamModifier[0x10]; // 0x24d8            
            // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DyingModifier;
            char m_DyingModifier[0x10]; // 0x24e8            
            // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_VulnerableModifier;
            char m_VulnerableModifier[0x10]; // 0x24f8            
            // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_Phase1Modifier;
            char m_Phase1Modifier[0x10]; // 0x2508            
            // m_EffigyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_EffigyModifier;
            char m_EffigyModifier[0x10]; // 0x2518            
            // m_Phase2DamagePulseModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_Phase2DamagePulseModifier;
            char m_Phase2DamagePulseModifier[0x10]; // 0x2528            
            // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_BackdoorProtection;
            char m_BackdoorProtection[0x10]; // 0x2538            
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x2548            
            // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ObjectiveRegen;
            char m_ObjectiveRegen[0x10]; // 0x2558            
            // m_ObjectiveHealthGrowthPhase1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ObjectiveHealthGrowthPhase1;
            char m_ObjectiveHealthGrowthPhase1[0x10]; // 0x2568            
            // m_ObjectiveHealthGrowthPhase2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ObjectiveHealthGrowthPhase2;
            char m_ObjectiveHealthGrowthPhase2[0x10]; // 0x2578            
            // m_DefenderInPitInvulnerable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DefenderInPitInvulnerable;
            char m_DefenderInPitInvulnerable[0x10]; // 0x2588            
            // metadata: MPropertyStartGroup "Laser"
            float m_flLaserMoveSpeed; // 0x2598            
            float m_flLaserCooldownPhase1; // 0x259c            
            float m_flLaserCooldownPhase2; // 0x25a0            
            float m_flLaserDurationPhase1; // 0x25a4            
            float m_flLaserDurationPhase2; // 0x25a8            
            // metadata: MPropertyStartGroup "TransitionProperties"
            float m_flPhase1DyingBegin; // 0x25ac            
            float m_flPhase1DyingDrop; // 0x25b0            
            float m_flPhase2DyingDropScale; // 0x25b4            
            float m_flPhase1DyingWait; // 0x25b8            
            float m_flPhase1DyingTransformUp; // 0x25bc            
            float m_flPhase1BossScale; // 0x25c0            
            float m_flPhase2BossScale; // 0x25c4            
            float m_flPostShrineTransition; // 0x25c8            
            uint8_t _pad25cc[0x4]; // 0x25cc
            // metadata: MPropertyStartGroup "Arm Attacks"
            // m_ArmAttackGroundHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmAttackGroundHit;
            char m_ArmAttackGroundHit[0xe0]; // 0x25d0            
            float m_flArmAttackHealthMin; // 0x26b0            
            float m_flArmAttackHealthMax; // 0x26b4            
            float m_flArmAttackCooldownMin; // 0x26b8            
            float m_flArmAttackCooldownMax; // 0x26bc            
            float m_flArmAttackTimeToHit; // 0x26c0            
            float m_flArmAttackRadius; // 0x26c4            
            float m_flArmAttackPosDotThres; // 0x26c8            
            float m_flArmAttackDamage; // 0x26cc            
            float m_flArmAttackKnockbackStrength; // 0x26d0            
            float m_flArmAttackInvulCooldownScale; // 0x26d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier3VData) == 0x26d8);
    };
};
