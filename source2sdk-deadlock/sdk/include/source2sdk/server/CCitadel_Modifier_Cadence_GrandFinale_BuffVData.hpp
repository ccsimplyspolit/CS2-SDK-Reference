#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/server/CCitadel_Modifier_Base_Buildup.hpp"

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
        // Size: 0x850
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuildUpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier;
            char m_BuildUpModifier[0x10]; // 0x750            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x760            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ExplodeSound; // 0x840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Cadence_GrandFinale_BuffVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Cadence_GrandFinale_BuffVData) == 0x850);
    };
};
