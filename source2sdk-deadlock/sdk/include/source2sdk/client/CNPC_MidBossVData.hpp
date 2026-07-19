#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x1540
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_MidBossVData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            std::int32_t m_iStartingHealth; // 0x1348            
            std::int32_t m_iHealthGainPerMinute; // 0x134c            
            float m_flAggroTime; // 0x1350            
            uint8_t _pad1354[0x4]; // 0x1354
            // metadata: MPropertyStartGroup "Visuals"
            // m_DyingSmallExplosion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingSmallExplosion;
            char m_DyingSmallExplosion[0xe0]; // 0x1358            
            // m_DyingFinalExplosion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingFinalExplosion;
            char m_DyingFinalExplosion[0xe0]; // 0x1438            
            float m_flDyingDuration; // 0x1518            
            uint8_t _pad151c[0x4]; // 0x151c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_KnockbackAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KnockbackAura;
            char m_KnockbackAura[0x10]; // 0x1520            
            // m_AggroEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AggroEnemy;
            char m_AggroEnemy[0x10]; // 0x1530            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_MidBossVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_MidBossVData) == 0x1540);
    };
};
