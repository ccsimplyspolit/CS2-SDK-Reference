#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
        // Size: 0x1a98
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CItemCapacitorVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x18b8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamageParticle;
            char m_DamageParticle[0xe0]; // 0x18c8            
            // m_PurgeCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PurgeCastParticle;
            char m_PurgeCastParticle[0xe0]; // 0x19a8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_PurgeSound; // 0x1a88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemCapacitorVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CItemCapacitorVData) == 0x1a98);
    };
};
