#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/ModelChange_t.hpp"
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
        // Size: 0x920
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_AnimalCurseVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            source2sdk::client::ModelChange_t m_CursedModel; // 0x750            
            // m_TargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle;
            char m_TargetParticle[0xe0]; // 0x838            
            // metadata: MPropertyStartGroup "+Properties"
            float m_flModelScale; // 0x918            
            uint8_t _pad091c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_AnimalCurseVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_AnimalCurseVData) == 0x920);
    };
};
