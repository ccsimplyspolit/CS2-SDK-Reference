#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0xa00
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_CheatDeathImmunityVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_BuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffParticle;
            char m_BuffParticle[0xe0]; // 0x750            
            // m_BuffPlayerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffPlayerParticle;
            char m_BuffPlayerParticle[0xe0]; // 0x830            
            // m_StatusEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_StatusEffect;
            char m_StatusEffect[0xe0]; // 0x910            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strTimerSound; // 0x9f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_CheatDeathImmunityVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_CheatDeathImmunityVData) == 0xa00);
    };
};
