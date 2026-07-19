#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x648
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_DistanceToNeighborCull : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "cull distance"
            source2sdk::particleslib::CPerParticleFloatInput m_flDistance; // 0x1e0            
            // metadata: MPropertyFriendlyName "include particle radius"
            bool m_bIncludeRadii; // 0x350            
            uint8_t _pad0351[0x7]; // 0x351
            // metadata: MPropertyFriendlyName "lifespan overlap percentage"
            source2sdk::particleslib::CPerParticleFloatInput m_flLifespanOverlap; // 0x358            
            // metadata: MPropertyFriendlyName "attribute to modify"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldModify; // 0x4c8            
            uint8_t _pad04cc[0x4]; // 0x4cc
            // metadata: MPropertyFriendlyName "modify amount"
            // metadata: MPropertySuppressExpr "m_nFieldOutput == PARTICLE_ATTRIBUTE_UNUSED"
            source2sdk::particleslib::CPerParticleFloatInput m_flModify; // 0x4d0            
            // metadata: MPropertyFriendlyName "set value method"
            // metadata: MPropertySuppressExpr "m_nFieldOutput == PARTICLE_ATTRIBUTE_UNUSED"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x640            
            // metadata: MPropertyFriendlyName "use neighbor value for modify base"
            // metadata: MPropertySuppressExpr "m_nFieldOutput == PARTICLE_ATTRIBUTE_UNUSED"
            bool m_bUseNeighbor; // 0x644            
            uint8_t _pad0645[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_DistanceToNeighborCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_DistanceToNeighborCull) == 0x648);
    };
};
