#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_BaseNPCVData.hpp"

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
        // Size: 0x1348
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CAI_CitadelNPCVData : public source2sdk::server::CAI_BaseNPCVData
        {
        public:
            // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
            char m_mapBoundAbilities[0x28]; // 0x330            
            float m_flSightRangePlayers; // 0x358            
            float m_flSightRangeNPCs; // 0x35c            
            CGlobalSymbol m_MeleeAnimName; // 0x360            
            float m_flMeleeAttemptRange; // 0x368            
            float m_flMeleeHitRange; // 0x36c            
            // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_MeleeAttackPoints;
            char m_MeleeAttackPoints[0x18]; // 0x370            
            float m_flMaxHealthBarDrawDistance; // 0x388            
            // metadata: MPropertyStartGroup "Movement"
            float m_flWalkSpeed; // 0x38c            
            float m_flRunSpeed; // 0x390            
            float m_flTurnRate; // 0x394            
            float m_flAcceleration; // 0x398            
            float m_flStepHeight; // 0x39c            
            float m_flJumpAnticipationTime; // 0x3a0            
            uint8_t _pad03a4[0x4]; // 0x3a4
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_BeamStartSound; // 0x3a8            
            CSoundEventName m_BeamStopSound; // 0x3b8            
            CSoundEventName m_BeamPointStartLoopSound; // 0x3c8            
            CSoundEventName m_BeamPointEndLoopSound; // 0x3d8            
            CSoundEventName m_BeamPointClosestLoopSound; // 0x3e8            
            CSoundEventName m_strAmbientLoopSound; // 0x3f8            
            CSoundEventName m_DeathSound; // 0x408            
            CSoundEventName m_strLastHitSound; // 0x418            
            bool m_bPlayLastHitSound; // 0x428            
            uint8_t _pad0429[0x3]; // 0x429
            float m_flLastHitSoundWindowTime; // 0x42c            
            CSoundEventName m_MeleeHitSound; // 0x430            
            CSoundEventName m_MeleeHitPlayerSound; // 0x440            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "When set, uses this model when on the Amber team.  Falls back to Model Name if not set"
            // m_sAmberModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sAmberModelName;
            char m_sAmberModelName[0xe0]; // 0x450            
            // metadata: MPropertyDescription "When set, uses this model when on the Sapphire team.  Falls back to Model Name if not set"
            // m_sSapphireModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sSapphireModelName;
            char m_sSapphireModelName[0xe0]; // 0x530            
            CModelMaterialGroupName m_sDefaultMaterialGroupName; // 0x610            
            CModelMaterialGroupName m_sEnemyMaterialGroupName; // 0x618            
            CModelMaterialGroupName m_sTeam1MaterialGroupName; // 0x620            
            CModelMaterialGroupName m_sTeam2MaterialGroupName; // 0x628            
            // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
            char m_MeleeSwingParticle[0xe0]; // 0x630            
            // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
            char m_MeleeActivateParticle[0xe0]; // 0x710            
            float m_flModelScale; // 0x7f0            
            uint8_t _pad07f4[0x4]; // 0x7f4
            // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
            // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
            char m_DeathParticle[0xe0]; // 0x7f8            
            // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
            char m_JumpParticle[0xe0]; // 0x8d8            
            // metadata: MPropertyStartGroup "Outline"
            float m_flOutlineRange; // 0x9b8            
            float m_flOutlineWidth; // 0x9bc            
            // metadata: MPropertyDescription "Whether to show an outline through walls"
            bool m_bOutlineThroughWalls; // 0x9c0            
            // metadata: MPropertyDescription "Whether to show an outline when visible"
            bool m_bOutlineWhenVisible; // 0x9c1            
            // metadata: MPropertyDescription "If not showing an outline, whether to hide / suppress other outlines through this object."
            bool m_bSuppressOtherOutlinesWhenVisible; // 0x9c2            
            uint8_t _pad09c3[0x5]; // 0x9c3
            // metadata: MPropertyStartGroup "Health Bar"
            // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
            char m_HealthBarParticle[0xe0]; // 0x9c8            
            CUtlString m_sHealthBarAttachment; // 0xaa8            
            Color m_HealthBarColorFriend; // 0xab0            
            Color m_HealthBarColorEnemy; // 0xab4            
            Color m_HealthBarColorTeam1; // 0xab8            
            Color m_HealthBarColorTeam2; // 0xabc            
            Color m_HealthBarColorTeamNeutral; // 0xac0            
            // metadata: MPropertyStartGroup "Misc"
            // metadata: MPropertyDescription "Extra distance that a melee attacking npc can hit this npc from. Useful for medium and larger npcs."
            float m_flMeleeTargetRadius; // 0xac4            
            float m_flHealthBarOffset; // 0xac8            
            // metadata: MPropertyDescription "When true, spawns breakables defined in the model"
            bool m_bSpawnBreakablesOnDeath; // 0xacc            
            uint8_t _pad0acd[0x3]; // 0xacd
            // metadata: MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
            float m_flBreakableForceScale; // 0xad0            
            // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
            float m_flPhysicsImpulseMultiplier; // 0xad4            
            // metadata: MPropertyStartGroup "Beam Weapon"
            float m_flBeamWeaponWidth; // 0xad8            
            float m_flBeamTurnRate; // 0xadc            
            // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
            char m_BeamWeaponParticle[0xe0]; // 0xae0            
            // metadata: MPropertyDescription "When set, uses this as a custom icon for the unit, currently only used for precaching references in code."
            CPanoramaImageName m_strCustomUnitIcon; // 0xbc0            
            source2sdk::client::CCitadelWeaponInfo m_WeaponInfo; // 0xbd0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPCVData) == 0x1348);
    };
};
