#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/ENeutralWeakPointType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
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
        // Size: 0x16c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::ENeutralTrooperType m_eTrooperType; // 0x1348            
            float m_flGoldReward; // 0x134c            
            float m_flGoldRewardBonusPercentPerMinute; // 0x1350            
            bool m_bCapSimultanousAttackers; // 0x1354            
            uint8_t _pad1355[0x3]; // 0x1355
            float m_flShieldReactivateDelay; // 0x1358            
            float m_flDyingDuration; // 0x135c            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x1360            
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x1361            
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x1362            
            uint8_t _pad1363[0x5]; // 0x1363
            // metadata: MPropertyStartGroup "Shield FX"
            // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
            char m_ShieldParticle[0xe0]; // 0x1368            
            // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
            // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
            char m_retaliateParticle[0xe0]; // 0x1448            
            // metadata: MPropertyStartGroup "AOE Attack"
            bool m_bHasAOEAttack; // 0x1528            
            uint8_t _pad1529[0x3]; // 0x1529
            float m_flAOERadius; // 0x152c            
            float m_flAOEDamage; // 0x1530            
            float m_flAOEAttackCooldown; // 0x1534            
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x1538            
            // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AOEDebuffToApply;
            char m_AOEDebuffToApply[0x10]; // 0x1618            
            CSoundEventName m_AOEInitiateSound; // 0x1628            
            CSoundEventName m_AOESound; // 0x1638            
            float m_AOEDebuffDuration; // 0x1648            
            uint8_t _pad164c[0x4]; // 0x164c
            // metadata: MPropertyStartGroup "Body"
            // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomBodyGroup;
            char m_vecRandomBodyGroup[0x18]; // 0x1650            
            // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomSkin;
            char m_vecRandomSkin[0x18]; // 0x1668            
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHullCapsuleRadius; // 0x1680            
            float m_flHullCapsuleHeight; // 0x1684            
            // metadata: MPropertyStartGroup "Idles"
            bool m_bFaceEnemyWhileIdle; // 0x1688            
            uint8_t _pad1689[0x7]; // 0x1689
            CSoundEventName m_IdleLoopSound; // 0x1690            
            // metadata: MPropertyStartGroup "Movement"
            source2sdk::client::MoveType_t m_MoveType; // 0x16a0            
            uint8_t _pad16a1[0x3]; // 0x16a1
            // metadata: MPropertyStartGroup "WeakPoints"
            std::int32_t m_iWeakPointCount; // 0x16a4            
            source2sdk::client::ENeutralWeakPointType m_iWeakPointType; // 0x16a8            
            uint8_t _pad16a9[0x3]; // 0x16a9
            float m_iWeakPointRespawnTime; // 0x16ac            
            // m_NeutralDamageGrowth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NeutralDamageGrowth;
            char m_NeutralDamageGrowth[0x10]; // 0x16b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperNeutralVData) == 0x16c0);
    };
};
