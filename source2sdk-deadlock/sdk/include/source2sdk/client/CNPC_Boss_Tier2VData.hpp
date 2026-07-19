#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x1790
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier2VData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            float m_flSightRange; // 0x1348            
            float m_flPlayerInitialSightRange; // 0x134c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x1350            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_BeamHitSound; // 0x1430            
            CSoundEventName m_BeamAnnounceSound; // 0x1440            
            CSoundEventName m_BarrageAnnounceSound; // 0x1450            
            CSoundEventName m_MeleeAnnounceSound; // 0x1460            
            // metadata: MPropertyStartGroup "Electric Beam (Laser)"
            bool m_bBeamTurnToFire; // 0x1470            
            uint8_t _pad1471[0x7]; // 0x1471
            // metadata: MPropertyStartGroup "Stomp"
            // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
            char m_StompImpactEffect[0xe0]; // 0x1478            
            // m_StompWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompWarningEffect;
            char m_StompWarningEffect[0xe0]; // 0x1558            
            float m_flTossSpeed; // 0x1638            
            float m_flStompDamage; // 0x163c            
            float m_flStompDamageMaxHealthPercent; // 0x1640            
            float m_flStompDamageTrooperRate; // 0x1644            
            float m_flStompTossUpMagnitude; // 0x1648            
            float m_flStunDuration; // 0x164c            
            float m_flStompAttemptRadius; // 0x1650            
            float m_flStompImpactRadius; // 0x1654            
            float m_flStompImpactHeight; // 0x1658            
            float m_flStompParryRadius; // 0x165c            
            float m_flStompParryImpulse; // 0x1660            
            float m_flStompParryImpulseInAir; // 0x1664            
            float m_flStompParryDamageMult; // 0x1668            
            float m_flSweepRadius; // 0x166c            
            float m_flSweepSpeed; // 0x1670            
            float m_flSweepZScale; // 0x1674            
            float m_flSweepMaxAngle; // 0x1678            
            float m_flSweepMaxRange; // 0x167c            
            float m_flSweepAdjustSpeed; // 0x1680            
            uint8_t _pad1684[0x4]; // 0x1684
            CSoundEventName m_StompAnnounceSound; // 0x1688            
            CSoundEventName m_StompParriedSound; // 0x1698            
            CSoundEventName m_StompImpactSound; // 0x16a8            
            // metadata: MPropertyStartGroup "Gun"
            float m_flBurstDuration; // 0x16b8            
            float m_flBurstCooldown; // 0x16bc            
            // metadata: MPropertyStartGroup "Melee"
            float m_flMeleeDuration; // 0x16c0            
            float m_flMeleeHitTime; // 0x16c4            
            float m_flMeleeAttackRadius; // 0x16c8            
            float m_flMeleeDamage; // 0x16cc            
            float m_flMeleeDamageHealthPct; // 0x16d0            
            float m_flMeleeTrooperStunTime; // 0x16d4            
            // metadata: MPropertyStartGroup "Modifiers"
            // metadata: MPropertyDescription "Backdoor Protection Modifier"
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x16d8            
            float m_flBackDoorProtectionRange; // 0x16e8            
            uint8_t _pad16ec[0x4]; // 0x16ec
            // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InvulModifier;
            char m_InvulModifier[0x10]; // 0x16f0            
            float m_flInvulModifierRange; // 0x1700            
            uint8_t _pad1704[0x4]; // 0x1704
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x1708            
            // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FriendlyAuraModifier;
            char m_FriendlyAuraModifier[0x10]; // 0x1718            
            // m_NearbyEnemyResist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NearbyEnemyResist;
            char m_NearbyEnemyResist[0x10]; // 0x1728            
            // m_StatTrackerAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StatTrackerAuraModifier;
            char m_StatTrackerAuraModifier[0x10]; // 0x1738            
            // m_EmpoweredModifierLevel1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_EmpoweredModifierLevel1;
            char m_EmpoweredModifierLevel1[0x10]; // 0x1748            
            // m_EmpoweredModifierLevel2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_EmpoweredModifierLevel2;
            char m_EmpoweredModifierLevel2[0x10]; // 0x1758            
            // m_StaggerWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StaggerWatcherModifier;
            char m_StaggerWatcherModifier[0x10]; // 0x1768            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMaxStaggerBuildup; // 0x1778            
            float m_flStaggerDuration; // 0x177c            
            float m_flStaggerMeleeMult; // 0x1780            
            float m_flStaggerDamageMult; // 0x1784            
            float m_flAoeWaveHealthThreshold; // 0x1788            
            uint8_t _pad178c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_Boss_Tier2VData) == 0x1790);
    };
};
