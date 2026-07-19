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
        // Size: 0x1918
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityGarbageVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_GarbageAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GarbageAuraModifier;
            char m_GarbageAuraModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1828            
            // metadata: MPropertyStartGroup "+Vacuum Properties"
            float m_flAirSpeedMax; // 0x1908            
            float m_flFallSpeedMax; // 0x190c            
            float m_flAirDrag; // 0x1910            
            float m_flMaxMovespeed; // 0x1914            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityGarbageVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityGarbageVData) == 0x1918);
    };
};
