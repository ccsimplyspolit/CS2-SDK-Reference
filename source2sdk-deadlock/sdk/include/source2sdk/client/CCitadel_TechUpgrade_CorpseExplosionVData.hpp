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
        // Size: 0x19a8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_TechUpgrade_CorpseExplosionVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ExplosionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ExplosionModifier;
            char m_ExplosionModifier[0x10]; // 0x1998            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_TechUpgrade_CorpseExplosionVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_TechUpgrade_CorpseExplosionVData) == 0x19a8);
    };
};
