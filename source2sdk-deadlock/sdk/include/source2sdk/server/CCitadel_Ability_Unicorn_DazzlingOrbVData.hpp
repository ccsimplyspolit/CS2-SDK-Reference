#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x1950
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Unicorn_DazzlingOrbVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            CPiecewiseCurve m_FallSpeedCurve; // 0x1818            
            float m_flAirSpeedMax; // 0x1858            
            float m_flAirDrag; // 0x185c            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_OrbWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_OrbWatcherModifier;
            char m_OrbWatcherModifier[0x10]; // 0x1860            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
            char m_ChargeParticle[0xe0]; // 0x1870            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Unicorn_DazzlingOrbVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Unicorn_DazzlingOrbVData) == 0x1950);
    };
};
