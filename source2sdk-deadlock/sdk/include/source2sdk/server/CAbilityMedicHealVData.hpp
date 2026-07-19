#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x19e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityMedicHealVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_HealBeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealBeamParticle;
            char m_HealBeamParticle[0xe0]; // 0x1818            
            // m_HealTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealTargetParticle;
            char m_HealTargetParticle[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHealCastSound; // 0x19d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityMedicHealVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityMedicHealVData) == 0x19e8);
    };
};
