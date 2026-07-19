#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x1910
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilitySprintVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_SprintParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprintParticle;
            char m_SprintParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSprintSound; // 0x18f8            
            // metadata: MPropertyStartGroup "+Sprint Properties"
            float m_flSprintAccMS; // 0x1908            
            uint8_t _pad190c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilitySprintVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilitySprintVData) == 0x1910);
    };
};
