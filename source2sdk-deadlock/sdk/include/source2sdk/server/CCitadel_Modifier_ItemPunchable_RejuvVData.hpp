#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0xbf0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ItemPunchable_RejuvVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            std::int32_t m_iRejuvBossKill01; // 0x750            
            std::int32_t m_iRejuvBossKill02; // 0x754            
            float m_flPhysicsRadius; // 0x758            
            float m_flMaxDistForHeal; // 0x75c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_IsDroppingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle;
            char m_IsDroppingParticle[0xe0]; // 0x760            
            // m_IsPunchableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsPunchableParticle;
            char m_IsPunchableParticle[0xe0]; // 0x840            
            // m_IsFrozenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsFrozenParticle;
            char m_IsFrozenParticle[0xe0]; // 0x920            
            // m_DamagedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagedParticle;
            char m_DamagedParticle[0xe0]; // 0xa00            
            // m_AoEHealParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEHealParticle;
            char m_AoEHealParticle[0xe0]; // 0xae0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NearRejuvAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NearRejuvAuraModifier;
            char m_NearRejuvAuraModifier[0x10]; // 0xbc0            
            // m_ParryCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryCheckModifier;
            char m_ParryCheckModifier[0x10]; // 0xbd0            
            // metadata: MPropertyGroupName "Audio"
            CSoundEventName m_sHitSound; // 0xbe0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ItemPunchable_RejuvVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ItemPunchable_RejuvVData) == 0xbf0);
    };
};
