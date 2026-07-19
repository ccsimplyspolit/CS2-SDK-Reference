#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x1920
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_StaticCharge_V2_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_StaticChargeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StaticChargeModifier;
            char m_StaticChargeModifier[0x10]; // 0x18f8            
            // m_StaticChargeWorldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StaticChargeWorldModifier;
            char m_StaticChargeWorldModifier[0x10]; // 0x1908            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flWorldTraceRadius; // 0x1918            
            float m_flUnitTraceRadius; // 0x191c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_StaticCharge_V2_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_StaticCharge_V2_VData) == 0x1920);
    };
};
