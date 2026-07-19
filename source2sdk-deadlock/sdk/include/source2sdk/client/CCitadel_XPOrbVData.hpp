#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
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
        // Standard-layout class: false
        // Size: 0xaa8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_XPOrbVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            bool m_bIsObjective; // 0x28            
            uint8_t _pad0029[0x7]; // 0x29
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Played to the player who claimed the orb."
            CSoundEventName m_strOrbClaimed; // 0x30            
            // metadata: MPropertyDescription "Played to the teammates of the player who claimed the orb."
            CSoundEventName m_strOrbClaimedTeammate; // 0x40            
            // metadata: MPropertyDescription "Played to the player when they denied an enemy orb."
            CSoundEventName m_strOrbDenied; // 0x50            
            // metadata: MPropertyDescription "Played to assigned earners when an enemy denied their orb."
            CSoundEventName m_strOrbDeniedPlayer; // 0x60            
            // metadata: MPropertyDescription "Played when the server receives a hit on the orb but is waiting to fully claim it."
            CSoundEventName m_strOrbHitConfirm; // 0x70            
            // metadata: MPropertyDescription "Played when the client hit the orb but it isn't confirmed by the server yet."
            CSoundEventName m_strOrbHitPredicted; // 0x80            
            // metadata: MPropertyStartGroup "Visuals"
            // m_sOrbModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sOrbModel;
            char m_sOrbModel[0xe0]; // 0x90            
            // m_sPredictedHitLimboGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPredictedHitLimboGlowParticle;
            char m_sPredictedHitLimboGlowParticle[0xe0]; // 0x170            
            // m_sFriendlyHitConfirmParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyHitConfirmParticle;
            char m_sFriendlyHitConfirmParticle[0xe0]; // 0x250            
            // m_sEnemyHitConfirmParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyHitConfirmParticle;
            char m_sEnemyHitConfirmParticle[0xe0]; // 0x330            
            // m_sFriendlyGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyGlowParticle;
            char m_sFriendlyGlowParticle[0xe0]; // 0x410            
            // m_sEnemyGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyGlowParticle;
            char m_sEnemyGlowParticle[0xe0]; // 0x4f0            
            // m_sGoldReceivedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sGoldReceivedParticle;
            char m_sGoldReceivedParticle[0xe0]; // 0x5d0            
            // m_sFriendlyOrbDeniedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbDeniedParticle;
            char m_sFriendlyOrbDeniedParticle[0xe0]; // 0x6b0            
            // m_sEnemyOrbDeniedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbDeniedParticle;
            char m_sEnemyOrbDeniedParticle[0xe0]; // 0x790            
            // m_sFriendlyOrbEarnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbEarnedParticle;
            char m_sFriendlyOrbEarnedParticle[0xe0]; // 0x870            
            // m_sEnemyOrbEarnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbEarnedParticle;
            char m_sEnemyOrbEarnedParticle[0xe0]; // 0x950            
            // metadata: MPropertyStartGroup "Behavior"
            float m_flOrbSpawnDelayMin; // 0xa30            
            float m_flOrbSpawnDelayMax; // 0xa34            
            float m_flOrbSpawnOffsetZ; // 0xa38            
            float m_flOrbSpawnOffsetRandomXYZ; // 0xa3c            
            float m_flGravityScale; // 0xa40            
            float m_flLateralSpeedMin; // 0xa44            
            float m_flLateralSpeedMax; // 0xa48            
            float m_flLateralMoveDuration; // 0xa4c            
            float m_flUpSpeedMin; // 0xa50            
            float m_flUpSpeedMax; // 0xa54            
            float m_flDownSpeed; // 0xa58            
            float m_flBurstSpeedMultiplier; // 0xa5c            
            float m_flBurstSpeedDuration; // 0xa60            
            float m_flOscillateFrequency; // 0xa64            
            float m_flLifeTime; // 0xa68            
            float m_flRadius; // 0xa6c            
            float m_flCollisionRadius; // 0xa70            
            float m_flInvulDurationMin; // 0xa74            
            float m_flInvulDurationMax; // 0xa78            
            bool m_bUseKillerPlaneOffsets; // 0xa7c            
            uint8_t _pad0a7d[0x3]; // 0xa7d
            float m_flKillerPlaneOffset; // 0xa80            
            float m_flKillerPlaneHorizontalDecayRate; // 0xa84            
            float m_flKillerPlaneHorizontalSpeedX; // 0xa88            
            float m_flKillerPlaneHorizontalSpeedY; // 0xa8c            
            float m_flKillerPlaneVerticalSpeed; // 0xa90            
            float m_flKillerPlaneSpeedNoise; // 0xa94            
            float m_flKillerPlaneLaunchOffset; // 0xa98            
            float m_flKillerPlaneLaunchDelay; // 0xa9c            
            float m_flOrbClaimWindow; // 0xaa0            
            uint8_t _pad0aa4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_XPOrbVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_XPOrbVData) == 0xaa8);
    };
};
