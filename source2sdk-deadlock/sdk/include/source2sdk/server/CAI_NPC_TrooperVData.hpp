#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/TrooperType_t.hpp"
#include "source2sdk/client/TrooperVsConfig_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x23e0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_NPC_TrooperVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::TrooperType_t m_TrooperType; // 0x1348            
            float m_flNearDeathDuration; // 0x134c            
            float m_flFlySpeed; // 0x1350            
            float m_flFlyHeight; // 0x1354            
            float m_flMeleeDamage; // 0x1358            
            float m_flMeleeDuration; // 0x135c            
            float m_flMeleeChargeRange; // 0x1360            
            float m_flHealthBarOffsetDucking; // 0x1364            
            // metadata: MPropertyStartGroup "Enemy VS"
            source2sdk::client::TrooperVsConfig_t m_VSPlayer; // 0x1368            
            source2sdk::client::TrooperVsConfig_t m_VSTrooper; // 0x137c            
            source2sdk::client::TrooperVsConfig_t m_VSGuardian; // 0x1390            
            source2sdk::client::TrooperVsConfig_t m_VSWalker; // 0x13a4            
            source2sdk::client::TrooperVsConfig_t m_VSWatcher; // 0x13b8            
            source2sdk::client::TrooperVsConfig_t m_VSShrine; // 0x13cc            
            source2sdk::client::TrooperVsConfig_t m_VSPatron; // 0x13e0            
            source2sdk::client::TrooperVsConfig_t m_VSPatronPhase2; // 0x13f4            
            float m_flDPSPctGrowthPerMinute; // 0x1408            
            bool m_bBossWeaponEnabled; // 0x140c            
            uint8_t _pad140d[0x3]; // 0x140d
            source2sdk::client::CCitadelWeaponInfo m_BossWeapon; // 0x1410            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BossAttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BossAttackParticle;
            char m_BossAttackParticle[0xe0]; // 0x1b88            
            // m_LastHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LastHitParticle;
            char m_LastHitParticle[0xe0]; // 0x1c68            
            // m_TargetingLaserParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingLaserParticle;
            char m_TargetingLaserParticle[0xe0]; // 0x1d48            
            // m_TargetingEyeFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingEyeFlashParticle;
            char m_TargetingEyeFlashParticle[0xe0]; // 0x1e28            
            // m_sZiplineContainerBreakFromDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromDamageParticle;
            char m_sZiplineContainerBreakFromDamageParticle[0xe0]; // 0x1f08            
            // m_sZiplineContainerBreakFromLandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromLandingParticle;
            char m_sZiplineContainerBreakFromLandingParticle[0xe0]; // 0x1fe8            
            // m_MedicHealActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MedicHealActiveParticle;
            char m_MedicHealActiveParticle[0xe0]; // 0x20c8            
            // m_HeadHealthChangeAmberParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeadHealthChangeAmberParticle;
            char m_HeadHealthChangeAmberParticle[0xe0]; // 0x21a8            
            // m_HeadHealthChangeSapphireParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeadHealthChangeSapphireParticle;
            char m_HeadHealthChangeSapphireParticle[0xe0]; // 0x2288            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sPlayerLastHitSound; // 0x2368            
            CSoundEventName m_sCelebrationSound; // 0x2378            
            CSoundEventName m_sZiplineContainerBreakSound; // 0x2388            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NearDeathModifier;
            char m_NearDeathModifier[0x10]; // 0x2398            
            // m_ShrinesDownBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ShrinesDownBuffModifier;
            char m_ShrinesDownBuffModifier[0x10]; // 0x23a8            
            // m_NpcOutOfCombatRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NpcOutOfCombatRegenModifier;
            char m_NpcOutOfCombatRegenModifier[0x10]; // 0x23b8            
            uint8_t _pad23c8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_NPC_TrooperVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_NPC_TrooperVData) == 0x23e0);
    };
};
