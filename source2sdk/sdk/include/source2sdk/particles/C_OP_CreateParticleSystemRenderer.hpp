#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CPAssignment_t.hpp"
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x908
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CreateParticleSystemRenderer : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "effect"
            // m_hEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hEffect;
            char m_hEffect[0x8]; // 0x228            
            // metadata: MPropertyFriendlyName "event type"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x230            
            uint8_t _pad0234[0x4]; // 0x234
            // metadata: MPropertyFriendlyName "Control Points"
            // m_vecCPs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::particles::CPAssignment_t> m_vecCPs;
            char m_vecCPs[0x10]; // 0x238            
            // metadata: MPropertyDescription "Effect Config"
            // metadata: MPropertyAttributeEditor "ParticleConfigName()"
            // metadata: MPropertyEditContextOverrideKey
            // metadata: MPropertyFriendlyName "Particle Config"
            CUtlString m_szParticleConfig; // 0x248            
            // metadata: MPropertyFriendlyName "Aggregation Position"
            source2sdk::particleslib::CPerParticleVecInput m_AggregationPos; // 0x250            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CreateParticleSystemRenderer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CreateParticleSystemRenderer) == 0x908);
    };
};
