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
        // Size: 0x1918
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPowerJumpVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
            char m_JumpParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_InAirModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_InAirModifier;
            char m_InAirModifier[0x10]; // 0x18f8            
            // m_PowerJumpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PowerJumpModifier;
            char m_PowerJumpModifier[0x10]; // 0x1908            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPowerJumpVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityPowerJumpVData) == 0x1918);
    };
};
