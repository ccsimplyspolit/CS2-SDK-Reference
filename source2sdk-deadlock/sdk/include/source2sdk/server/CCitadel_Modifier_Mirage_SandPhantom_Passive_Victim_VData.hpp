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
        // Size: 0xcf0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x750            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DebuffStatusPlayerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffStatusPlayerParticle;
            char m_DebuffStatusPlayerParticle[0xe0]; // 0x760            
            // m_DebuffStatusVictimParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffStatusVictimParticle;
            char m_DebuffStatusVictimParticle[0xe0]; // 0x840            
            // m_DebuffStatusNPCParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffStatusNPCParticle;
            char m_DebuffStatusNPCParticle[0xe0]; // 0x920            
            // m_StackDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackDamageParticle;
            char m_StackDamageParticle[0xe0]; // 0xa00            
            // m_StackReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackReadyParticle;
            char m_StackReadyParticle[0xe0]; // 0xae0            
            // m_StackAppliedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackAppliedParticle;
            char m_StackAppliedParticle[0xe0]; // 0xbc0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ConsumeMaxStacksSound; // 0xca0            
            CSoundEventName m_ConsumeMaxStacksHeroSound; // 0xcb0            
            CSoundEventName m_ApplyStackSound; // 0xcc0            
            CSoundEventName m_ApplyStackNPCSound; // 0xcd0            
            CSoundEventName m_StunSound; // 0xce0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData) == 0xcf0);
    };
};
