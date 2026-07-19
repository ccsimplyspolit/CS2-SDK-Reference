#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0xad0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatTetheredVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_RopeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RopeParticle;
            char m_RopeParticle[0xe0]; // 0x750            
            // m_RopeCancelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RopeCancelParticle;
            char m_RopeCancelParticle[0xe0]; // 0x830            
            // m_BleedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BleedParticle;
            char m_BleedParticle[0xe0]; // 0x910            
            // m_RangeIndicatorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RangeIndicatorParticle;
            char m_RangeIndicatorParticle[0xe0]; // 0x9f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatTetheredVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PunkgoatTetheredVData) == 0xad0);
    };
};
